#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Queue of prime numbers (to adequately scale the HashMap) */

/* Definitions */

typedef struct prime {
    int number;
    struct prime *next;
} Prime;

typedef struct {
    Prime *start, *end;
} PrimesQueue;

Prime *initPrime(int n, Prime *next);
PrimesQueue *initPrimesQueue(int min);
void expandPrimesQueue(PrimesQueue *q, int min);
void freePrime(Prime *p);
void freePrimesQueue(PrimesQueue *q);
void printPrimesQueue(PrimesQueue *q);
void shrinkPrimesQueue(PrimesQueue *q, int min);

/* Functions */

Prime *initPrime(int n, Prime *next) {
    Prime *p = malloc(sizeof(Prime));
    p->number = n;
    p->next = next;
    return p;
}

PrimesQueue *initPrimesQueue(int min) {
    Prime *p;
    PrimesQueue *q;

    if (min < 3)
        return NULL;

    q = malloc(sizeof(PrimesQueue));
    p = initPrime(2, initPrime(3, NULL));
    q->start = p;
    q->end = p->next;
    expandPrimesQueue(q, min);
    return q;
}

void shrinkPrimesQueue(PrimesQueue *q, int min) {
    Prime *p;

    if (!q || q->end->number <= min)
        return;

    if (min < 3) {
        freePrimesQueue(q);
        return;
    }
    p = q->start;
    while (p->next && p->next->number <= min)
        p = p->next;
    p = p->next;
    freePrime(p->next);
    q->end = p;
    q->end->next = NULL;
}

void expandPrimesQueue(PrimesQueue *q, int min) {
    int i;
    Prime *p;

    if (!q)
        return;

    for (i = q->end->number; q->end->number < min; i += 2) {
        p = q->start;
        while (p && i % p->number != 0)
            p = p->next;
        if (p)
            continue;
        q->end->next = initPrime(i, NULL);
        q->end = q->end->next;
    }
}

void freePrime(Prime *p) {
    if (!p)
        return;
    freePrime(p->next);
    free(p);
}

void freePrimesQueue(PrimesQueue *q) {
    if (!q)
        return;
    freePrime(q->start);
    free(q);
}

void printPrimesQueue(PrimesQueue *q) {
    Prime *p;

    if (!q)
        return;

    p = q->start;
    printf("Primes Queue: ");
    printf("%d", p->number);
    while (p->next) {
        p = p->next;
        printf(", %d", p->number);
    }
    printf("\n");
}

/* HashMap */

/* Definitions */

#define EMPTY INT_MIN
#define REMOVED INT_MAX
#define NONE -1

typedef struct {
    int *keys, entries, buckets;
    PrimesQueue *primes;
} HashMap;

HashMap *initHashMap();
bool insertKey(int key, HashMap *h);
bool removeKey(int key, HashMap *h);
bool searchKey(int key, HashMap *h);
int *initKeys(int buckets);
int *resizeHashMap(int newSize, HashMap *h);
int getIndex(int key, int entries, int size, int *keys);
int h1(int key, int size);
int h2(int key, int size);
int hash(int key, int i, int size);
void expandHashMap(int min, HashMap *h);
void freeHashMap(HashMap *h);
void printHashMap(HashMap *h);
void trimHashMap(HashMap *h);

/* Functions */

HashMap *initHashMap() {
    HashMap *h = malloc(sizeof(HashMap));

    h->buckets = 1;
    h->entries = 0;
    h->keys = initKeys(h->buckets);
    h->primes = initPrimesQueue(3);
    return h;
}

bool insertKey(int key, HashMap *h) {
    int i, index, removed;

    if (!h)
        return false;

    i = 0;
    removed = NONE;

    do {
        index = hash(key, i, h->buckets);
        if (removed == NONE && h->keys[index] == REMOVED)
            removed = index;
    } while (++i < h->entries && h->keys[index] != key &&
             h->keys[index] != EMPTY);

    if (h->keys[index] == key)
        return false;
    if (removed != NONE) {
        h->keys[removed] = key;
        h->entries++;
        return true;
    }
    if (h->keys[index] == EMPTY) {
        h->keys[index] = key;
        h->entries++;
        return true;
    }
    expandHashMap(2 * h->buckets, h);
    return insertKey(key, h);
}

bool removeKey(int key, HashMap *h) {
    int index;

    if (!h)
        return false;
    index = getIndex(key, h->entries, h->buckets, h->keys);
    if (h->keys[index] != key)
        return false;
    h->keys[index] = REMOVED;
    h->entries--;
    return true;
}

bool searchKey(int key, HashMap *h) {
    return (h &&
            h->keys[getIndex(key, h->entries, h->buckets, h->keys)] == key);
}

int *initKeys(int buckets) {
    int i, *keys = malloc(buckets * sizeof(int));
    for (i = 0; i < buckets; i++)
        keys[i] = EMPTY;
    return keys;
}

int *resizeHashMap(int newSize, HashMap *h) {
    int i, entries, *new = initKeys(newSize);
    for (i = entries = 0; i < h->buckets; i++)
        if (h->keys[i] != EMPTY && h->keys[i] != REMOVED)
            new[getIndex(h->keys[i], entries++, newSize, h->keys)] = h->keys[i];
    free(h->keys);
    h->buckets = newSize;
    return new;
}

int getIndex(int key, int entries, int size, int *keys) {
    int i = 0, index;

    do {
        index = hash(key, i, size);
    } while (++i < entries && keys[index] != key && keys[index] != EMPTY);
    return index;
}

int h1(int key, int size) { return key % size; }

int h2(int key, int size) {
    size = size / 2 + 1;
    return size - key % size;
}

int hash(int key, int i, int size) {
    return (h1(key, size) + i * h2(key, size)) % size;
}

void expandHashMap(int min, HashMap *h) {
    expandPrimesQueue(h->primes, min);
    h->keys = resizeHashMap(h->primes->end->number, h);
}

void freeHashMap(HashMap *h) {
    if (!h)
        return;
    free(h->keys);
    freePrimesQueue(h->primes);
    free(h);
}

void printHashMap(HashMap *h) {
    int i;

    if (!h)
        return;
    printf("HashMap (size [%d], entries [%d]):\n", h->buckets, h->entries);
    for (i = 0; i < h->buckets; i++) {
        printf("Bucket %d:\t", i);
        if (h->keys[i] == EMPTY)
            printf("EMPTY\n");
        else if (h->keys[i] == REMOVED)
            printf("REMOVED\n");
        else
            printf("%d\n", h->keys[i]);
    }
}

void trimHashMap(HashMap *h) {
    shrinkPrimesQueue(h->primes, h->entries);
    h->keys = resizeHashMap(h->primes->end->number, h);
}

/* Driver function to test the Hash Map implementation */

int main() {
    int i, j, k;
    HashMap *h;
    PrimesQueue *q;

    printf("This program tests a Hash Map implementation, and its supporting "
           "prime numbers queue.\n");

    /* Testing the prime number queue implementation */

    printf(
        "Let's start by the prime number queue. Type in a number greater than "
        "2, an ascending list of prime numbers ending on that number (if it is "
        "a prime number) or the next prime number should be printed: ");
    if (!scanf(" %d", &i) || i < 3)
        return 1;
    q = initPrimesQueue(i);
    printPrimesQueue(q);

    printf("\nNow let's try expanding that list. Type a number greater than %d "
           "to have zero or more prime numbers added to the list: ",
           i);
    if (!scanf(" %d", &j) || i >= j)
        return 1;
    i = j;
    expandPrimesQueue(q, i);
    printPrimesQueue(q);

    printf("\nNow it's time to shrink it. Type a number smaller than %d: ", i);
    if (!scanf(" %d", &j) || i <= j)
        return 1;
    i = j;
    shrinkPrimesQueue(q, i);
    printPrimesQueue(q);
    freePrimesQueue(q);

    /* Testing the hash map implementation */

    printf("Let's proceed to test the HashMap itself. Initializing it.\n");
    h = initHashMap();
    printHashMap(h);

    printf("Type in a number of keys greater than 0 to add to it: ");
    if (!scanf(" %d", &j) || j < 1)
        return 1;
    for (i = 0; i < j; i++) {
        printf("Type in the key %d: ", i);
        if (!scanf(" %d", &k))
            return 1;
        insertKey(k, h);
    }
    printHashMap(h);

    printf("Type in a number of keys greater than 0 to be removed from it: ");
    if (!scanf(" %d", &j) || j < 1)
        return 1;
    for (i = 0; i < j; i++) {
        printf("Type in the key %d: ", i);
        if (!scanf(" %d", &k))
            return 1;
        removeKey(k, h);
    }
    printHashMap(h);

    printf("Type in a number of keys greater than 0 to be searched in it: ");
    if (!scanf(" %d", &j) || j < 1)
        return 1;
    for (i = 0; i < j; i++) {
        printf("Type in the key %d: ", i);
        if (!scanf(" %d", &k))
            return 1;
        if (searchKey(k, h))
            printf("Found it.\n");
        else
            printf("Not found.\n");
    }

    printf("Now, let's try expanding the HashMap. Type in a minimum size for "
           "it greater than %d: \n",
           h->buckets);
    if (!scanf(" %d", &i) || i <= h->buckets)
        return 1;
    expandHashMap(i, h);
    printHashMap(h);

    printf("And here it's trimmed version:\n");
    trimHashMap(h);
    printHashMap(h);

    printf("And, that's it!\n");
    freeHashMap(h);
    return 0;
}
