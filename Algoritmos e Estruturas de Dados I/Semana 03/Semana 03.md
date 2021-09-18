# Semana 03: respostas ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal03.pdf)

> Por Guilherme de Abreu Barreto, nUSP: 12543033.

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int size, * value;
} Array;

Array * initializeArray () {
    Array * init = malloc(sizeof(*init));
    init->size = 1;
    init->value = malloc(sizeof(init->value));

    return init;
}

int readSequence(Array * sequence) {
    bool end = false;
    int num, i = 0;
    char c;

    do {
        switch (scanf("%d%c", &num, &c)) {
            case 0:
                return EOF;
            case EOF:
                end = true;
        }
        if (end == true)
            break;
        if (i == sequence->size - 1) {
            sequence->size *= 2;
            sequence->value = realloc(sequence->value, sequence->size * sizeof(sequence->value));
        }
        sequence->value[i] = num;
        i++;
    } while(c != '\n');

    sequence->size = i;
    return i;
}

bool isSorted (Array * sequence) {
    int i;

    for (i = 0; i < sequence->size - 1; i++)
        if (sequence->value[i] > sequence->value[i + 1])
            return false;
    return true;
}

void selectionSort(Array * sequence) {
    int i, j, pos, aux;

    if (isSorted(sequence) == true)
        return;
    for (i = 0; i < sequence->size - 1; i++) {
        pos = i;

        for (j = i + 1; j < sequence->size; j++)
            if (sequence->value[j] < sequence->value[pos])
                pos = j;
        if (pos == i)
            continue;
        aux = sequence->value[i];
        sequence->value[i] = sequence->value[pos];
        sequence->value[pos] = aux;
    }
}

int main () {
    int i;
    Array * sequence = initializeArray();

    printf("Este programa lê uma sequência de números inteiros e os ordena em ordem crescente. Digite uma sequência de números qualquer e pressione ENTER:\n");

    switch (readSequence(sequence)) {
        case EOF:
            printf("Detectado valor inválido na sequência\n");
        case 0:
            return 1;
    }
    selectionSort(sequence);

    printf("\n");
    for (i = 0; i < sequence->size; i++)
        printf("%d ", sequence->value[i]);
    printf("\n");
    return 0;
}
->size; i++)
        printf("%d ", sequence->value[i]);
    printf("\n");
    return 0;
}
```