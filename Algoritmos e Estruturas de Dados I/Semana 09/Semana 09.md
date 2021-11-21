# Semana 09: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal09.pdf)

> Por Guilherme de Abreu Barreto[^1]

```c
MATRIZ *multiplicarMatrizes(MATRIZ *m1, MATRIZ *m2){
    int i,j,k;
    MATRIZ *res;

    if (m1->colunas != m2->linhas)
        return NULL;
    res = inicializarMatriz(m1->linhas, m2->colunas);
    for (i = 0; i < res->linhas; i++) {
        for (j = 0; j < res->colunas; j++) {
            res->M[i][j] = 0;
            for (k = 0; k < m1->colunas; k++)
                res->M[i][j] += m1->M[i][k] * m2->M[k][j];
        }
    }
    return res;
}
```

[^1]: nUSP: 12543033