#include <stdio.h>
#include <stdbool.h>
#define MAX 8
#define NS 4

typedef struct {
    int a[MAX], base[NS + 1], top[NS + 1];
} mStack;

mStack initializeStack () {
    int i;
    mStack s;

    for (i = 0; i < NS; i++) {
        s.base[i] = i * MAX / NS;
        s.top[i] = s.base[i] - 1;
    }
    return s;
}

int stackSize (mStack *s, int stack) {
    if (stack < 0 || stack >= NS)
        return EOF;
    return s->top[stack] - s->base[stack] + 1;
}

int stacksSize (mStack *s) {
    int i, size = 0;

    for (i = 0; i < NS; i++)
        size += stackSize(s, i);
    return size;
}

bool fullStack(mStack *s, int stack) {
    return (s->top[stack] == s->base[stack + 1] - 1) ? true : false;
}

bool pop (mStack *s, int stack, int *value) {
    if (stack < 0 || stack >= NS || s->top[stack] < s->base[stack])
        return false;
    *value = s->a[s->top[stack]--];
    return true;
}
bool pushStack(mStack *s, int stack) {
    int i;

    if (stack < 1 || stack >= NS || s->top[stack] == s->base[stack + 1] - 1)
        return false;
    for (i = s->top[stack]; i >= s->base[stack]; i--)
        s->a[i + 1] = s->a[i];
    s->top[stack]++;
    s->base[stack]++;
    return true;
}

bool pullStack(mStack *s, int stack) {
    int i;

    if (stack < 1 || stack >= NS || s->base[stack] == s->top[stack - 1] + 1)
        return false;
    for (i = s->base[stack]; i >= s->top[stack]; i++)
        s->a[i - 1] = s->a[i];
    s->top[stack]--;
    s->base[stack]--;
    return true;
}

bool push (mStack *s, int stack, int value) {
    int i;

    if (stack < 0 || stack >= NS)
        return false;
    if (fullStack(s, stack)) {
        for (i = NS - 1; i > stack; i--)
            pushStack(s, i);
        if (fullStack(s, stack))
            for (i = 1; i <= stack; i++)
                pullStack(s, i);
        if (fullStack(s, stack))
            return false;
    }
    s->top[stack]++;
    s->a[s->top[stack]] = value;
    return true;
}
