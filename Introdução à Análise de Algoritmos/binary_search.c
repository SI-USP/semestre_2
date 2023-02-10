#include <stdio.h>
#include <stdbool.h>

/* Remember that C has its own implementation of the binary search as "bsearch" */

bool binarySearch (int * array, int size, int key) {
    int i = size / 2;

    if (array[i] == key)
        return true;
    if (size <= 1)
        return false;
    if (array[i] < key)
        return binarySearch(array + (i + 1), size - (i + 1), key);
    return binarySearch(array, i, key);
}

int main () {
    int i, a[11], value;

    printf("Digite onze números e pressione ENTER: ");
    for (i = 0; i < 11; i++)
        scanf(" %d", &a[i]);
    printf("Digite um número a ser buscado: ");
    scanf("%d", &value);

    return (binarySearch(a, 11, value)) ? 0 : 1;
}
