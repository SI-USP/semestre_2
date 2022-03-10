#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int value;
    struct node *next, *prev;
} Node;

typedef struct {
    int size;
    Node *front, *rear;
} Deque;

typedef enum {front, rear} End;

void push (Deque *q, int value, End e) {
    Node *n = malloc(sizeof(Node));

    n->value = value;
    if (e == front) {
        n->next = q->front;
        n->prev = NULL;
        q->front->prev = n;
        q->front = n;
    }
    else {
        n->prev = q->rear;
        n->next = NULL;
        q->rear->next = n;
        q->rear = n;
    }
    q->size++;
}

int pop (Deque *q, End e) {
    int value;
    Node *n;

    if (q->size == 0)
        return EOF;
    if (e == front) {
        n = q->front;
        q->front = n->next;
        q->front->prev = NULL;
    }
    else {
        n = q->rear;
        q->rear = n->prev;
        q->rear->next = NULL;
    }
    value = n->value;
    free(n);
    q->size--;
    return value;
}

int peek (Deque *q, End e) {
    if (q->size == 0)
        return EOF;
    if (e == front)
        return q->front->value;
    return q->rear->value;

}
