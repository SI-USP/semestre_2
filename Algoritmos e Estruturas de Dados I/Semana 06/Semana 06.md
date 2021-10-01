# Semana 06: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal06.pdf)

> Por Guilherme de Abreu Barreto[^1]

```c
bool encontrarMax (DEQUE *d, int *max) {
    PONT n = d->cabeca->prox;

    if (n == d->cabeca)
        return false;
    *max = n->reg.chave;
    n = n->prox;
    while (n != d->cabeca) {
        if (*max < n->reg.chave)
            *max = n->reg.chave;
        n = n->prox;
    }
    return true;
}
```

[^1]: nUSP: 12543033