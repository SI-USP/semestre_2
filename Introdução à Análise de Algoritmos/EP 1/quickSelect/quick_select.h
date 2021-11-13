#define array int*
#include "./quick_select.c"

void swap (int *a, int *b);
int partition (array A, int pivot, int size);
int * quickSelect (array A, int size, int i);
