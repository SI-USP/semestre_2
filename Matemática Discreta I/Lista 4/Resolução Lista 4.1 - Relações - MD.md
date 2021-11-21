# Resolução da [Lista 4](https://drive.google.com/file/d/1ls29hxpLdYCc-sF8LkKYiFCs1M79PUKb/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## Relações

### Exercício 1

Se concordarmos que a Teoria dos Conjuntos provêm uma sólida fundamentação axiomática a partir da qual construirmos demais saberes matemáticos, então temos de demonstrar como demais objetos matemáticos podem ser descritos enquanto conjuntos de algum tipo. Ou seja, se **pares ordenados** não forem compreendidos enquanto axiomas, então estes podem ser descritos enquanto conjuntos. O principal problema o qual temos de sanar nesta representação é o fato de que conjuntos descrevem qualquer agrupamento de elementos distintos, mesmo aqueles **desordenados**; tal que um conjunto$A = \{a,b\} = \{b,a\}$.

Para sanar essa insuficiência, o matemático Kazimierz Kuratowski propôs em 1921 a seguinte definição:

- Considere um conjunto com dois valores $a, b$:

$A = \{a,b\}$

- Então, o conjunto potência de $A$ é:

$P(A) = \{\{\}, \{a\},\{b\},\{a,b\}\}$

- Se deste conjunto derivarmos um subconjunto contendo todos os elementos que por vez contêm $a$, teremos:

$S(P(A)) = \{\{a\},\{a,b\}\}$

Note que este subconjunto contém  toda informação necessária para descrevermos um par ordenado:

- Os valores $a$ e $b$.

- A ordenação destes: o primeiro elemento é descrito pelo elemento $\{a\}$

Finalmente, podemos então restituir a notação original estabelecendo a correspondência $(a,b) := \{\{a\},\{a,b\}\}$.

Voltemos ao problema em questão. $(a,b)$ = $(c,d)$ se e somente se $a = c$ e $b = d$. Procederemos na ida por demonstração direta:

$$
(a,b) := \{\{a\},\{a,b\}\} = \{\{c\},\{c,d\}\} := (c,d)
$$

E na volta procederemos por contradição. Por hipótese, a = c e b = d, onde $(a,b) := \{\{a\},\{a,b\}\}$. Vamos assumir aqui que também a = b = c = d. Pela definição de conjuntos, os elementos que constituem um conjunto são todos **distintos entre si**, de tal forma que repetições são redundantes, não constituem novos elementos. Assim:

$$
(a,a) := \{\{a\}, \{\underbrace{a,a}_{ =\ a}\}\}
= \{\underbrace{\{a\},\{a\}}_{=\ \{a\}}\} = \{\{a\}\}
$$

Podemos notar que a cardinalidade deste conjunto é distinta daquela da hipótese:

$|\{\{a\}\}| = 1;\\ |\{\{a\},\{a,b\}\}| = 2$

O que é absurdo. Logo, só é possível que $(a,b) = (c,d)$ se $a = b$ e $c = d$, e não doutra forma. $\blacksquare$

### Exercício 2

**a.** 

<img title="" src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-13-34-56-image.png" alt="" data-align="center" width="278">

**b.** 

| R     | a   | b   | c   |
| ----- | --- | --- | --- |
| **1** | 0   | 1   | 1   |
| **2** | 0   | 0   | 0   |
| **3** | 0   | 1   | 0   |
| **4** | 1   | 0   | 1   |

**c.** $R^{-1} = \{(b,1),(c,1),(b,3),(a,4),(c,4)\}$

| R^-1^ | 1   | 2   | 3   | 4   |
| ----- | --- | --- | --- | --- |
| **a** | 0   | 0   | 0   | 1   |
| **b** | 1   | 0   | 1   | 0   |
| **c** | 1   | 0   | 0   | 1   |

**d.** Uma é a matriz transposta da outra. Isso é uma se obtêm pela transposição dos elementos ordenados em linhas na outra para colunas na própria.

### Exercício 3

<img title="" src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-17-43-57-image.png" alt="" data-align="center" width="293">

**a.** $T = R \circ S = \{(1,x), (2,y), (2,z)\}$

**b.** $M_R = \left[\begin{matrix}
0 & 1 & 0 \\
1 & 0 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0 \end{matrix}\right]; M_S = \left[\begin{matrix}
0 & 1 & 0 \\
1 & 0 & 0 \\
0 & 1 & 1 \end{matrix}\right]$

**c.** Estas são ligeiramente diferentes:

$M_T = \left[\begin{matrix}
1 & 0 & 0 \\
0 & 1 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0 \end{matrix}\right] \\\ \\
M_RM_S = \left[\begin{matrix}
0 & 1 & 0 \\
1 & 0 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0 \end{matrix}\right] \cdot \left[\begin{matrix}
0 & 1 & 0 \\
1 & 0 & 0 \\
0 & 1 & 1 \end{matrix}\right] = 
\left[\begin{matrix}
1 & 0 & 0 \\
0 & 2 & 1 \\
0 & 0 & 0 \\
0 & 0 & 0 \end{matrix}\right]$

Note que a matriz resultante $M_RM_S$ corresponde às posições de incidência das setas em $C$ e também o número destas:

| T = R ○ S | x   | y   | z   |
| --------- | --- | --- | --- |
| **1**     | 1   | 0   | 0   |
| **2**     | 0   | 2   | 1   |
| **3**     | 0   | 0   | 0   |
| **4**     | 0   | 0   | 0   |

### Exercício 4

| R                                                                                                                                             | S                                                                                                                                                    | R ○ S                                                                                                                                         |
|:---------------------------------------------------------------------------------------------------------------------------------------------:|:----------------------------------------------------------------------------------------------------------------------------------------------------:|:---------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-18-31-10-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-18-51-16-image.png)        | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-11-03-15-46-10-image.png) |
| **S ○ R**                                                                                                                                     | **R^2^**                                                                                                                                             | **S^2^**                                                                                                                                      |
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-11-03-15-20-33-image.png) | ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-18-31-10-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-18-59-26-image.png) |

### Exercício 5

| R^-1^                                                                                                                                         | R^2^                                                                                                                                          |
|:---------------------------------------------------------------------------------------------------------------------------------------------:|:---------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-23-15-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-27-23-image.png) |

Nota-se que as relações $R$, $R^{-1}$ e $R^2$ **não** são funções pois mapeiam pelo menos um valor no domínio para mais de um valor na imagem.

### Exercício 6

| R                                                                                                                                             | R^-1^                                                                                                                                         |
|:---------------------------------------------------------------------------------------------------------------------------------------------:|:---------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-52-13-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-54-07-image.png) |
| **R ∪ R^-1^**                                                                                                                                 | **R ∩ R^-1^**                                                                                                                                 |
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-54-52-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/2021-10-30-19-56-21-image.png) |

### Exercício 7

Sejam R e S ordens parciais sobre um conjunto A. Mostre que R∩S também é uma relação de ordem parcial sobre A.

Para uma relação ser de tipo ordem parcial, esta necessita ser **reflexiva**, **antissimétrica** e **transitiva**. A relação de intersecção $R \cap S$ é deste tipo por consequência de carregar tais características dos conjuntos que integra:

- Esta é reflexiva pois qualquer par ordenado $(a,a) \in R$ corresponde s $(a,a) \in S$ e portanto a $(a,a) \in R \cap S$.

- Para qualquer par ordenado $(a,b) \in R \cap S$, $(a,b) \in R$ e $(a,b) \in S$. Como  tanto $R$ e $S$ são antissimétricos, $(b,a) \not\in R$, $(b,a) \not\in S$ e $(b,a) \not\in R \cap S$.

- Para qualquer par ordenado $(a,b), (b,c) \in R \cap S$, $(a,b), (b,c) \in R$ e $(a,b), (b,c) \in S$. Como tanto R e S são transitivos, $(a,c) \in R$, $(a,c) \in S$ e $(a,c) \in R \cap S$.

### Exercício 8

Tal relação é:

- Reflexiva pois $a^1 = a$, $1 \in \N$. Portanto $(a,a) \in R$.

- Antissimétrica pois se $a^r = b$ então $b^\frac 1r = \pm a$, mas $\frac 1r \not \in \N$. Portanto $(a,b) \in R$, mas $(b, a) \not \in R$.

- Transitiva pois se $a^r = b$ e $b^s = c$ então $a^{r \cdot s} = c$, $r \cdot s \in \N$. Então $(a,c) \in R$.

O conjunto destas qualidades configura que o conjunto $R$ é de tipo parcialmente ordenado sobre $\Z$.

### Exercício 9

Tal relação é:

- Reflexiva pois se $A = B$ então $(A,A) \in R$.

- Antissimétrica pois se $A \subset B$ então $B \not \subset A$. Portanto $(A,B) \in R$, mas $(B, A) \not \in R$.

- Transitiva pois se $A \subseteq C$ e $C \subseteq B$ então $A \subseteq B$. Logo $(A,C) \in R$, $(C, B) \in R$ e $(A, B) \in R$.

O conjunto destas qualidades configura que o conjunto R é de tipo parcialmente ordenado.

**Diagrama de Hasse para S = P({a,b,c})**

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/cbdf8dffb6e245ed2f81937b9070c1a9dcc52977.png" title="" alt="" data-align="center">

### Exercício 10

Uma relação de equivalência trata-se de uma relação binária que é **reflexiva**, **simétrica** e **transitiva**.

Assim sendo, a relação descrita é de tal tipo tido que ela é

- Reflexiva pois se $p = r$ e $q = s$ então $((p,q)(p,q)) \in R$.

- Simétrica pois se $pq = rs$ então $((p,q)(r,s)) \in R$ e $((r,s),(p,q)) \in R$.

- Transitiva pois se $pq = mn$ e $mn = rs$ então $((p,q),(m,n)) \in R$, $((m,n),(r,s)) \in R$ e $((p,q),(r,s)) \in R$.

### Exercício 11

**(Ida)** A cardinalidade do conjunto $|\Z|$ é infinita, entretanto $P(\Z)$ contém todos os subconjuntos possíveis de serem compostos por elementos de $\Z$, tal que $P(\Z) = \{\{\},\{0\},\{1\},\{-1\},\{2\},\dots,\{0,1\},\{0, -1\},\dots\}$. Assim $P(\Z)$ contém incontáveis subconjuntos cada qual finito, tal que para dois subconjuntos $A$ e $B$ quaisquer a diferença simétrica entre estes também é finita pois $A \Delta B \subseteq A\cup B$.

**(Volta)** A relação $R$ entre quaisquer conjuntos finitos é

- Reflexiva pois $A \Delta A = \varnothing$, um conjunto finito contendo nenhum elemento. Logo, $(A,A) \in R$.

- Simétrica pois $A \Delta B = B \Delta A$. Assim, $(A, B) \in R$ e $(B, A) \in R$.

- Transitiva pois se $A \Delta B$ é finita e $B \Delta C$ também, isso implica que $A \Delta C$ também será. Portanto $((A, B), (B,C) \in R) \implies ((A,C) \in R)$.

Finalmente, observa-se que $R$ trata-se de uma relação de **equivalência**.

### Exercício 12

Temos a relação $R = \{(a,b) \in \R : (b - a) \in \Z\}$, está é uma relação de equivalência pois

- esta é reflexiva: para qualquer $a \in \R$, $(a - a) = 0$ e $0 \in \Z$, logo $(a,a) \in R$;

- esta é simétrica: pois o módulo da diferença de $b - a$ equivale àquele da diferença de $a - b$ em $\Z$, logo $(a,b), (b,a) \in R$;

- esta é transitiva pois se $(a - b), (b - c) \in \Z$ então $(a - c) \in \Z$, logo $(a,b),(b,c),(a,c) \in R$.

Assim, para qualquer valor $x \in \R$ dada a relação $R$ sobre $\R$ tem-se a classe de equivalência $[x] = \{y \in \R : (x.y) \in R \}$ representativa de todos os valores aqueles para os quais a diferença $x - y$ produz um número inteiro.

### Exercício 13

- $R$ e $R^{-1}$ são relações transitivas tais que $(a,b),(b,c),(a,c) \in R$ e $(c,b),(b,a),(c,a) \in R^{-1}$, logo $R \cap R^{-1}$ também é transitiva pois $(a,b),(b,c),(a,c), (c,b),(b,a),(c,a) \in R \cap R^{-1}$;

- $R$ e $R^{-1}$ são relações reflexivas, então $(a,a) \in R$, $(a,a) \in R^{-1}$ e portanto $(a,a) \in R \cap R^{-1}$;

- Finalmente, se $(a,b)$ e $(b,a)$ está em $R \cap R^{-1}$, tal qual demonstrado anteriormente, então $R \cap R^{-1}$ é também simétrica e constitui uma relação de equivalência.

### Exercício 14

A relação $a \equiv b(\text{mod }n)$ denota existência da igualdade $a = kn + b$ para algum $k \in \Z^*$. Podemos notar que esta trata-se de uma relação de equivalência pois esta possui as características de

- reflexividade: existe $a \equiv a(\text{mod }n)$, para qualquer $n$ quando $a = 0$ e para $a$ quando $n > a$;

- simetria: $a \equiv b(\text{mod }n)$ se, e somente se, $b \equiv a(\text{mod }n)$.

$$
a = kn + b \iff b = a\ \underbrace{- k}_{k_2}n = k_2n + a
$$

- transitividade: se $a \equiv b(\text{mod }n)$ e $b \equiv c(\text{mod }n)$, então $a \equiv c(\text{mod }n)$.

$\begin{cases} a = kn + b \\ b = k_2n + c \end{cases} \\ \therefore
a = \underbrace{kn + k_2n}_{k_3n} + c = k_3n + c$

### Exercício 15

Sejam $A, B, C$ matrizes de dimensão $n \times n$ e $P$ uma matriz inversível também de dimensão $n \times n$ tal que duas matrizes similares entre si, denotadas por $A \sim B$, estão relacionadas por $PAP^{-1} = B$. Esta relação de similitude trata-se de uma relação de equivalência pois:

- Esta é reflexiva: $A \sim A$

**Prova:** Seja $P$ a matriz identidade $I_n$, $(I_n)^{-1}AI_n = A$. $\blacksquare$

- Esta é simétrica: $A \sim B$ se e apenas se $B \sim A$

**Prova:** se assumirmos que $A \sim B$, teremos

$P^{-1}AP = B\\ \cancel{P(P^{-1}}AP) = P(B) \\ (A\cancel{P)P^{-1}} = PBP^{-1} \\ PBP^{-1} = A$

Seja $Q$ uma matriz tal que $Q = P^{-1}$, logo $Q^{-1}BQ = A \implies B \sim A$

Assim, $A \sim B \iff B\sim A\ \blacksquare$.

- Esta é transitiva: se $A \sim B$ e $B \sim C$ então $A \sim C$

**Prova:** Por hipótese temos

$\begin{cases} B = P^{-1}AP \\ C = Q^{-1}BQ \end{cases} \\ \therefore C = Q^{-1}(P^{-1}AP)Q = (PQ)^{-1}A(PQ)$

Seja $W$ uma matriz tal que $W = PQ$, logo $C = W^{-1}A W \implies C \sim A\ \blacksquare$

[^1]: nUSP: 12543033; Turma 04