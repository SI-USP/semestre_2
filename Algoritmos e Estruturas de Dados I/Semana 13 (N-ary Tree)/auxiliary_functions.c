#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;
    struct node *parent, *le, *gt;
} Node;

Node * newNode(int value){
  Node *new = malloc(sizeof(Node));
  new->parent = new->le = new->gt = NULL;
  new->value = value;
  return new;
}

void insertNode(Node **root, Node *new) {
    if (!*root) {
        *root = new;
        return;
    }
    new->parent = *root;
    if (new->value > (*root)->value)
        insertNode(&(*root)->gt, new);
    else
        insertNode(&(*root)->le, new);
}

Node * findNode(Node *root, int value) {
    if (!root)
        return NULL;
    if (root->value == value)
        return root;
    if (root->value > value)
        return findNode(root->le, value);
    return findNode(root->gt, value);
}

Node * findMaxValue (Node *root) {
    if (!root->gt)
        return root;
    return findMaxValue(root->gt);
}

void rearrangeTree (Node *root, Node *branch) {
    if (branch->parent != root) {
        branch->parent->gt = branch->le;
        branch->le = root->le;
    }
    branch->gt = root->gt;
}

Node * selectBranch (Node *root) {
    Node *branch;

    if (root->le) {
        if (!root->gt)
            return root->le;
        branch = findMaxValue(root->le);
        rearrangeTree(root, branch);
        return branch;
    }
    return root->gt;
}

void substituteNode (Node *root, Node *branch) {
    if (branch) {
        if (root->parent) {
            if (root->value < root->parent->value)
                root->parent->le = branch;
            else
                root->parent->gt = branch;
            branch->parent = root->parent;
        }
        else
            branch->parent = NULL;
    }
    free(root);
    root = branch;
}

bool excludeNode(Node **root, int value) {
    if (!*root)
        return false;
    if ((*root)->value != value)
        return excludeNode((value > (*root)->value) ? &(*root)->gt : &(*root)->le, value);
    substituteNode(*root, selectBranch(*root));
    return true;
}
