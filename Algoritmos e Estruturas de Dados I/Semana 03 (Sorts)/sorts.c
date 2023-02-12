#include <stdbool.h>
#include <stdlib.h>
#define array int *

typedef struct node {
    int key;
    struct node *next;
} Node;

bool isSorted(array A, int size) {
    if (size <= 1)
        return true;
    if (*A > *(A + 1))
        return false;
    return isSorted(A + 1, size - 1);
}

/* Bubble Sort */

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubbleSort(array A, int size) {
    int i;

    if (size-- <= 1)
        return;
    for (i = 0; i < size; i++)
        if (A[i] > A[i + 1])
            swap(&A[i], &A[i + 1]);
    bubbleSort(A, size);
}

/* Selection Sort */

int *minimalValue(array A, int size) {
    int i, pos = 0;

    for (i = 1; i < size; i++)
        if (A[i] < A[pos])
            pos = i;
    return A + pos;
}

void selectionSort(array A, int size) {
    if (size <= 1)
        return;
    swap(A, minimalValue(A, size));
    selectionSort(A + 1, size - 1);
}

/* Insertion Sort */

void insertionSort(array A, int size) {
    int i, tmp;

    if (size-- <= 1)
        return;
    insertionSort(A, size);
    tmp = A[size];
    for (i = size; i > 0 && A[i - 1] > tmp; i--)
        A[i] = A[i - 1];
    A[i] = tmp;
}

/* Insertion Sort for linked lists */

Node *insert(Node *HEAD) {
    Node *tmp = HEAD, *prev = tmp->next, *next;

    HEAD = prev;
    for (next = prev->next; next && tmp->key > next->key; next = next->next)
        prev = next;

    prev->next = tmp;
    tmp->next = next;
    return HEAD;
}

Node *insertionSort(Node *HEAD) {
    if (HEAD) {
        HEAD->next = insertionSort(HEAD->next);
        if (HEAD->next && HEAD->key > HEAD->next->key)
            return insert(HEAD);
    }
    return HEAD;
}

/* Shell sort */

void insertionSortMod(array A, int size, int start, int gap) {
    int i = start + gap, tmp;

    if (i >= size)
        return;
    tmp = A[i];
    while (i >= gap && A[i - gap] > tmp) {
        A[i] = A[i - gap];
        i -= gap;
    }
    A[i] = tmp;
    insertionSortMod(A, size, start + gap, gap);
}

void shellSort(array A, int size) {
    int i, sublist_lenght;

    for (sublist_lenght = size / 2; sublist_lenght > 0; sublist_lenght /= 2)
        for (i = 0; i < sublist_lenght; i++)
            insertionSortMod(A, size, i, sublist_lenght);
}

/* Merge Sort */

void merge(array A, int pivot, int size) {
    int i, k, j = pivot;
    array tmp = malloc(size * sizeof(int));

    for (i = k = 0; k < size; k++)
        tmp[k] = (j == size || (i < pivot && A[i] <= A[j])) ? A[i++] : A[j++];
    for (k = 0; k < size; k++)
        A[k] = tmp[k];
    free(tmp);
}

/* Merge function using a watchdog to check for the limits of the array. One
less comparison is made per loop and thus this is a faster version.

void merge(array A, int pivot, int size) {
    int i = 0, j = size - 1, k; array tmp = malloc(size * sizeof(int));

    while (i < pivot) {
        tmp[i] = A[i];
        i++;
    }
    while (i < size) {
        tmp[i] = A[j - (i - pivot)];
        i++;
    }
    for (i = k = 0; k < size; k++)
        A[k] = (tmp[i] <= tmp[j]) ? tmp[i++] : tmp[j--];
    free(tmp);
}
*/

void mergeSort(array A, int size) {
    int pivot;

    if (size <= 1)
        return;
    pivot = size / 2;
    mergeSort(A, pivot);
    mergeSort(A + pivot, size - pivot);
    merge(A, pivot, size);
}

/* Merge Sort for Linked Nodes */

Node *mid(Node *slow) {
    Node *fast = slow->next;

    while (fast && (fast = fast->next)) {
        fast = fast->next;
        slow = slow->next;
    }
    fast = slow->next;
    slow->next = NULL;
    return fast;
}

Node *merge(Node *a, Node *b) {
    if (a) {
        if (!b)
            return a;
        if (a->key <= b->key) {
            a->next = merge(a->next, b);
            return a;
        }
        b->next = merge(a, b->next);
    }
    return b;
}

Node *mergeSort(Node *n) {
    return (n) ? merge(mergeSort(n), mergeSort(mid(n))) : n;
}

/* Quick Sort */

int *median(int *a, int *b, int *c) {
    if ((*a > *b) ^ (*a > *c))
        return a;
    if ((*b < *a) ^ (*b < *c))
        return b;
    return c;
}

int partition(array A, int size) {
    int i, j, last = size - 1;

    swap(A + last, median(A, A + size / 2, A + last));
    for (i = j = 0; i < last; i++)
        if (A[i] <= A[last])
            swap(&A[i], &A[j++]);
    swap(A + i, A + j);
    return j;
}

void quickSort(array A, int size) {
    int pivot;

    if (size <= 1)
        return;
    pivot = partition(A, size);
    quickSort(A, pivot++);
    quickSort(A + pivot, size - pivot);
}

/* Quick sort for linked lists */

Node *median(Node *start) {
    Node *slow = start->next, *fast = slow->next;

    if (!fast)
        return slow;
    while (fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    if ((start->key > slow->key) ^ (start->key > fast->key))
        return start;
    if ((slow->key < start->key) ^ (slow->key < fast->key))
        return slow;
    return fast;
}

void partition(Node *n, Node *pivot, Node **le, Node **gt) {
    if (!n)
        *le = *gt = NULL;
    else if (n == pivot)
        partition(n->next, pivot, le, gt);
    else if (n->key <= pivot->key) {
        *le = n;
        partition(n->next, pivot, &n->next, gt);
    } else {
        *gt = n;
        partition(n->next, pivot, le, &n->next);
    }
}

Node *append(Node *le, Node *pivot, Node *gt) {
    if (le) {
        le->next = append(le->next, pivot, gt);
        return le;
    }
    pivot->next = gt;
    return pivot;
}

Node *quickSort(Node *HEAD) {
    Node *le, *gt, *pivot;

    if (!HEAD || !HEAD->next)
        return HEAD;
    pivot = median(HEAD);
    partition(HEAD, pivot, &le, &gt);
    return append(quickSort(le), pivot, quickSort(gt));
}

/* Heap Sort */

void heapify(array A, int size, int i) {
    int max = i, left = 2 * max + 1, right = left + 1;

    if (left >= size)
        return;
    if (A[left] > A[max])
        max = left;
    if (right < size && A[right] > A[max])
        max = right;
    else if (max == i)
        return;

    swap(A + i, A + max);
    heapify(A, size, max);
}

void heapSort(array A, int size) {
    int i;

    if (size <= 1)
        return;

    for (i = (size - 1) / 2; i <= 0; i--)
        heapify(A, size, i);

    for (i = size - 1; i > 0; i--) {
        swap(A, A + i);
        heapify(A, i, 0);
    }
}

/* Counting Sort */

array cumulativeFrequency(array A, int size, int max) {
    int i;
    array frequency = calloc((max + 1), sizeof(int));

    for (i = 0; i < size; i++)
        frequency[A[i] + 1]++;
    for (i = 1; i <= max; i++)
        frequency[i] += frequency[i - 1];
    return frequency;
}

void countingSort(array *A, int size, int max) {
    int i;
    array count = cumulativeFrequency(*A, size, max);
    array sorted = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
        sorted[count[(*A)[i]]++] = (*A)[i];
    free(*A);
    free(count);
    *A = sorted;
}

/* Radix Sort */

array cumulativeFreq(array A, int size, int exp) {
    int i, radix;
    array frequency = calloc(19, sizeof(int));

    for (i = 0; i < size; i++) {
        radix = A[i] / exp % 10;
        frequency[10 + radix]++;
    }
    for (i = 1; i < 18; i++)
        frequency[i] += frequency[i - 1];
    return frequency;
}

void countingSortMod(array *A, int size, int exp) {
    int i, radix;
    array count = cumulativeFreq(*A, size, exp);
    array sorted = malloc(size * sizeof(int));

    for (i = 0; i < size; i++) {
        radix = (*A)[i] / exp % 10;
        sorted[count[9 + radix]++] = (*A)[i];
    }
    free(*A);
    free(count);
    *A = sorted;
}

void radixSort(array *A, int size, int max) {
    int exp;

    for (exp = 1; max / exp > 0; exp *= 10)
        countingSortMod(A, size, exp);
}

/* Binary LSD Radix Sort */

int pivot(array A, int size, int mask) {
    int i, pivot;

    for (i = pivot = 0; i < size; i++)
        if ((A[i] & mask) == 0)
            pivot++;
    return pivot;
}

array countingSort(array A, int size, int mask) {
    int i, j = pivot(A, size, mask), k;
    array sorted;

    if (!j || j == size)
        return A;

    sorted = malloc(size * sizeof(int));
    for (i = k = 0; k < size; k++)
        if (A[k] & mask)
            sorted[j++] = A[k];
        else
            sorted[i++] = A[k];
    free(A);
    return sorted;
}

array radixSort(array A, int size) {
    int mask;

    for (mask = 1; mask; mask <<= 1)
        A = countingSort(A, size, mask);
    return A;
}

/* Binary MSD Radix Sort */

int max(array a, int size) {
    int i, max = *a;

    for (i = 1; i < size; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}

int bits(int n) { return (n >>= 1) ? 1 + bits(n) : 0; }

int pivot(array A, int size, unsigned int mask) {
    int i, pivot;

    for (i = pivot = 0; i < size; i++)
        if ((A[i] & mask) == 0)
            pivot++;
    return pivot;
}

array append(array a, array b, int p, int size) {
    int i, *result = malloc(size * sizeof(int));

    for (i = 0; i < p; i++)
        result[i] = a[i];
    while (i < size) {
        result[i] = b[i - p];
        i++;
    }
    free(a);
    free(b);
    return result;
}

void distribute(array A, array zeroes, array ones, int mask, int size) {
    if (size <= 0)
        return;
    if (*A & mask) {
        *ones = *A;
        ones += 1;
    } else {
        *zeroes = *A;
        zeroes += 1;
    }
    distribute(A + 1, zeroes, ones, mask, size - 1);
}

array radixSort(array A, int size, unsigned int mask) {
    int p, *zeroes, *ones;

    if (!mask || size <= 1)
        return A;

    p = pivot(A, size, mask);

    if (!p || p == size)
        return radixSort(A, size, mask >> 1);

    zeroes = malloc(p * sizeof(int));
    ones = malloc((size - p) * sizeof(int));

    distribute(A, zeroes, ones, mask, size);
    free(A);

    zeroes = radixSort(zeroes, p, mask >> 1);
    ones = radixSort(ones, size - p, mask >> 1);
    return append(zeroes, ones, p, size);
}

/* Binary LSD Radix Sort for linked lists */

Node *append(Node *a, Node *pivot, Node *b) {
    pivot->next = b;
    return a;
}

Node *headless(Node *l) {
    Node *next = l->next;
    free(l);
    return next;
}

Node *partition(Node *l, Node *zeroes, Node *ones, int mask) {
    while (l) {
        if (l->key & mask) {
            ones->next = l;
            ones = ones->next;
        } else {
            zeroes->next = l;
            zeroes = zeroes->next;
        }
        l = l->next;
    }
    ones->next = NULL;
    return zeroes;
}

Node *countingSort(Node *l, int mask) {
    Node *zeroes = newNode(0, NULL), *ones = newNode(1, NULL),
         *pivot = partition(l, zeroes, ones, mask);

    zeroes = headless(zeroes);
    ones = headless(ones);

    return (zeroes && ones) ? append(zeroes, pivot, ones) : l;
}

Node *radixSort(Node *l) {
    int mask;

    if (l)
        for (mask = 1; mask; mask <<= 1)
            l = countingSort(l, mask);
    return l;
}

/* Binary MSD Radix Sort for linked lists */

int max(List *l) {
    int max = l->key;
    for (l = l->next; l; l = l->next)
        if (l->key > max)
            max = l->key;
    return max;
}

int bits(int n) { return (n >>= 1) ? 1 + bits(n) : 0; }

List *append(List *a, List *b) {
    while (a->next)
        a = a->next;
    a->next = b;
    return a;
}

List *headless(List *l) {
    List *next = l->next;
    free(l);
    return next;
}

void partition(List *l, List *zeroes, List *ones, int mask) {
    while (l) {
        if (l->key & mask) {
            ones->next = l;
            ones = ones->next;
        } else {
            zeroes->next = l;
            zeroes = zeroes->next;
        }
        l = l->next;
    }
    zeroes->next = ones->next = NULL;
}

List *radixSort(List *l, unsigned int mask) {
    List *zeroes, *ones;

    if (!l->next || !mask)
        return l;
    zeroes = newList(0, NULL);
    ones = newList(1, NULL);
    partition(l, zeroes, ones, mask);
    zeroes = headless(zeroes);
    ones = headless(ones);

    if (!zeroes || !ones)
        return l;

    zeroes = radixSort(zeroes, mask >> 1);
    ones = radixSort(ones, mask >> 1);
    return append(zeroes, ones);
}
