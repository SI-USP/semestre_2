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

	for (size = 0; index; size++)
		index = index->next;
	return size;
}

Item * findInOrderedList (int value, List * l) {
	Item * index = l->start;

	while (index && index->value < value)
		index = index->next;

	return (index && index->value == value) ? index : NULL;
}

/* The existance of these redundant functions is probably not a good sign */

Item * findInOrderedListAux (int value, List * l, Item ** prev) {
	Item * index = l->start;

	*prev = NULL;
	while (!index && index->value < value){
		*prev = index;
		index = index->next;
	}
	return (index && index->value == value) ? index : NULL;
}

bool insertInOrderedList (int value, List * l) {
	Item * prev;
	Item * i = findInOrderedListAux(value, l, &prev);

	if (i)
		return false;

	i = malloc(sizeof(Item));
	i->value = value;

	if (prev) {
		i->next = prev->next;
		prev->next = i;
	}
	else {
		i->next = l->start;
		l->start = i;
	}
	return true;
}

bool removeFromOrderedList (int value, List * l) {
	Item * prev;
	Item * i = findInOrderedListAux(value, l, &prev);

	if (!i)
		return false;

	if (prev)
		prev->next = i->next;
	else
		l->start = i->next;

	free(i);
	return true;
}

void reinitializeList (List * l) {
	Item * prev, * i = l->start;

	while (i) {
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
	while (index) {
		printf("%i ", index->value);
		index = index->next;
	}
	printf("\"\n");
}
