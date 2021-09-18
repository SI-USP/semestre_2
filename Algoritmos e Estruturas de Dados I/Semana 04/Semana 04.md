# Semana 04: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal04.pdf)

> Por Guilherme de Abreu Barreto, nUSP: 12543033.



```c
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
    Node *prev, *current, *next;
    prev = next = NULL;

    if (l->start != NULL) {
        if (abs(value - l->start->value) < abs(value - l->end->value)) {
            next = l->start;
            while (next != NULL && next->value < value) {
                prev = next;
                next = next->next;
            }
            if (next != NULL && next->value == value)
                return;
        }
        else {
            prev = l->end;
            while (prev != NULL && prev->value > value) {
                next = prev;
                prev = prev->prev;
            }
            if (prev != NULL && prev->value == value)
                return;
        }
    }

    current = malloc(sizeof(*current));
    current->value = value;

    if (prev == NULL) {
        current->next = l->start;
        l->start = current;
    }
    else {
        current->next = prev->next;
        prev->next = current;
    }

    if (next == NULL) {
        current->prev = l->end;
        l->end = current;
    }
    else {
        current->prev = next->prev;
        next->prev = current;
    }
}

void removeFrom (List *l, int value) {
    Node *current;

    if (l->start == NULL)
        return;
    if (abs(value - l->start->value) < abs(value - l->end->value)) {
        current = l->start;
        while (current != NULL && current->value < value)
            current = current->next;
    }
    else {
        current = l->end;
        while (current != NULL && current->value > value)
            current = current->prev;
    }

    if (current == NULL)
        return;
    if (current->prev != NULL && current->next != NULL) {
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }
    else {
        if (current->prev == NULL) {
            l->start = current->next;
            if (current->next != NULL)
                current->next->prev = NULL;
        }
        if (current->next == NULL) {
            l->end = current->prev;
            if (current->prev != NULL)
                current->prev->next = NULL;
        }
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
```