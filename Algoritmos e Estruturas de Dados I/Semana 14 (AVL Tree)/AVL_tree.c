#include "./AVL_tree.h"

/* Driver program to test above function*/
int main() {
    Node *root = NULL;

    insertNode(&root, 9);
    insertNode(&root, 5);
    insertNode(&root, 10);
    insertNode(&root, 0);
    insertNode(&root, 6);
    insertNode(&root, 11);
    insertNode(&root, -1);
    insertNode(&root, 1);
    insertNode(&root, 2);

    /* The constructed AVL Tree would be
            9
           /  \
          1    10
        /  \     \
       0    5     11
      /    /  \
     -1   2    6
    */

    printf("Preorder traversal of the constructed AVL tree is \n");
    preOrder(root);
    printf("\n");

    printf("Sixth smallest value is: %d\n", getValue(root, 5));

    removeNode(&root, 10);

    /* The AVL Tree after deletion of 10
            1
           /  \
          0    9
        /     /  \
       -1    5     11
           /  \
          2    6
    */

    printf("Preorder traversal of the constructed AVL tree is \n");
    preOrder(root);
    printf("\n");

    printf("Now let's delete everything one by one.\n");

    destroyTree(&root);

    printf("Preorder traversal of the constructed AVL tree is \n");
    preOrder(root);
    printf("\n");

return 0;
}
