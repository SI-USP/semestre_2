#define array int*

void merge (array A, int pivot, int size) {
	int i, k, j = pivot, tmp[size];

	for (i = k = 0; k < size; k++)
		tmp[k] = ((A[i] <= A[j] && i < pivot) || j == size) ? A[i++] : A[j++];
	for (k = 0; k < size; k++)
	    A[k] = tmp[k];
}

void mergeSort (array A, int size) {
	int pivot;

	if (size <= 1)
		return;
	pivot = (size - 1) / 2;
	mergeSort(A, ++pivot);
	mergeSort(A + pivot, size - pivot);
	merge(A, pivot, size);
}
