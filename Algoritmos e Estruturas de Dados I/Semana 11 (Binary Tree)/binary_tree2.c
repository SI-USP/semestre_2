#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;
    struct node *lt, *gt;
} Node;

Node * newNode(int value){
  Node *new = malloc(sizeof(Node));

  new->lt = new->gt = NULL;
  new->value = value;
  return new;
}

/* Node insertion */

bool insertNode(Node **root, int value) {
    if (!*root) {
        *root = newNode(value);
        return true;
    }
    if (value == (*root)->value)
        return false;
    if (value > (*root)->value)
        return insertNode(&(*root)->gt, value);
    return insertNode(&(*root)->lt, value);
}

Node * findNode(Node *root, int value) {
    if (!root)
        return NULL;
    if (root->value == value)
        return root;
    if (value > root->value)
        return findNode(root->gt, value);
    return findNode(root->lt, value);
}

/* Node removal */

Node * findMaxValue (Node *root, Node **parent) {
    if (!root->gt)
        return root;
    *parent = root;
    return findMaxValue(root->gt, parent);
}

void rearrangePointers (Node *root, Node *parent, Node *child) {
    child->gt = root->gt;
    if (root == parent)
        return;
    parent->gt = child->lt;
    child->lt = root->lt;
}

Node * selectByValue (Node *root) {
    Node *parent = root, *child = findMaxValue(root->lt, &parent);

    rearrangePointers (root, parent, child);
    return child;
}

Node * selectChild (Node *root) {
    if (root->lt) {
        if (!root->gt)
            return root->lt;
        return selectByValue(root);
    }
    return root->gt;
}

void substituteRoot (Node **root, Node *newRoot) {
    free(*root);
    *root = newRoot;
}

void substituteChild (Node *parent, Node *child, Node *newChild) {
    if (child == parent->lt)
        parent->lt = newChild;
    else
        parent->gt = newChild;
    free(child);
}

bool excludeChild (Node **parent, int value) {
    Node **child = (value < (*parent)->value) ? &(*parent)->lt : &(*parent)->gt;

    if (!*child)
        return false;
    if ((*child)->value == value) {
        substituteChild(*parent, *child, selectChild(*child));
        return true;
    }
    excludeChild(child, value);
}

bool excludeNode(Node **root, int value) {
    if (!*root)
        return false;
    if (value == (*root)->value) {
        substituteRoot(root, selectChild(*root));
        return true;
    }
    return excludeChild(root, value);
}

/* Printing output */

int treeSize (Node *root) {
    if (!root)
        return 0;
    return treeSize(root->lt) + treeSize(root->gt) + 1;
}

int main () {
    Node *r = NULL;
    insertNode(&r,23);
    return 0;
}
