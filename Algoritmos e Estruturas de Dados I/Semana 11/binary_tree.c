#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int value;

    /* Pointers to nodes which store values that are less or equal (le) and greater than (gt) the current node's. */
    struct node *parent, *le, *gt;
} Node;

Node * newNode(int value){
  Node *new = malloc(sizeof(Node));
  new->parent = new->le = new->gt = NULL;
  new->value = value;
  return new;
}

bool insertNode(Node *root, Node *new) {
    Node *branch;

    if (!new)
        return false;
    if (!root) {
        root = new;
        return true;
    }
    do {
        branch = (new->value > root->value) ? root->gt : root->le;
        if (branch)
            root = branch;
    } while (branch);

    branch = new;
    new->parent = root;
    return true;
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
    while (root->gt)
        root = root->gt;
    return root;
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

void substituteNode (Node *n, Node *branch) {
    if (n->parent) {
        if (n->value < n->parent->value)
            n->parent->le = branch;
        else
            n->parent->gt = branch;
        branch->parent = n->parent;
    }
    else
        branch->parent = NULL;
    free(n);
    n = branch;
}

Node * excludeNode(Node *root, int value) {
    Node *n = findNode(root, value);

    if (!n)
        return n;
    substituteNode(n, selectBranch(n));
    return (n->parent) ? root : n;
}

int treeSize (Node *root) {
    if (!root)
        return 0;
    return treeSize(root->le) + treeSize(root->gt) + 1;
}

int main () {
    Node *new = newNode(23), *r = NULL;
    insertNode(r,new);
    return 0;
}
