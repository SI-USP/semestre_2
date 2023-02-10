#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
	int value;
	struct node *prev, *next;
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
    Node *n = HEAD->next;
    HEAD->value = value;

    while (n->value < value)
		n = n->next;
	return (n->value == value && n != HEAD) ? n : NULL;
}

/* Do not use these "Ordered" implementations, thse were not well though out,
Nonetheless I've decided to keep them as a record of the study process */

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

bool insertInOrdered(Node *HEAD, int value) {
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

bool insertIn(Node *HEAD, int value) {
	Node *new, *next = HEAD->next;
	HEAD->value = value;

	while (next->value < value)
		next = next->next;
	if (next->value == value)
		return false;

	new = malloc(sizeof(Node));
    new->value = value;
    new->next = next;
    new->prev = next->prev;
	new->prev->next = new->next->prev = new;
    return true;
}

bool removeFrom(Node *HEAD, int value) {
    Node * current = findIn(HEAD, value);

    if (current == NULL)
        return false;
    current->next->prev = current->prev;
    current->prev->next = current->next;
    free(current);
    return true;
}
