#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct branch{
    int value;
    struct branch *parent, *le, *gt;
} Branch;

typedef struct node {
    Branch *b;
    struct node *next, *prev;
} Node;

Branch * newBranch(int value){
  Branch *new = malloc(sizeof(Branch));
  new->parent = new->le = new->gt = NULL;
  new->value = value;
  return new;
}

/* Functions for printing a sorted sequence */

void insertBranch(Branch **root, Branch *new) {
    if (!*root) {
        *root = new;
        return;
    }
    new->parent = *root;
    if (new->value > (*root)->value)
        insertBranch(&(*root)->gt, new);
    else
        insertBranch(&(*root)->le, new);
}

void printValues (Branch *root) {
    if (!root)
        return;
    printValues(root->le);
    printf("%d ", root->value);
    printValues(root->gt);
}

void printSortedList (Branch *root) {
    printValues(root);
    printf("\n");
}

/* Functions to print the tree level by level */

Node * initializeNode() {
    Node *n = malloc(sizeof(Node));
    n->b = NULL;
    n->prev = n->next = n;
    return n;
}

void addBranch (Node *HEAD, Branch *b) {
    Node *new = initializeNode();

    new->b = b;
    new->next = HEAD;
    if (HEAD->prev == HEAD) {
        HEAD->next = new;
        new->prev = HEAD;
    }
    else {
        HEAD->prev->next = new;
        new->prev = HEAD->prev;
    }
    HEAD->prev = new;
}

Branch * removeFirst(Node *HEAD) {
    Node *next = HEAD->next;
    Branch *b = next->b;

    HEAD->next = next->next;
    HEAD->next->prev = HEAD;
    free(next);
    return b;
}

void printTree (Branch *root) {
    Node *queue;
    Branch *b;

    if (!root)
        return;
    queue = initializeNode();
    addBranch(queue, root);
    while (queue != queue->next) {
        b = removeFirst(queue);
        printf("%d ", b->value);
        if (b->le)
            addBranch(queue, b->le);
        if (b->gt)
            addBranch(queue, b->gt);
    }
    printf("\n");
}

int main () {
    int i;
    char c;
    Branch *root = NULL;

    printf("This program reads integer values and stores them in a binary tree memory structure. Then, these values are printed in an sorted sequence and as they were placed in the tree, respectively.\nType in any sequence of integers and then press ENTER:\n");
    do {
        if (scanf(" %d", &i))
            insertBranch(&root, newBranch(i));
    } while ((c = getchar()) != EOF && c != '\n');

    printf("\nSorted sequence:\n");
    printSortedList(root);
    printf("\nTree:\n");
    printTree(root);
    return 0;
}
