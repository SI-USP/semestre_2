#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node *next;
} Node;

typedef struct {
    Node *start, *end;
} Queue;

Node * newNode (int value) {
    Node *n = malloc(sizeof(Node));

    n->value = value;
    n->next = NULL;
    return n;
}

void push (Queue *q, int value) {
    Node *n = newNode(value);

    if (q->start)
        q->end->next = n;
    else
        q->start = n;
    q->end = n;
}

int pop (Queue *q) {
    int value;
    Node *n;

    if (!q->start)
        return EOF;

    n = q->start;
    value = n->value;
    q->start = n->next;
    if (q->end == n)
        q->end = NULL;
    free(n);
    return value;
}

void printQueue (Queue *q) {
	int i;
	Node *n = q->start;

    printf("\nInício (endereço): %p\n", q->start);
	for (i = 0; n; i++) {
	    printf("Índice: %-6d Valor: %-6d (Endereços) Atual: %p Próximo: %p\n", i, n->value, n, n->next);
		n = n->next;
	}
    printf("Fim: (endereço): %p\n", q->end);
}

int main () {
    int i, value;
    char c;
    Queue *q = calloc(1, sizeof(Queue));

    printf("Este programa adiciona valores inteiros à uma fila, e depois permite excluí-los da mesma.\nDigite uma sequência de valores e pressione ENTER: ");
    do {
        if(!scanf("%d%c", &i, &c)) {
            printf("Valor inválido detectado.");
            return 1;
        }
        push(q, i);
    } while (c != '\n');
    printQueue(q);

    printf("\nDigite uma quantia de valores a serem apagados e pressione ENTER: ");
    i = 0;
    for (scanf("%d", &i); i > 0; i--) {
        value = pop(q);
        if (value == EOF)
            break;
        printf("\nValor apagado: %d", value);
    }
    printf("\n");
    printQueue(q);
    return 0;
}
