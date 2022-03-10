#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *start, *end;
} Queue;

int queueLength (Queue *q) {
    int i;
    Node *n = q->start;

    for (i = 0; n; i++)
        n = n->next;
    return i;
}

void printQueue (Queue *q) {
    Node *n;

    printf("Fila: \" ");
    for (n = q->start; n; n = n->next)
        printf("%d ", n->value);
    printf("\"\n");
}

void push (Queue *q, int value) {
    Node *n = malloc(sizeof(*n));

    n->value = value;
    n->next = NULL;
    if (!q->start)
        q->start = n;
    else
        q->end->next = n;
    q->end = n;
}

int pop (Queue *q) {
    int value;
    Node *n = q->start;

    if (!n)
        return EOF;
    value = q->start->value;
    q->start = (n->next) ? n->next : NULL;
    if (!q->start)
        q->end = NULL;
    free(n);
    return value;
}

void reinitializeQueue (Queue *q) {
    Node *n, *erase;

    for (n = q->start; n; free(erase)) {
        erase = n;
        n = n->next;
    }
    q->start = q->end = NULL;
}
