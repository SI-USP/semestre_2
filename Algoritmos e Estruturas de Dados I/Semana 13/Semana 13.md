# Semana 13

> Resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal13.pdf), por Guilherme de Abreu Barreto[^1]

```c
void encontrarMinMaxRec(PONT raiz, char* min, char* max){
    if (!raiz)
        return;
    if (raiz->chave < *min)
        *min = raiz->chave;
    else if (raiz->chave > *max)
        *max = raiz->chave;
    encontrarMinMaxRec(raiz->ultimoFilho, min, max);
    encontrarMinMaxRec(raiz->proximoIrmao, min, max);
}
```

[^1]: nUSP: 12543033