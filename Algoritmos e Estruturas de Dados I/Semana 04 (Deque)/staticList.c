#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef struct {
	int index, next;
} Item;

typedef struct {
	Item a[MAX];
	int start, open;
} List;

void init (List * l) {
	int i;
	
	for (i = 0; i < MAX - 1; i++)
		l->a[i].next = i + 1;
		
	l->a[MAX -1].next = EOF;
	l->start = EOF;
	l->open = 0;
}

int listSize (List * l) {
	int i = l->start, size;

	for (size = 0; i != EOF; size++)
		i = l->a[i].next;

	return size;
}

int findInOrderedList (int k, List * l) {
	int i = l->start;

	while (i != EOF && l->a[i].index < k)
		i = l->a[i].next;

	if (i == EOF || l->a[i].index != k)
		return EOF;
	return i;	
}

int openIndex (List * l) {
	int result = l->open;
	if (l->open != EOF)
		l->open = l->a[l->open].next;
	return result;
}

void returnIndex(int i, List * l) {
	l->a[i].next = l->open;
	l->open = i;
}

bool insertInSortedList (Item insert, List * l) {
	if (l->open == EOF)
		return false;

	int prev, i = l->start, k = insert.index;
	
	for (prev = EOF; i != EOF && l->a[i].index < k; prev = i)
		i = l->a[i].next;

	if (i != EOF || l->a[i].index == k)
		return false;

	i = openIndex(l);
	l->a[i].index = k;

	if (prev == EOF) {
		l->a[i].next = l->start;
		l->start = i;
	}
	else {
		l->a[i].next = l->a[prev].next;
		l->a[prev].next = i;
	}
	return true;
}

bool removefromSortedList (List * l, int k) {
	int prev, i = l->start;

	for (prev = EOF; i != EOF && l->a[i].index < k; prev = i)
		i = l->a[i].next;

	if (i == EOF || l->a[i].index != k)
		return false;
	if (prev == EOF)
		l->start = l->a[i].next;
	else
		l->a[prev].next = l->a[i].next;

	returnIndex(i, l);
	return true;
}
