# Capítulo 5: resolução dos exercícios

> Do livro-texto "Estatística básica", 5ª edição por Bussab e Morettin.

## Seção 1

**1.** $\Omega = \{(B,C), (B,R), V\}$

Onde "C" é cara e "R" coroa.

**2.** Não é possível enumerar a variedade de resultados deste experimento pois, embora altamente improvável, ainda é possível que o resultado 5 jamais seja observado entre os lançamentos realizados. Assim, estendendo a sequência de lançamentos indefinidamente.

**3.** 

![](/home/user/Documents/Drives/USP/Introdução%20a%20Ciência%20da%20Computação/Imagens/31487e059dea319d1afcb8eb7d9cd96810708ba1.png)

Pela análise do fluxograma acima, temos que os resultados possíveis para as partidas deste torneio são:

$$
\Omega = \left\{\begin{matrix}(A,A), & (A,C,C), & (A,C,B,B),
& (A,C,B,A),\\ (B,B), & (B,C,C), & (B,C,A,A), & (B,C,A,B)\end{matrix}\right\}
$$

**4.** São duas formas de se representar este espaço amostral:

$$
\Omega = \{(C,C), (C,R), (R,R), (R,C)\}
$$

e enquanto produto cartesiano:

$$
\Omega = \{C,R\} \times \{C,R\}
$$

**5.**

$$
\Omega = \left\{\begin{matrix} (1, C), & (1,R), & (2, C), &
(2,R), & (3, C), & (3,R),\\ (4, C), & (4,R), & (5, C), & (5,R),
& (6, C), & (6,R)\end{matrix}\right\}
$$

Ou, simplesmente,

$$
\Omega = \{1, 2, 3 ,4, 5, 6\} \times \{C,R\}
$$

**6.**

**a)** $\Omega = \{1, 2, 3 ,4, 5, 6\} \times \{1, 2, 3 ,4, 5, 6\}$

**b)** $\Omega = \{(B, D) \in \Z^2, t \in \R  : 0 < t < 1\ \text{hora}\}$, onde $B$ é o número de peças não defeituosas, $D$ o número de peças defeituosas, e $t$ o tempo. 

**c)** $\Omega = \{M, F\} \times \{M, F\} \times \{M, F\}$, onde $M$ indica uma criança do sexo masculino e $F$ uma criança do sexo feminino.

**d)** $\Omega = \{(x_1, \dots, x_{250}) : x_i = P\ \underline \lor \ x_i = NP\}$, onde:

- $x_i$ é uma dada observação;

- $P$ indica que o entrevistado possui máquina de secar roupa e $NP$ indica que este não possui.

- e $\underline \lor$ é o operador XOR (ou senão).

**e)** $\Omega = \{t: t \in \R^+ \}$

**f)** Não saberia escrever isso enquanto notação matemática.

**g)** Também não.

**h)** $\Omega = \{6a \in \Z : 0 \le a < 60\}$

**i)** $\Omega = \{a \in \R : 0 \le a < 360\}$

**j)** $\Omega = \{A, B, C, D, E\} \times \{A, B, C, D, E\}$

**l)** $\Omega = \left\{\begin{matrix} A \times \{B, C, D, E\}, & B \times \{A, C, D, E\}, & C \times \{A, B, D, E\}, \\ D \times \{A, B, C, E\}, & E \times \{A, B, C, D\} \end{matrix}\right\}$

**m)** Não sei se isso se assemelharia ao caso l ou o j.

**n)** $\Omega = \{S, C\} \times \{A, B, C, D\}$

## Seção 2

**7.**

$\Omega = \{(C,C), (C,R), (R, R), (R, C)\}$

**a)** $\{(C,C), (C,R), (R,C)\} \therefore P = \frac34$

**b)** $\{(C,C)\} \therefore P = \frac 14$

**c)** $\{(C,R), (R, R), (R, C)\} \therefore P = \frac34$

**8.**

**a)** $A \cup \overline B$

**b)** $A \Delta B$

**c)** $\overline{(A \cup B)}$

**9.**

**a)** $\Omega = (A,A) \cup (A,C,C) \cup (A,C,B,B) \cup (A,C,B,A) \\ \cup\ (B,B) \cup (B,C,C) \cup (B,C,A,A) \cup (B,C,A,B)\\ \equiv \dfrac1{2^2} + \dfrac1{2^3} + \dfrac1{2^4} + \dfrac1{2^4} + \dfrac1{2^2} + \dfrac1{2^3} + \dfrac1{2^4} + \dfrac1{2^4}\\\ \\ = 2 \left(\dfrac 1{2^2} + \dfrac 1{2^3} + \dfrac {\cancel 2}{2^{\cancel 4\ 3}} \right) = 2 \left(\dfrac 1{2^2} + \dfrac {\cancel 2}{2^{\cancel 3\ 2}} \right) = 2 \cdot \dfrac{\cancel 2}{2^{\cancel 2}} = 1 \blacksquare$

**b)** As propriedades de que cada jogador vença são equivalentes:

$(A,A) \cup (A,C, B, A) \equiv \dfrac 1{2^2} + \dfrac 1{2^4} = \dfrac 1{2^2} \left(1 + \dfrac 14\right) = \dfrac 5{16}$

Substituindo A por B e C por A, temos o mesmo resultado em termos de probabilidade.

**c)** Nenhuma. Ao final de quatro jogos algum dos três jogadores necessita ter vencido duas vezes (Princípio do Pombal).

**10.**

**a)** Fórmula da soma dos termos de uma sequência geométrica infinita:

$$
S = \dfrac{a_1}{1 - q}
$$

Onde:

- $a_1$ é o termo inicial;

- $q$ é a razão da progressão geométrica.

Assim sendo,

$$
S = \dfrac{\frac 56}{1 - \frac 16} = \dfrac 56 \times
\dfrac 65 = 1 \blacksquare
$$

**b)** Esta probabilidade é equivalente àquela de tirar dois resultados distintos de 5 em sequência para então tirar o resultado 5, ou seja,

$$
\dfrac 56 \cdot \dfrac 56 \cdot \dfrac 16 = \dfrac{25}{216}\ \blacksquare
$$

**11.** Um número só será positivo como resultado de uma multiplicação se ambos os termos forem positivos ou, senão, negativos. Dada a variedade de números positivos e negativos descrita, tem-se que a probabilidade disto ocorrer é:

$PP \cup NN \equiv \dfrac 6{14} \cdot \dfrac 5{13} + \dfrac 8{14} \cdot \dfrac 7{13} = \dfrac 1{14 \cdot 13} (30 + 56) = \dfrac {86}{182} = \dfrac{43}{91}\ \blacksquare$

**12.**

Sejam $A = \{(3,6), (6,3), (4,5), (5,4)\}$ e

$$
B = \left\{\begin{matrix}
(4,1), & (4,2), & (4,3), & (4,4), & (4,5), & (4,6), \\
(5,1), & (5,2), & (5,3), & (5,4), & (5,5), & (5,6), \\
(6,1), & (6,2), & (6,3), & (6,4), & (6,5), & (6,6)
\end{matrix}\right\}
$$

**a)** $A \cup B = \{B, (3,6) \}$

**b)** $A \cap B = \{(6,3), (4,5), (5,4)\}$

**c)** $A^c = \left\{\begin{matrix}
(1,1), & (1,2), & (1,3), & (1,4), & (1,5), & (1,6), \\
(2,1), & (2,2), & (2,3), & (2,4), & (2,5), & (2,6), \\
(3,1), & (3,2), & (3,3), & (3,4), & (3,5), \\
(4,1), & (4,2), & (4,3), & (4,4), & (4,6), \\
(5,1), & (5,2), & (5,3), & (5,5), & (5,6), \\
(6,1), & (6,2), & (6,4), & (6,5), & (6,6)
\end{matrix}\right\}$

**13.** Quanto às probabilidades dos eventos do exercício 7, estas eu já acrescentei à resolução deste. Para o exercício 12, tem-se:

$P(A) = \frac 18; P(B) = \frac 12; P(A \cup B) = \frac{19}{36}; P (A \cap B) = \frac 1{12}; P(A^c) = \frac 89$

**14.**

**a)** O dado em questão não encontra-se viciado.

**b)** Os moradores não apresentam discrepâncias socioeconômicas sufiecientes para polarizar suas opiniões.

**c)** Fatores externos não incidem sobra a valorização das ações em questão no período considerado.

## Seção 3

**15.**

**a)**

$\Omega = \{(P,P), (P,V), (V,P), (V,V)\}$

$P(P,P) = \dfrac 38 \cdot \dfrac 27 = \dfrac 3{28}$

$P(P,V) = \dfrac 38 \cdot \dfrac 57 = \dfrac{15}{56} = P(V, P)$

$P(V,V) = \dfrac 58 \cdot \dfrac 47 = \dfrac 5{14}$

**b)**

$P(P,P) = \left(\dfrac 3 8 \right)^2 = \dfrac 9{64}$

$P(P,V) = \dfrac{15}{64} = P(V,P)$

$P(V,V) = \left(\dfrac 58\right)^2 = \dfrac{25}{64}$

**16.**

**a)** $P(P,P) = \dfrac 38 \cdot \dfrac 27 = \dfrac 3{28}$

**b)** $P(P,P) + P(V, P) = \dfrac 3{28} + \dfrac{15}{56} = \dfrac{21}{56}$

**c)** $P(V,P) + P(V,V) = \dfrac 3{28} + \dfrac 5{14} = \dfrac{13}{28}$

**17.**

$P(A,\neg B) + P(\neg A, B) + P(A,B) = \dfrac 23 \cdot \dfrac 14 + \dfrac 34 \cdot \dfrac 13 + \dfrac 23 \cdot \dfrac 34 = \dfrac{11}{12}\ \blacksquare$

**18.** $P(5) = \dfrac 59$

**19.**

**a)**$(1 - p) (1 - q)$

**b)** $pq + p(1 - q) + q(1 - p)$ 

**20.** $P(S) = p_1[p_2p_3 + p_2(1 - p_3) + p_3(1 - p_2)]$, onde $P(S)$ é o grau de confiabilidade do sistema.

**21.** 