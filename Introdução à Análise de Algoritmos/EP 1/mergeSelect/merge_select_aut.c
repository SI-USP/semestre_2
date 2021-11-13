#include <stdio.h>
#include <stdlib.h>
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

	if (size == 1)
		return;
	pivot = (size - 1) / 2;
	mergeSort(A, ++pivot);
	mergeSort(A + pivot, size - pivot);
	merge(A, pivot, size);
}

int main () {
    int i = 0, size, index;
	array A;

	scanf(" %d %d", &size, &index);
	if (index <= 1 || index >= size) {
		printf("Índice invalido: %d não se encontra desde 1 a %d.\n", index, size);
		return 1;
	}
	A = malloc(size * sizeof(int));
	while (i < size && scanf(" %d", A + i))
		i++;
	if (i < size) {
		printf("Lista mal formatada: apenas %d valores foram encontrados.\n", i);
		return 1;
	}
	mergeSort(A, size);
	printf("O %dº elemento de menor valor: %d\n", index, A[index - 1]);
    return 0;
}
