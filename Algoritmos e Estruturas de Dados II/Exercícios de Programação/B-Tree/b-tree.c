/* Autoria: Guilherme de Abreu Barreto; nUSP: 12543033 */

#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NONE INT_MIN

typedef struct node {
    int entries, *keys;
    bool leaf;
    struct node **child;
} Node;

typedef struct {
    int degree;
    Node *root;
} BTree;

/*/////////////
// Functions //
/////////////*/

BTree *initBTree(int degree);
Node *initNode(int degree, bool leaf);
Node *insertRoot(Node *root, int key, int degree);
Node *replaceRoot(Node *root, Node *newRoot);
Node *searchNode(Node *root, int key);
bool insertKey(Node **root, int degree, int key);
bool insertNonFull(int key, int degree, Node *root);
bool merge(Node **root, int degree, int index, int key);
bool removeKey(Node **root, int degree, int key);
bool removeKeyFromLeaf(Node **leaf, int index, int key);
int kthElement(int k, Node *root);
int popKey(Node *root, int i);
int predecessor(Node *root);
int readCommands(char *input);
int searchIndex(int key, Node *root);
int searchKthElement(int k, Node *root, int *counter);
int successor(Node *root);
void addKey(int key, Node *root);
void copyChild(int start, int end, int offset, Node *origin, Node *destination);
void copyKeys(int start, int end, int offset, Node *origin, Node *destination);
void freeBTree(BTree *b);
void freeChild(Node *root, int i);
void freeNode(Node *root);
void insertChild(int index, Node *parent, Node *child);
void leftRotation(Node *root, int degree, int index);
void moveChilds(Node *root, int i);
void printKeys(Node *root, FILE *out);
void printKeysInOrder(Node *root, FILE *out);
void printKeysPreOrder(int level, int *nodeCount, Node *root, FILE *out);
void printTreeInOrder(BTree *b, FILE *out);
void printTreePreOrder(BTree *b, FILE *out);
void rightRotation(Node *root, int degree, int index);
void splitChild(int index, int degree, Node *parent, Node *child);

/*/////////////////
// Miscellanious //
/////////////////*/

Node *initNode(int degree, bool leaf) {
    int size = 2 * degree - 1;
    Node *n = malloc(sizeof(Node));
    n->entries = 0;
    n->leaf = leaf;
    n->keys = malloc(size * sizeof(int));
    n->child = malloc(++size * sizeof(Node *));
    return n;
}

BTree *initBTree(int degree) {
    BTree *b = malloc(sizeof(BTree));
    b->degree = degree;
    b->root = NULL;
    return b;
}

void printKeys(Node *root, FILE *out) {
    int i;

    fprintf(out, "Keys: ");
    for (i = 0; i < root->entries; i++)
        fprintf(out, "%d ", root->keys[i]);
    fprintf(out, "\n");
}

void printKeysPreOrder(int level, int *nodeCount, Node *root, FILE *out) {
    int i, childNodeCount;

    if (root->leaf)
        return;

    for (i = 0; i <= root->entries; i++) {
        fprintf(out, "\n[Level %d, Node %d]\n", level, *nodeCount);
        printKeys(root->child[i], out);
        *nodeCount = *nodeCount + 1;
    }

    childNodeCount = 0;
    level++;
    for (i = 0; root->child[i] && i <= root->entries; i++)
        printKeysPreOrder(level, &childNodeCount, root->child[i], out);
}

void printTreePreOrder(BTree *b, FILE *out) {
    int nodeCount;
    fprintf(out, "Keys stored in B-Tree:\n");
    if (!b->root)
        return;

    nodeCount = 0;
    fprintf(out, "\n[Level 0, Node 0]\n");
    printKeys(b->root, out);
    printKeysPreOrder(1, &nodeCount, b->root, out);
    fprintf(out, "\n");
}

void printKeysInOrder(Node *root, FILE *out) {
    int i;

    if (root->leaf)
        for (i = 0; i < root->entries; i++)
            fprintf(out, "%d ", root->keys[i]);
    else {
        for (i = 0; i < root->entries; i++) {
            printKeysInOrder(root->child[i], out);
            fprintf(out, "%d ", root->keys[i]);
        }
        printKeysInOrder(root->child[i], out);
    }
}

void printTreeInOrder(BTree *b, FILE *out) {
    fprintf(out, "Ordered Set of keys stored in B-Tree: ");
    if (b->root)
        printKeysInOrder(b->root, out);
    fprintf(out, "\n\n");
}

int searchIndex(int key, Node *root) {
    int i, start = 0, end = root->entries, size = end;

    for (i = end / 2; size > 1 && root->keys[i] != key; i = (end + start) / 2) {
        if (root->keys[i] < key)
            start = i + 1;
        else
            end = i;
        size = end - start;
    }
    return i;
}

int searchKthElement(int k, Node *root, int *counter) {
    int i, kth;
    if (!root->leaf) {
        for (i = 0; i < root->entries; i++) {
            kth = searchKthElement(k, root->child[i], counter);
            if (kth != NONE)
                return kth;
            if ((*counter)++ == k)
                return root->keys[i];
        }
        return searchKthElement(k, root->child[i], counter);
    }
    for (i = 0; i < root->entries && k > *counter; i++)
        (*counter)++;
    return (i < root->entries) ? root->keys[i] : NONE;
}

int kthElement(int k, Node *root) {
    int counter = 0;
    return searchKthElement(k, root, &counter);
}

/*////////////////////////////////////
// Functions used for key insertion //
////////////////////////////////////*/

Node *searchNode(Node *root, int key) {
    int index = searchIndex(key, root);

    if (root->keys[index] == key)
        return root;
    return (root->leaf) ? NULL : searchNode(root->child[index], key);
}

void copyKeys(int start, int end, int offset, Node *origin, Node *destination) {
    if (start >= end)
        return;
    destination->keys[start] = origin->keys[start + offset];
    copyKeys(start + 1, end, offset, origin, destination);
}

void copyChild(int start, int end, int offset, Node *origin,
               Node *destination) {
    int i;

    if (origin->leaf)
        return;
    for (i = start; i <= end; i++)
        destination->child[i] = origin->child[i + offset];
}

void insertChild(int index, Node *parent, Node *child) {
    int i;

    for (i = parent->entries; i > index; i--)
        parent->child[i + 1] = parent->child[i];
    parent->child[i + 1] = child;
}

void addKey(int key, Node *root) {
    int i;
    for (i = root->entries - 1; root->keys[i] > key && i >= 0; i--)
        root->keys[i + 1] = root->keys[i];
    root->keys[++i] = key;
    root->entries++;
}

void splitChild(int index, int degree, Node *parent, Node *child) {
    Node *split = initNode(degree, child->leaf);

    /* Split keys and pointers evenly between each split of the child node */
    split->entries = child->entries = degree - 1;
    copyKeys(0, child->entries, degree, child, split);
    copyChild(0, child->entries, degree, child, split);

    /* Add the newly generated split as a child of the parent node */
    insertChild(index, parent, split);

    /* Move a key from the child to the parent node */
    addKey(child->keys[degree - 1], parent);
}

bool insertNonFull(int key, int degree, Node *root) {
    int index = searchIndex(key, root);

    if (root->keys[index] == key)
        return false;
    if (root->leaf) {
        addKey(key, root);
        return true;
    }
    if (index < root->entries && root->keys[index] < key)
        index++;
    if (root->child[index]->entries == 2 * degree - 1) {
        splitChild(index, degree, root, root->child[index]);
        if (root->keys[index] < key)
            index++;
    }
    return insertNonFull(key, degree, root->child[index]);
}

Node *insertRoot(Node *root, int key, int degree) {
    Node *newRoot = initNode(degree, false);
    newRoot->child[0] = root;
    splitChild(0, degree, newRoot, root);
    return newRoot;
}

bool insertKey(Node **root, int degree, int key) {
    if (!*root) {
        *root = initNode(degree, true);
        (*root)->keys[(*root)->entries++] = key;
        return true;
    } else if ((*root)->entries == 2 * degree - 1) {
        *root = insertRoot(*root, key, degree);
        return ((*root)->keys[0] < key)
                   ? insertNonFull(key, degree, (*root)->child[1])
                   : insertNonFull(key, degree, (*root)->child[0]);
    }
    return insertNonFull(key, degree, *root);
}

/*//////////////////////////////////
// Functions used for key removal //
//////////////////////////////////*/

int popKey(Node *root, int i) {
    int end = root->entries - 1, k = root->keys[i];

    while (i < end) {
        root->keys[i] = root->keys[i + 1];
        i++;
    }
    root->entries--;
    return k;
}

int predecessor(Node *root) {
    return (root->leaf) ? popKey(root, root->entries - 1)
                        : predecessor(root->child[root->entries]);
}

int successor(Node *root) {
    return (root->leaf) ? popKey(root, 0) : successor(root->child[0]);
}

void moveChilds(Node *root, int i) {
    if (i > root->entries)
        return;
    root->child[i] = root->child[i + 1];
    moveChilds(root, i + 1);
}

void freeChild(Node *root, int i) {
    free(root->child[i]);
    moveChilds(root, i);
}

Node *replaceRoot(Node *root, Node *newRoot) {
    free(root);
    return newRoot;
}

bool merge(Node **root, int degree, int index, int key) {
    Node *parent = *root, *child = parent->child[index],
         *sibling = parent->child[index + 1];

    child->keys[degree - 1] = parent->keys[index];
    child->entries = 2 * degree - 1;
    copyKeys(degree, 2 * degree, -degree, sibling, child);
    copyChild(degree, 2 * degree, -degree, sibling, child);
    popKey(parent, index);
    freeChild(parent, index + 1);

    if (parent->entries > 1)
        return removeKey(&child, degree, key);
    *root = replaceRoot(parent, child);
    return removeKey(root, degree, key);
}

bool removeKeyFromLeaf(Node **leaf, int index, int key) {
    if ((*leaf)->keys[index] != key)
        return false;
    popKey(*leaf, index);
    if ((*leaf)->entries == 0) {
        free(*leaf);
        *leaf = NULL;
    }
    return true;
}

void leftRotation(Node *root, int degree, int index) {
    Node *child = root->child[index], *sibling = root->child[index + 1];
    addKey(popKey(root, index), child);
    addKey(popKey(sibling, 0), root);
    insertChild(child->entries, child, sibling->child[0]);
}

void rightRotation(Node *root, int degree, int index) {
    Node *child = root->child[index + 1], *sibling = root->child[index];
    addKey(popKey(root, index), child);
    addKey(popKey(sibling, sibling->entries - 1), root);
    insertChild(0, child, sibling->child[sibling->entries]);
}

bool removeKey(Node **root, int degree, int key) {
    int index = searchIndex(key, *root);
    Node *lChild = (*root)->child[index], *rChild = (*root)->child[index + 1];

    if ((*root)->leaf)
        return removeKeyFromLeaf(root, index, key);
    if ((*root)->keys[index] == key) {
        if (lChild->entries >= degree) {
            (*root)->keys[index] = predecessor(lChild);
            return true;
        }
        if (rChild->entries >= degree) {
            (*root)->keys[index] = successor(rChild);
            return true;
        }
    } else if ((*root)->keys[index] < key) {
        if (rChild->entries < degree && lChild->entries >= degree)
            rightRotation(*root, degree, index);
        if (rChild->entries >= degree)
            return removeKey(&rChild, degree, key);
    } else {
        if (lChild->entries < degree && rChild->entries >= degree)
            leftRotation(*root, degree, index);
        if (lChild->entries >= degree)
            return removeKey(&lChild, degree, key);
    }
    return merge(root, degree, index, key);
}

/*//////////////////
// Main functions //
//////////////////*/

void freeNode(Node *root) {
    int i;

    if (!root)
        return;
    if (!root->leaf)
        for (i = 0; i <= root->entries; i++)
            freeNode(root->child[i]);
    free(root->keys);
    free(root);
}

void freeBTree(BTree *b) {
    freeNode(b->root);
    free(b);
}

int readCommands(char *input) {
    char line[256], command[256];
    int parameter;
    FILE *in, *out;
    BTree *b;

    in = fopen(input, "r");
    if (!in) {
        perror("Não foi possível abrir o arquivo à ser lido");
        return 1;
    }
    out = fopen("saida.txt", "w");
    if (!out) {
        perror("Não é possível salvar o arquivo de saída com o argumento "
               "provido.");
        return 1;
    }

    /* Ler commandos do arquivo */
    while (fgets(line, sizeof(line), in)) {
        sscanf(line, " %s %d", command, &parameter);
        if (strcmp(command, "inicializa") == 0) {
            b = initBTree(parameter);
        } else if (strcmp(command, "insere") == 0) {
            insertKey(&b->root, b->degree, parameter);
        } else if (strcmp(command, "remove") == 0) {
            removeKey(&b->root, b->degree, parameter);
        } else if (strcmp(command, "imprime") == 0) {
            printTreeInOrder(b, out);
            printTreePreOrder(b, out);
        } else
            break;
    }
    fclose(in);
    freeBTree(b);
    fclose(out);
    return 0;
}

int main(int argc, char **argv) { return readCommands(argv[1]); }
