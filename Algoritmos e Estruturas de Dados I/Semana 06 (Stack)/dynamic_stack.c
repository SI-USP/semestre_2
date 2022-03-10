#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *under;
} Node;

int stackSize (Node *top) {
    Node *n;
    int i = 0;

    for (n = top; n; n = n->under)
        i++;
    return i;
}

void printStack(Node *top) {
    Node *n;

    printf("Pilha: \" ");
    for (n = top; n; n = n->under)
        printf("%d,", n->value);
    printf("\"\n");
}

void push(Node *top, int value) {
    Node *n = malloc(sizeof(*n));

    n->value = value;
    n->under = top;
    top = n;
}

int pop (Node *top) {
    Node *n = top;
    int value;

    if (!top)
        return EOF;
    value = top->value;
    top = top->under;
    free(n);

    return value;
}

void destroyStack (Node *top) {
    if (!top)
        return;
    destroyStack(top->under);
    free(top);
}
