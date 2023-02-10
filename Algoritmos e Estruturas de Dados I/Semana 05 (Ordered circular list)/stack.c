#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int * value, size, top;
} Stack;

Stack * initialize (int size) {
    Stack *s = malloc(sizeof(*s));
    s->value = malloc(size * sizeof(s->value));
    s->size = size;
    s->top = -1;
    return s;
}

void printStack (Stack *s) {
    int i;

    printf("Lista: \"");
    for (i = s->top; i >= 0; i--)
        printf("%d ", s->value[i]);
    printf("\"\n");
}

void reversePrintStack (Stack *s) {
    int i;

    printf("Pilha (da base para o topo): \" ");
    for (i = 0; i <= s->top; i++)
        printf("%d\n", s->value[i]);
    printf("\"\n");
}

bool push (Stack * s, int value) {
    if (s->top >= s->size + 1)
        return false;
    s->top = s->top + 1;
    s->value[s->top] = value;
    return true;
}

int pop (Stack * s) {
    if (s->top < 0)
        return EOF;
    s->top -= 1;
    return s->value[s->top + 1];
}
