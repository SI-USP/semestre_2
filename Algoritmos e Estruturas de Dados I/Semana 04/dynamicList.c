#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct item {
	int value;
	struct item * next;
} Item;

typedef struct {
	Item * start;
} List;

int listSize (List * l) {
	int size;
	Item * index = l->start;

	for (size = 0; index != NULL; size++)
		index = index->next;

	return size;
}

Item * findInOrderedList(int value, List * l) {
	Item * index = l->start;
	while (index != NULL && index->value < value)
		index = index->next;

	if (index == NULL || index->value != value)
		return NULL;
	return index;
}

Item * findInOrderedListAux(int value, List * l, Item * prev) {
	prev = NULL;
	Item * index = l->start;
	while (index != NULL && index->value < value){
		prev = index;
		index = index->next;
	}

	if (index == NULL || index->value != value)
		return NULL;
	return index;
}

bool insertInOrderedList (int value, List * l) {
	Item * prev = NULL, * i;
	i = findInOrderedListAux(value, l, prev);
	if (i != NULL)
		return false;
	i = malloc(sizeof(*i));
	i->value = value;

	if (prev == NULL) {
		i->next = l->start;
		l->start = i;
	}
	else {
		i->next = prev->next;
		prev->next = i;
	}
	return true;
}

bool removeFromOrderedList (int value, List * l) {
	Item * prev = NULL, * i;
	i = findInOrderedListAux(value, l, prev);
	if (i != NULL)
		return false;
	if (prev == NULL)
		l->start = i->next;
	else
		prev->next = i->next;
	free(i);
	return true;
}

void reinitializeList (List * l) {
	Item * prev, * i = l->start;
	while (i != NULL) {
		prev = i;
		i = i->next;
		free(prev);
	}
	l->start = NULL;
}

int main () {
	List l = {0};
	Item * index = l.start;

	printf("Lista: \"");
	while (index != NULL) {
		printf("$i ", index->value);
		index = index->next;
	}
	printf("\"\n");
}
