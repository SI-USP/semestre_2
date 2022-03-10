#include <stdlib.h>
#include <stdbool.h>

typedef enum {left, right} side;

typedef struct node{
    int value;
    struct node *left, *right;
} Node;

Node * findValue (Node *parent, int value) {
    Node * n;

    if (!parent || parent->value == value)
        return parent;
    n = findValue(parent->left, value);
    return (n) ? n : findValue(parent->right, value);
}

Node * newNode (int value) {
    Node *new = malloc(sizeof(Node));
    
    new->value = value;
    new->left = new->right = NULL;
    return new;
}

void createRoot (Node **root, int value) {
    *root = newNode(value);
}

bool setChild (Node *root, int childValue, int parentValue, side s) {
    Node *child, *parent = findValue(root, parentValue);

    if (!parent)
        return false;

    child = newNode(childValue);
    if (s == left) {
        child->left = parent->left;
        parent->left = child;
    }
    else {
        child->right = parent->right;
        parent->right = child;
    }
    return true;
}
