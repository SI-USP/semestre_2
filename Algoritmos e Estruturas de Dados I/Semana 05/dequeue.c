#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *prev, *next;
} Node;

Node * initializeDequeue() {
    Node *HEAD = malloc(sizeof(*HEAD));
    HEAD->next = HEAD->prev = HEAD;
    return HEAD;
}

int dequeueSize (Node *HEAD) {
    Node *n;
    int i = 0;

    for (n = HEAD->next; n != HEAD; n = n->next)
        i++;
    return i;
}

void printDequeue(Node *HEAD) {
    Node *n;

    printf("Deque: \" ");
    for (n = HEAD->next; n != HEAD; n = n->next)
        printf("%d,", n->value);
    printf("\"\n");
}

void AppendDequeue (Node *HEAD, int value) {
    Node *n = malloc(sizeof(*n));
    n->value = value;
    n->next = HEAD;
    n->prev = HEAD->prev;
    HEAD->prev = n;
    n->prev->next = n;
}

int popFirst (Node *HEAD) {
    Node *n = HEAD->next;
    int value = EOF;

    if (n != HEAD) {
        value = n->value;
        HEAD->next = n->next;
        n->next->prev = HEAD;
        free(n);
    }
    return value;
}

int popLast (Node *HEAD) {
    Node *n = HEAD->prev;
    int value = EOF;

    if (n != HEAD) {
        value = n->value;
        HEAD->prev = n->prev;
        n->prev->next = HEAD;
        free(n);
    }
    return value;
}

void reinitializeDequeue (Node *HEAD) {
    Node *next, *prev;

    for (next = HEAD->next; next != HEAD; free(prev)) {
        prev = next;
        next = next->next;
    }
    HEAD->next = HEAD->prev = HEAD;
}

void PrependDequeue (Node *HEAD, int value) {
    Node *n = malloc(sizeof(*n));
    n->value = value;
    n->prev = HEAD;
    n->next = HEAD->next;
    HEAD->next = n;
    n->next->prev = n;
}

int greatestValue (Node *HEAD) {
    Node *n = HEAD->next;
    int value;

    if (n == HEAD)
        return EOF;
    value = n->value;
    n = n->next;
    while (n != HEAD) {
        if (value < n->value)
            value = n->value;
        n = n->next;
    }
    return value;
}

int main () {
    Node *HEAD = initializeDequeue();

    /* code */

    return 0;
}
