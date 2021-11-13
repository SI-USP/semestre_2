#include <stdio.h>
#include <stdlib.h>
#include "./merge_select.h"

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
