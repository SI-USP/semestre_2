#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int value;
	struct node *prev;
	struct node *next;
} Node;

Node * initialize () {
    Node *n = malloc(sizeof(*n));
    n->prev = n->next = n;
    return n;
}

void reinitilize (Node * HEAD) {
    Node *current = HEAD->next;

    while (current != HEAD) {
        current = current->next;
        free(current->prev);
    }
    current->next = current->prev = current;
}

int listSize (Node *HEAD) {
    Node *current = HEAD->next;
    int size;

    for (size = 0; current != HEAD; size++)
        current = current->next;
    return size;
}

void printList (Node *HEAD) {
    Node *current = HEAD->next;

    printf("Lista: \"");
    while (current != HEAD) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\"\n");
}

Node * findIn(Node *HEAD, int value) {
    Node *current = HEAD->next;
    HEAD->value = value;

    while (current->value != value)
        current = current->next;
    return (current != HEAD) ? current : NULL;
}

/* Implementação que considera uma lista ordenada */
Node * findInOrdered(Node *HEAD, int value) {
    Node *current;

    if (abs(value - HEAD->next->value) < abs(value - HEAD->prev->value)) {
        current = HEAD->next;
        while (current->value < value)
            current = current->next;
    }
    else {
        current = HEAD->prev;
        while (current-> value > value)
            current = current->prev;
    }
    return (current == HEAD || current->value != value) ? NULL : current;
}

bool insertIn(Node *HEAD, int value) {
    Node *prev, *current, *next;
    prev = next = HEAD;

    if (abs(value - HEAD->next->value) < abs(value - HEAD->prev->value)) {
        for (next = HEAD->next; next->next != HEAD && next->value < value; next = next->next)
            prev = next;
        if (next->value == value)
            return false;
    }
    else {
        for (prev = HEAD->prev; prev->prev != HEAD && prev->value > value; prev = prev->prev)
            next = prev;
        if (prev->value == value)
            return false;
    }

    current = malloc(sizeof(*current));
    current->value = value;
    current->next = prev->next;
    prev->next = current;
    current->prev = next->prev;
    next->prev = current;
    return true;
}

bool removeFrom(Node *HEAD, int value) {
    Node * current = findInOrdered(HEAD, value);
    if (current == NULL)
        return false;
    current->next->prev = current->prev;
    current->prev->next = current->next;
    free(current);
    return true;
}
