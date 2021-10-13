# Transformações Lineares

## Definição de *aplicação*

Dados dois conjuntos $U$ e $V$, ambos não vazios, uma *aplicação* de $U$ em $V$ é uma "lei" pela qual a cada elemento de $U$ está associado um único elemento de $V$. Se $F$ indica essa lei e *u* indica um elemento genérico de $U$ então o elemento associado a $u$ é representado por $F(u)$ (lê-se "F de u") e se denomina *imagem* de $u$ por $F$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/2021-10-04-13-09-29-image.png" title="" alt="" data-align="center">

Também, denomina-se $U$ o *domínio* da função $F$ e $V$ o *contra-domínio* desta. Para indicar que $F$ é uma aplicação de $U$ em $V$ costuma-se escrever

$$
F:U \to V
$$

ou ainda, indicando por $u$ um elemento genérico de $U$

$$
u \mapsto F(u)
$$

### Aplicação injetora

Aquela que para cada valor de $u$ corresponde um único valor de $F(u)$.

$$
\forall u_1, u_2 \in U, F(u_1) - F(u_2) \iff u_1 = u_2
$$

### Aplicação sobrejetora

A aplicação $F:U \to V$ que para todo $v \in V$ existe $u \in U$ tal que $F(u) = v$.

### Aplicação bijetora

A aplicação que é tanto injetora quanto sobrejetora.

### Algumas definições

1. Considerando duas aplicações $F$ e $G$, se $F(u) = G(u), \forall u \in U$ então $F:U \to V$ é igual à $G: U \to V$.

2. Dado o subconjunto $W \subset U$ denomina-se a *imagem* de $W$ por $F$ $F(W) = \{F(u): u \in U\}$.

## Transformações lineares

Sejam $U$ e $V$ espaços vetoriais sobre $\R$. Uma aplicação $F:U \to V$ é chamada *transformação linear* de $U$ em $V$ se, e somente se,

1. $F(u_1 + u_2) = F(u_1) + F(u_2), \forall u_1, u_2 \in U$ e

2. $F(\alpha u) = \alpha F(u), \forall \alpha \in \R \text{ e } \forall u \in U$.

### Propriedades

Sejam $U$ e $V$ espaços vetoriais sobre $\R$. Para uma aplicação $F:U \to V$ valem as seguintes propriedades:

**P1.** $F(e) = e$ ($F$ transforma o vetor nulo de $U$ no vetor nulo de $V$).

$\begin{cases}
F(e) + e = F(e) \\
F(e) = F(e + e) = F(e) + F(e)
\end{cases} \\
\therefore F(e) + e = F(e) + F(e) \implies F(e) = e\ \blacksquare$

**P2.** $F(-u) = -F(u), \forall u \in U$

**P3.** $F(u_1 - u_2) = F(u_1) - F(u_2), \forall u_1, u_2 \in U$

**P4.** Se $W$ é um subespaço de $U$, então a imagem de $W$ por $F$ é um subespaço de $V$.[^1]

**P5.** Sendo $F: U \to V$ linear, então

$$
\displaystyle F \left(\sum^n_{i = 1} a_iu_i\right) = \sum^n_{i = 1} a_i F(u_i)
$$

### Algumas definições

1. No caso em que $U = V$, uma transformação linear é chamada também de *operador linear* ou *idêntico*.

2. Nos casos em que $F: U \to V$ e $F(u) = e$, denomina-se a *transformação linear nula* de $U$ para $V$.

3. Seja $D: P_n(\R) \to P_n(\R)$ definida por $D(f(t)) = f'(t)$ para todo polinômio $f(t)$ de $P_n (\R)$ (onde $f'(t)$ é a derivada de $f(t)$).

Sabe-se pela disciplina de Cálculo que a derivada da soma de dois polinômios é igual a soma das derivadas e a derivada do produto de um polinômio por um número é igual ao produto deste número pela derivada do polinômio. Então a função de derivação é mais um exemplo de transformação linear.

[^1]: Isso é verificável aplicando as propriedades do subespaço anteriormente expostas para $F(W)$.