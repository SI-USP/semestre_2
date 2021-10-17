# Semana 08: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal08.pdf)

> Por Guilherme de Abreu Barreto[^1]

```c
bool excluirElementoPilha(PILHATRIPLA* p, REGISTRO* reg, int pilha){
    switch (pilha) {
        case 1:
            if (p->topo1 < 0)
                return false;
            *reg = p->A[p->topo1--];
            return true;
        case 2:
            if (p->topo2 < p->base2)
                return false;
            *reg = p->A[p->topo2--];
            return true;
        case 3:
            if (p->topo3 >= MAX)
                return false;
            *reg = p->A[p->topo3++];
            return true;
        default:
            return false;
    }
}
```

[^1]: nUSP: 12543033