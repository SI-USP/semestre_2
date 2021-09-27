#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *prev;
	struct node *next;
} Node;

typedef struct {
	Node *start;
	Node *end;
} List;

void insertIn (List *l, int value) {
	Node *prev = NULL, *current, *next;

	for (next = l->start; next != NULL && next->value < value; next = next->next)
		prev = next;
	if (next != NULL && next->value == value)
		return;

	current = malloc(sizeof(*current));
	current->value = value;
	current->prev = prev;
	current->next = next;

	if (prev == NULL)
		l->start = current;
	else
		prev->next = current;

	if (next == NULL)
		l->end = current;
	else
		next->prev = current;
}

void removeFrom (List *l, int value) {
	Node *current = l->start;

	while (current != NULL && current->value < value)
		current = current->next;

	if (current == NULL)
		return;
	if (current->prev != NULL && current->next != NULL) {
		current->prev->next = current->next;
		current->next->prev = current->prev;
	}
	else if (current->prev == NULL) {
		l->start = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	}
	else {
		l->end = current->prev;
		if (current->prev != NULL)
			current->prev->next = NULL;
	}
	free(current);
}

void printList (List l) {
	int i;
	Node *current = l.start;

	for (i = 0; current != NULL; i++) {
	    printf("\nÍndice: %-6d Valor: %-6d (Endereços) Anterior: %p Atual: %p Próximo: %p\n", i, current->value, current->prev, current, current->next);
		current = current->next;
	}
}

int main () {
	int i;
	char c;
    List l = {0};

	printf("Este programa adiciona valores inteiros à uma lista duplamente ligada, e depois permite excluí-los da mesma.\nDigite uma sequência de valores e pressione ENTER: ");
	do {
		if(!scanf("%d%c", &i, &c)) {
		    printf("Valor inválido detectado.");
		    return 1;
		}
		insertIn(&l, i);
	} while (c != '\n');
	printList(l);

	printf("\nDigite uma sequência de valores a serem apagados e pressione ENTER: ");
	do {
		if(!scanf("%d%c", &i, &c)) {
		    printf("Valor inválido detectado.");
		    return 1;
		}
		removeFrom(&l, i);
	} while (c != '\n');
	printList(l);

    return 0;
}
