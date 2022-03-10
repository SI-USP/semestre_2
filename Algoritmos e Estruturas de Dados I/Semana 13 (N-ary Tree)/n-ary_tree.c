#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;
    struct node *child, *parent, *sibling;
} Node;

Node * findNode (Node *root, int value);
Node * searchChild (Node *child, int value);

Node * newNode (int value) {
    Node *new = malloc(sizeof(Node));
    new->value = value;
    new->child->parent->sibling = NULL;
    return new;
}

void addSibling (Node * child, Node *n) {
    if (!child->sibling)
        child->sibling = n;
    else
        addSibling(child->sibling, n);
}

bool insertNode (Node *root, Node *n, int target) {
    root = findNode(root, target);
    if (!root)
        return false;
    if (!root->child)
        root->child = n;
    else
        addSibling(root->child, n);
    return true;
}

Node * searchChild(Node *child, int value) {
    Node *target;

    if(!child)
        return NULL;
    target = findNode(child, value);
    if (target)
        return target;
    return searchChild(child->sibling, value);
}

Node * findNode(Node *root, int value) {
    if (!root)
        return NULL;
    if (root->value == value)
        return root;
    return searchChild(root->child, value);
}
