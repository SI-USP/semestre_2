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
    int i, j = -1, total = 0, *index = malloc(size * sizeof(int));

    for (i = size; capacity > 0 && i > 0; i--) {
        if (results[i][capacity] == results[i - 1][capacity])
            continue;
        capacity -= list[i - 1].weight;
        total += list[i - 1].value;
        index[++j] = i - 1;
    }

    while (j >= 0) {
        printf("Item: %-5d Valor: %5d Peso: %5d Razão: %f\n",
        index[j] + 1, list[index[j]].value, list[index[j]].weight,
        (float) list[index[j]].value / list[index[j]].weight);
        j--;
    }

    printf("Capacidade restante da mochila: %d\n", capacity);
    printf("Valor total armazenado: %d\n", total);
    free(results);
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
