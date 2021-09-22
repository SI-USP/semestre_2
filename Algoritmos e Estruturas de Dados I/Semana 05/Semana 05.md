# Semana 04: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal05.pdf)

> Por Guilherme de Abreu Barreto[^1]

Para uma estrutura de tipo `stack` definida como:

```c
typedef struct {
    int * value, size, top;
} Stack;
```

E inicializada na forma:

```c
Stack * initialize (int size) {
    Stack *s = malloc(sizeof(*s));
    s->value = malloc(size * sizeof(s->value));
    s->size = size;
    s->top = -1;
    return s;
}
```

Tem-se impressos os conteúdos nesta armazenados, na ordem do fundo até o topo, por intermédio da seguinte função:

```c
void reversePrintStack (Stack *s) {
    int i;

    printf("Pilha (da base para o topo): \" ");
    for (i = 0; i <= s->top; i++)
        printf("%d\n", s->value[i]);
    printf("\"\n");
}
```

[^1]: nUSP: 12543033