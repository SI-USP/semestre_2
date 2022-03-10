#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *HEAD, *TAIL;
} Queue;

void push (Queue *q, int value) {
    Node *n = malloc(sizeof(*n));

    n->value = value;
    n->next = NULL;
    if (!q->HEAD->next)
        q->HEAD->next = n;
    else
        q->TAIL->next = n;
    q->TAIL = n;
}

int pop (Queue *q) {
    int value;
    Node *n = q->HEAD->next;

    if (!n)
        return EOF;
    value = n->value;
    q->HEAD->next = (n->next) ? n->next : NULL;
    if (!q->HEAD->next)
        q->TAIL = NULL;
    free(n);
    return value;
}

void printQueue (Queue *q) {
	int i;
	Node *current = q->HEAD->next;

	for (i = 0; current; i++) {
	    printf("\nÍndice: %-6d Valor: %-6d (Endereços) Atual: %p Próximo: %p\n", i, current->value, current, current->next);
		current = current->next;
	}
}

int main () {
    int i, value;
    char c;
    Queue q = {NULL};

    q.HEAD = malloc(sizeof(q.HEAD));
    printf("Este programa adiciona valores inteiros à uma fila, e depois permite excluí-los da mesma.\nDigite uma sequência de valores e pressione ENTER: ");
    do {
        if(!scanf("%d%c", &i, &c)) {
            printf("Valor inválido detectado.");
            return 1;
        }
        push(&q, i);
    } while (c != '\n');
    printQueue(&q);

    printf("\nDigite uma quantia de valores a serem apagados e pressione ENTER: ");
    i = 0;
    for (scanf("%d", &i); i > 0; i--) {
        value = pop(&q);
        if (value == EOF)
            break;
        printf("\nValor apagado: %d", value);
    }
    printf("\n");
    printQueue(&q);
    return 0;
}
