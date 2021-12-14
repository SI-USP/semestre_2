#include <stdlib.h>
#include <stdio.h>

typedef struct item {
    unsigned int index, value, weight;
    float ratio;
} Item;

Item * initializeList (unsigned int size) {
	unsigned int i;
    Item *list = malloc(size * sizeof(Item));

    for (i = 0; i < size; i++) {
        list[i].index = i;
        scanf(" %u", &list[i].weight);
    }
    for (i = 0; i < size; i++) {
        scanf(" %u", &list[i].value);
        list[i].ratio = (float) list[i].value / list[i].weight;
    }
    return list;
}

void swap (Item *a, Item *b) {
	Item tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition (Item *list, unsigned int size) {
	unsigned int i, j, lastIndex = size - 1;

	for (i = j = 0; i < lastIndex; i++)
	    if (list[i].ratio >= list[lastIndex].ratio)
            swap(&list[i], &list[j++]);
	swap(&list[i], &list[j]);
	return j;
}

void quickSort (Item *list, unsigned int size) {
	unsigned int pivot;

	if (size <= 1)
		return;
	pivot = partition(list, size);
	quickSort(list, pivot++);
	quickSort(list + pivot, size - pivot);
}

void greedyKnapsack (Item *list, unsigned int size) {
    unsigned int i, capacity, total = 0;

    scanf(" %u", &capacity);
    printf("Capacidade da mochila: %u\nConteúdos:\n", capacity);
    for (i = 0; i < size; i++) {
        if (list[i].weight > capacity)
            continue;
        capacity -= list[i].weight;
        total += list[i].value;
        printf("Item: %-5u Valor: %5u Peso: %5u Razão: %f\n",
        list[i].index + 1, list[i].value, list[i].weight, list[i].ratio);
    }
    printf("Capacidade restante da mochila: %u\n", capacity);
    printf("Valor total armazenado: %u\n", total);
}

int main () {
    unsigned int size;
    Item *list;

    scanf(" %u", &size);
    list = initializeList(size);
    quickSort(list, size);
    greedyKnapsack(list, size);
    free(list);
    return 0;
}
