#include <stdlib.h>
#define array int*

/* Bubble Sort */

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSort (array A, int size) {
	int i;

	if (size <= 1)
		return;
	for (i = 0; i < size; i++)
		if (A[i] > A[i + 1])
			swap(&A[i], &A[i + 1]);
	bubbleSort(A, size - 1);
}

/* Selection Sort */

int * minimalValue (array A, int size) {
	int i, pos = 0;

	for (i = 1; i < size; i++)
        if (A[i] < A[pos])
            pos = i;
	return A + pos;
}

void selectionSort (array A, int size) {
    swap(A, minimalValue(A, size));
    selectionSort(A + 1, size - 1);
}

/* Insertion Sort */

void insertionSort (array A, int size) {
    int i, tmp;

    if (size <= 1)
        return;
    insertionSort(A, --size);
    tmp = A[size--];
    for (i = size; i >= 0 && A[i] > tmp; i--)
        A[i + 1] = A[i];
    A[i + 1] = tmp;
}

/* Merge Sort */

void merge (array A, int pivot, int size) {
	int i, k, j = pivot;
	array tmp = malloc(size * sizeof(int));

	for (i = k = 0; k < size; k++)
		tmp[k] = ((A[i] <= A[j] && i < pivot) || j == size) ?
		A[i++] : A[j++];
	for (k = 0; k < size; k++)
	    A[k] = tmp[k];
	free(tmp);
}

void mergeSort (array A, int size) {
	int pivot;

	if (size <= 1)
		return;
	pivot = size / 2;
	mergeSort(A, pivot);
	mergeSort(A + pivot, size - pivot);
	merge(A, pivot, size);
}


/* Quick Sort */

int partition (array A, int size) {
	int i, j, lastIndex = size - 1;

	for (i = j = 0; i < lastIndex; i++)
	    if (A[i] <= A[lastIndex])
			swap(&A[i], &A[j++]);
	swap(&A[i], &A[j]);
	return j;
}

void quickSort (array A, int size) {
	int pivot;

	if (size <= 1)
		return;
	pivot = partition(A, size);
	quickSort(A, pivot++);
	quickSort(A + pivot, size - pivot);
}

/* Heap Sort */

void heapify (array A, int size, int i) {
	int max = i, left = 2 * i + 1, right = left + 1;

	if (left < size && A[left] > A[max])
		max = left;

	if (right < size && A[right] > A[max])
		max = right;

	if (max == i)
	 	return;

	swap(A + i, A + max);
	heapify(A, size, max);
}

void heapSort (array A, int size) {
	int i;

	if (size <= 1)
		return;

	for (i = (size - 1) / 2; i <= 0; i--)
	    heapify(A, size, i);

	for (i = size - 1; i >= 0; i--) {
	    swap(A, A + i);
		heapify(A, i, 0);
	}
}
