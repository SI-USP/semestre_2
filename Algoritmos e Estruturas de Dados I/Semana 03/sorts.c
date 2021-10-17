#include <stdlib.h>

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int *merge (int *array1, int size1, int *array2, int size2) {
	int k, i, j, *array3 = malloc((size1 + size2) * sizeof(*array3));

	for (k = i = j = 0; k < size1 + size2; k++)
		array3[k] = ((i < size1 && array1[i] <= array2[j]) || j >= size2) ? array1[i++] : array2[j++];
	return array3;
}

int partition (int *array, int size) {
	int i = -1, j;

	for (j = 0; j < size - 1; j++)
	    if (array[j] <= array[size - 1])
			swap(&array[++i], &array[j]);
	swap(&array[++i], &array[j]);

	return i;
}

void bubbleSort (int *array, int size) {
	int i;

	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
		if (array[i] > array[i + 1])
			swap(&array[i], &array[i + 1]);
	bubbleSort(array, size - 1);
}

void selectionSort (int *array, int size) {
    int i, pos = 0;

    if (size <= 1)
        return;
    for (i = 1; i < size; i++)
        if (array[i] < array[pos])
            pos = i;
    swap(array, &array[pos]);
    selectionSort(array + 1, size - 1);
}

void insertionSort (int *array, int size) {
    int i, tmp;

    if (size <= 1)
        return;
    insertionSort(array, size - 1);
    tmp = array[size - 1];
    for (i = size - 2; i >= 0 && array[i] > tmp; i--)
        array[i + 1] = array[i];
    array[i + 1] = tmp;
}

void mergeSort(int *array, int size) {
	int *tmp, i, m = size / 2;

	if (size > 1) {
		mergeSort(array, m);
		mergeSort(array + m, size - m);
	}
	tmp = merge(array, m, array + m, size - m);
	for (i = 0; i < size; i++)
	    array[i] = tmp[i];
}

void quickSort (int *array, int size) {
	int pivot;

	if (size <= 1)
		return;
	pivot = partition(array, size);
	quickSort(array, pivot);
	quickSort(array + (pivot + 1), size - (pivot + 1));
}
