#include <stdlib.h>

typedef struct node{
    int value;
    struct node *prev, *next;
} Node;

Node * initializeDequeue() {
    Node *HEAD = malloc(sizeof(*HEAD));
    HEAD->next = HEAD->prev = HEAD;
    return HEAD;
}

Node * insertionSort (Node *HEAD) {
    Node *list, *sortedList;

    if (!HEAD || HEAD->next == HEAD)
        return HEAD;
    sortedList = initializeDequeue();
    for (list = HEAD->next; list != HEAD; list = list->next) {
        /* code */
    }

}
