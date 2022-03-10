# Princípio do Pombal

Seja $S$ um conjunto finito de cardinalidade $n$. Sejam $S_1, S_2, \dots, S_k$ partições de $S$ em $k$ subconjuntos. Então, pelo menos um subconjunto $S_i$ de $S$ contém pelo menos $\lceil \frac nk \rceil$ elementos.

**Corolário:** Se um conjunto de n elementos é dividido em $k < n$ subconjuntos, então pelo menos um subconjunto contém mais de um elemento.

**Outro corolário:** Sejam $m, n$ e $k$ números inteiros positivos e não nulos. Se $mn$ objetos são distribuídos em $k$ conjuntos, $k < n$, então pelo menos um conjunto contém $m + 1$ objetos.

**Demonstração:** Procederemos por contradição, suponhamos que *nenhum* subconjunto $S_i$ de $S$, sendo $|S| = n$, tenha $\lceil \frac nk \rceil$ elementos.

Então o número máximo de elementos em qualquer $S_i$ seria $\lceil \frac nk \rceil - 1$.

E o total de elementos em $S$ seria não mais que $k (\lceil \frac nk \rceil - 1) = k \lceil \frac nk \rceil - k$.

Dai tiramos duas possibilidades:

**1.** $n$ é divisível por $k$. Então $\lceil \frac nk \rceil = \frac nk$ é um número inteiro e $k \lceil \frac nk \rceil - k = n - k$. Logo:

$$
\left \lceil \frac nk \right \rceil =
\frac nk  \implies k \left\lceil \frac nk \right\rceil - k = n - k
$$

E assim,

$$
|S| = \sum^k_{i = 1} |S_i| \le n - k < n
$$

Isso contradiz a hipótese de que $|S| = n$.

**2.** $n$ não é divisível por $k$. Então,

$$
|S| = k \left \lceil \frac nk \right \rceil - k < \frac{k (n + k)}k - k = n
$$

Novamente, isso contradiz a hipótese de que $|S| = n$

Logo, por prova de contradição, necessita haver pelo menos $\lceil \frac nk \rceil$ elementos em pelo menos um subconjunto $S_i \subseteq S$.