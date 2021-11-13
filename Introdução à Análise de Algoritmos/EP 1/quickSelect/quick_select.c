#define array int*

void swap (int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition (array A, int pivot, int size) {
	int i, j, lastIndex = size - 1;

	swap(&A[pivot], &A[lastIndex]);
	for (i = j = 0; i < lastIndex; i++)
	    if (A[i] <= A[lastIndex])
			swap(&A[i], &A[j++]);
	swap(&A[i], &A[j]);
	return j;
}

int * quickSelect (array A, int size, int i) {
	int pivot;

	if (size <= 1)
		return A;
	pivot = partition(A, i, size);
	if (A + pivot == A + i)
		return A + i;
	if (i < pivot)
		return quickSelect(A, pivot, i);
	pivot++;
	return quickSelect(A + pivot, size - pivot, i - pivot);
}
