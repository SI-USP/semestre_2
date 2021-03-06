#include "./merge_select.h"

int * readArray (int *size) {
	int d, i = 0;
	char c;
	array A;
	
	*size = 1;
	A = malloc(sizeof(int));
	do {
		if (!scanf(" %d", &d))
			continue;
		if (i == *size - 1) {
			*size *= 2;
			A = realloc(A, *size * sizeof(int));
		}
		A[i++] = d;
	} while ((c = getchar()) != EOF && c != '\n');
	*size = i;
	return A;
}

int main () {
    int i, d, size;
	array A;

	printf("Este programa admite uma lista de valores inteiros x tais que %d ≤ x ≤ %d e afere o valor do i-ésimo menor valor.\nDigite uma série de valores inteiros separadas entre si por espaço e pressione ENTER:\n", INT_MIN, INT_MAX);
	A = readArray(&size);

	printf("Digite um índice i tal que 1 ≤ i ≤ %d: ", size);
	if (!scanf(" %d", &d) || d <= 0 || d > size) {
		printf("Valor inválido detectado.\n");
		return 1;
	}
	mergeSort(A, size);

	printf("Arranjo ordenado:\n");
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");

	printf("\nO %dº elemento de menor valor: %d\n", d, A[d - 1]);
	free(A);
    return 0;
}
