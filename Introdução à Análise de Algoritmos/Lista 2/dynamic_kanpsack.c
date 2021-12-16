#include <stdlib.h>
#include <stdio.h>
#include <sys/param.h>

typedef struct item {
    int value, weight;
} Item;

Item * initializeList (int size) {
	int i;
    Item *list = malloc(size * sizeof(Item));

    for (i = 0; i < size; i++)
        scanf(" %d", &list[i].weight);
    for (i = 0; i < size; i++)
        scanf(" %d", &list[i].value);
    return list;
}

int ** initializeTable (Item *list, int size, int capacity) {
    int i, j, **results = malloc(++size * sizeof(int*));

    results[0] = calloc(++capacity, sizeof(int));
    for (i = 1; i < size; i++) {
        results[i] = malloc(capacity * sizeof(int));
        for (j = 0; j < capacity; j++)
            results[i][j] = (list[i - 1].weight > j) ? results[i - 1][j] : MAX(results[i - 1][j], list[i - 1].value + results[i - 1][j - list[i - 1].weight]);
    }
    return results;
}

void printSelection (Item *list, int **results, int size, int capacity) {
    int i = -1, total = 0, *index = malloc(size * sizeof(int));

    while (size > 0) {
        if (results[size][capacity] != results[size - 1][capacity]) {
            capacity -= list[size - 1].weight;
            total += list[size - 1].value;
            index[++i] = size - 1;
        }
        free(results[size--]);
    }
    free(*results);
    free(results);

    while (i >= 0) {
        printf("Item: %-5d Valor: %5d Peso: %5d Razão: %f\n",
        index[i] + 1, list[index[i]].value, list[index[i]].weight,
        (float) list[index[i]].value / list[index[i]].weight);
        i--;
    }

    printf("Capacidade restante da mochila: %d\n", capacity);
    printf("Valor total armazenado: %d\n", total);
}

void dynamicKnapsack (Item *list, int size) {
    int capacity;

    scanf(" %d", &capacity);
    printf("Capacidade da mochila: %d\nConteúdos:\n", capacity);
    printSelection(list, initializeTable(list, size, capacity), size, capacity);
    free(list);
}

int main () {
    int size;

    scanf(" %d", &size);
    dynamicKnapsack(initializeList(size), size);
    return 0;
}
