#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef struct {
    int a[50], top1, top2;
} dStack;

dStack initializeStack () {
    dStack s;

    s.top1 = -1;
    s.top2 = MAX;
    return s;
}

int stackSize (dStack *s, int stack) {
    if (stack < 1 || stack > 2)
        return EOF;
    return (stack == 1) ? s->top1 + 1 : MAX - s->top2;
}

bool printStack (dStack *s, int stack) {
    int i;

    if (stack < 1 || stack > 2)
        return false;

    printf("Pilha %d: \"", stack);

    if (stack == 1)
        for (i = s->top1; i >= 0; i--)
            printf("%d ", s->a[i]);
    else
        for (i = s->top2; i < MAX; i++)
            printf("%d ", s->a[i]);

    printf("\"\n");
    return true;
}

bool push (dStack *s, int stack, int value) {
    if (stack < 1 || stack > 2 || s->top1 + 1 == s->top2)
        return false;
    s->a[(stack == 1) ? ++s->top1 : --s->top2] = value;
    return true;
}

bool pop (dStack *s, int stack, int *value) {
    if (stack < 1 || stack > 2)
        return false;
    if (stack == 1) {
        if (s->top1 < 0)
            return false;
        *value = s->a[s->top1--];
    }
    else {
        if (s->top2 >= MAX)
            return false;
        *value = s->a[s->top2++];
    }
    return true;
}
