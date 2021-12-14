#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/param.h>

typedef struct branch{
    int value, height;
    struct branch *lt, *gt;
} Branch;

typedef enum {left, right} rotation;

Branch * newBranch(int value){
    Branch *new = malloc(sizeof(Branch));
    new->value = value;
    new->height = 0;
    new->lt = new->gt = NULL;
    return new;
}

int height (Branch *root) {
    if (!root)
        return -1;
    return root->height;
}

void updateHeight (Branch *root) {
    root->height = MAX(height(root->lt), height(root->gt)) + 1;
}

void rotate (Branch **root, rotation direction) {
    Branch *newRoot, *child;

    if (direction == left) {
        newRoot = (*root)->gt;
        child = newRoot->lt;

        /* Rotation */
        newRoot->lt = *root;
        (*root)->gt = child;
    }
    else {
        newRoot = (*root)->lt;
        child = newRoot->gt;

        /* Rotation */
        newRoot->gt = *root;
        (*root)->lt = child;
    }

    updateHeight(*root);
    updateHeight(newRoot);
    *root = newRoot;
}

void balanceTree (Branch **root, int value) {
    int balance = height((*root)->lt) - height((*root)->gt);
    updateHeight(*root);

    /* Left heavy */
    if (balance > 1) {
        if (value > (*root)->lt->value)
            rotate(&(*root)->lt, left);
        rotate(root, right);
    }

    /* Right heavy */
    else if (balance < -1) {
        if (value < (*root)->gt->value)
            rotate(&(*root)->gt, right);
        rotate(root, left);
    }

}

void insertBranch(Branch **root, Branch *new) {
    if (!*root) {
        *root = new;
        return;
    }

    if (new->value > (*root)->value)
        insertBranch(&(*root)->gt, new);
    else if (new->value < (*root)->value)
        insertBranch(&(*root)->lt, new);
    else
        free(new);

    if (new)
        balanceTree(root, new->value);
}

void preOrder(Branch *root) {
    if (!root)
        return;
    printf("%d ", root->value);
    preOrder(root->lt);
    preOrder(root->gt);
}

/* Driver program to test above function*/
int main()
{
  Branch *root = NULL;

  /* Constructing tree given in the above figure */
  insertBranch(&root, newBranch(10));
  insertBranch(&root, newBranch(20));
  insertBranch(&root, newBranch(30));
  insertBranch(&root, newBranch(40));
  insertBranch(&root, newBranch(50));
  insertBranch(&root, newBranch(25));

  /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \    \
       10  25   50
  */

  printf("Preorder traversal of the constructed AVL"
         " tree is \n");
  preOrder(root);
  printf("\n");

  return 0;
}
