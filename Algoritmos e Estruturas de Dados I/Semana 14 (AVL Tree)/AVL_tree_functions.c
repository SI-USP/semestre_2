#ifndef FUNCTIONFILE_C
#define FUNCTIONFILE_C
#include "./AVL_tree.h"

/* Node insertion */

bool insertNode(Node **root, int value) {
    Node **n;

    if (!*root) {
        *root = newNode(value);
        return true;
    }
    if (value == (*root)->value)
        return false;
    n = (value < (*root)->value) ? &(*root)->lt : &(*root)->gt;
    if (!insertNode(n, value))
        return false;
    *root = balanceTree(*root);
    return true;
}

Node *newNode(int value) {
    Node *new = malloc(sizeof(Node));

    new->value = value;
    new->height = 0;
    new->lt = new->gt = NULL;
    return new;
}

/* Node removal */

bool removeNode(Node **root, int value) {
    if (!*root)
        return false;
    if (value == (*root)->value) {
        replace(root, selectChild(*root));
        if (*root)
            *root = balanceTree(*root);
    } else if (!removeChild(root, value))
        return false;
    return true;
}

bool removeChild(Node **root, int value) {
    Node **child = (value < (*root)->value) ? &(*root)->lt : &(*root)->gt;

    if (!*child)
        return false;
    if ((*child)->value == value)
        replace(child, selectChild(*child));
    else if (!removeChild(child, value))
        return false;
    *root = balanceTree(*root);
    return true;
}

void replace(Node **root, Node *newRoot) {
    free(*root);
    *root = newRoot;
}

Node *selectChild(Node *root) {
    if (root->lt) {
        if (!root->gt)
            return root->lt;
        return selectByValue(root);
    }
    return root->gt;
}

Node *selectByValue(Node *root) {
    Node *parent = root, *child = findMaxValue(&parent, root->lt);

    rearrangePointers(root, parent, child);
    return child;
}

Node *findMaxValue(Node **parent, Node *child) {
    if (!child->gt)
        return child;
    *parent = child;
    return findMaxValue(parent, child->gt);
}

void rearrangePointers(Node *root, Node *parent, Node *child) {
    child->gt = root->gt;
    if (root == parent)
        return;
    parent->gt = child->lt;
    child->lt = root->lt;
}

bool destroyTree(Node **root) {
    if (!*root)
        return false;
    destroy(*root);
    *root = NULL;
    return true;
}

void destroy(Node *root) {
    if (root->lt)
        destroy(root->lt);
    if (root->gt)
        destroy(root->gt);
    free(root);
}

/* Tree balancing */

Node *balanceTree(Node *root) {
    int balance = getBalance(root);

    /* Left heavy */
    if (balance > 1) {
        if (getBalance(root->lt) < 0)
            root->lt = rotateLeft(root->lt);
        return rotateRight(root);
    }

    /* Right heavy */
    if (balance < -1) {
        if (getBalance(root->gt) > 0)
            root->gt = rotateRight(root->gt);
        return rotateLeft(root);
    }

    updateHeight(root);
    return root;
}

int getBalance(Node *root) { return height(root->lt) - height(root->gt); }

int height(Node *root) { return (root) ? root->height : -1; }

void updateHeight(Node *root) {
    root->height = MAX(height(root->lt), height(root->gt)) + 1;
}

Node *rotateLeft(Node *root) {
    Node *newRoot = root->gt, *child = newRoot->lt;

    newRoot->lt = root;
    root->gt = child;

    updateHeight(root);
    updateHeight(newRoot);
    return newRoot;
}

Node *rotateRight(Node *root) {
    Node *newRoot = root->lt, *child = newRoot->gt;

    newRoot->gt = root;
    root->lt = child;

    updateHeight(root);
    updateHeight(newRoot);
    return newRoot;
}

/* Printing output */

void preOrder(Node *root) {
    if (!root)
        return;
    printf("%d ", root->value);
    preOrder(root->lt);
    preOrder(root->gt);
}

void inOrder(Node *root) {
    if (!root)
        return;
    inOrder(root->lt);
    printf("%d ", root->value);
    inOrder(root->gt);
}

Node *kthNode(Node *root, int *index, int k) {
    Node *lt;

    if (!root)
        return root;
    lt = kthNode(root->lt, index, k);
    if (lt)
        return lt;
    if (++(*index) == k)
        return root;
    return kthNode(root->gt, index, k);
}

int getValue(Node *root, int k) {
    int i = -1;
    Node *n = kthNode(root, &i, k);

    if (n)
        return n->value;
    return EOF;
}

#endif
