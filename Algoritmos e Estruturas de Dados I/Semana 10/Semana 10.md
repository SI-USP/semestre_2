# Semana 10: resposta ao [exercício proposto](http://www.each.usp.br/digiampietri/ACH2023/ACH2023_AtividadeSemanal10.pdf)

> Por Guilherme de Abreu Barreto[^1]

**Parte 1:** Escreva o que será impresso pela execução do código desta atividade.

**Resolução:**

```c
FuncaoZZZ (1a execucao): 1
FuncaoX (1a execucao): 3
Imprimindo (1a execucao): 3 2 1 
FuncaoZZZ (2a execucao): 3
FuncaoX (2a execucao): 6
Imprimindo (2a execucao): 3 7 6 5 2 1 
```

**Parte 2:** Desenhe a arvore binária resultante da execução deste código.

**Resolução:**

```mermaid
classDiagram
Raiz --> esq1
Raiz --> dir1
dir1 --> esq2
dir1 --> dir2
esq2 --> dir3
class Raiz {
    (PONT) 0x5555555592a0
    chave = 1
}
class esq1 {
    chave = 3
    (PONT) 0x5555555592e0
}
class dir1 {
    chave = 2
    (PONT) 0x5555555592c0
}
class esq2 {
    chave = 6
    (PONT) 0x555555559750
}
class dir2 {
    chave = 5
    (PONT) 0x555555559730
}
class dir3 {
    chave = 7
    (PONT) 0x555555559710
}
```

[^1]: nUSP: 12543033