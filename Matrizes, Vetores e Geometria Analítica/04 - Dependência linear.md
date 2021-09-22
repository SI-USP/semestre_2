# Dependência linear

Seja $V$ um espaço vetorial sobre $\R$.

## Conjunto linearmente independente (L.I.)

Dizemos que um conjunto $L = \{u_1, \dots, u_2\} \subset V$ é *linearmente independente* se e somente se, uma igualdade do tipo

$$
a_1u_1 + \dots + a_nu_n = e
$$

onde $a \in \R$, for possível **somente** quando $a_1 = \dots = a_n = 0$. Outro caso possível é quando o conjunto $L$ em questão é nulo ($L = \{\empty\}$).

## Conjunto linearmente dependente (L.D.)

Quando o conjunto não é nulo e a somatória anteriormente descrita só é possível se $\exists\ a \not = 0$.

## Propriedades da dependência linear

**P1.** Se um conjunto $L \subset V$ contém o vetor nulo, então esse conjunto é L. D.

Demonstração: Seja $S = \{e, u_2, \dots, u_n\}$, então

$$
ae + 0u_2 + \dots + 0u_n = e
$$

para todo $a \not = 0$. Isso é suficiente para concluir que S é L. D.[^1] $\blacksquare$

**P2.** Se $L = {u}$, onde $L \subset V$ e $u \not = e$, então $L$ é L.I.

Demonstração: Se $au = e$, e $u \not = e$, então $a = 0$. $\blacksquare$

**P3.** Se $S = \{u_1, \dots, u_n\} \subset V$ é L.D., então um dos seus vetores é a combinação linear de todos os demais.

Demonstração: por hipótese existem números reais $a_1, \dots, a_n$ onde pelo menos um é igual a zero. Venhamos a estabelecer que $a_1 \not = 0$ então o inverso de $a_1$, ($a_1^{-1}$) existe e:

$a_1u_1 + a_2u_2 + \dots a_nu_n = e \implies
u_1 = - \dfrac{a_2u_2 + \dots + a_nu_n }{a_1} = \\ a_1^{-1}a_2u_2 + \dots +  a_1^{-1}a_nu_n
$ 

O que mostra que $u_1$ equivale à combinação linear de $u_2, \dots, u_n$:

$$
u_1 = [S] = \{a_1^{-1}a_2u_2 + \dots + a_1^{-1}a_nu_n \mid a_1, \dots, a_n \in \R\} \blacksquare
$$

**P4.** Se $S_1$ e $S_2$ são subconjuntos finitos e não vazios de V, se $S_1 \subset S_2$ e $S_1$ é L.D., então $S_2$ também é L.D.

Demonstração: como nem todos os escalares que figuram em $S_1$ são nulos, o que configura L.D., e $S_2$ contém $S_1$, então o conjunto dos escalares em $S_2$ também não é inteiramente nulo. $\blacksquare$

**P5.** Se $S_1$ e $S_2$ são subconjuntos finitos e não vazios de V, se $S_1 \subset S_2$ e $S_2$ é L.I., então $S_2$ também é L.I.

Demonstração: situação complementar à aquele da propriedade anterior. $\blacksquare$

**P6.** Se $S = \{u_1, \dots, u_n\} \subset V$ é L.I, e para um certo $u \in V$ tem-se $S \cup \{u\} = \{u_1, \dots, u_n, u\}$ L.D., então o vetor $u$ é combinação linear dos vetores $u_1, \dots, u_n$,  isto é, $u \in [S]$.

Demonstração: Por hipótese tem-se uma igualdade

$$
a_1u_1 + \dots + a_nu_n + au = e
$$

onde nem todos os escalares que figuram nela são nulos. Afirmamos que um dos escalares não nulos é o $a$. De fato, se $a = 0$, então

$$
a_1u_1 + \dots a_nu_n = e
$$

Como porém o conjunto S é L.I., esta última igualdade só seria possível com $a_1 = \dots = a_n$. Daí, se $a = 0$, então $a = a_1 = \dots = a_n = 0$, o que contradiz a hipótese.

Já que $a \not = 0$, temos que:

$
a_1u_1 + \dots a_nu_n + au = e\\\ \\
\implies u = - \dfrac{a_1u_1 + \dots + a_nu_n}{a}= (a_1a^{-1})u_1 + \dots + (a_na^{-1})u_n
$

**P7.** Se $S = \{u_1, \dots, u_j, \dots, u_n\}$ e $u_j \in [S - {u_j}]$ (isto é, $u_j$ é combinação linear doutros vetores contidos em S), então

$$
[S] = [S - \{u_j\}]
$$

Demonstração: Faremos a prova supondo $j = 1$, o que nada tira em generalidade. É obvio que $[S - \{u_1\}] \subset [S]$, pois $S - {u_1} \subset S$. Como foi dito que $u_j$ é a combinação linear dos demais vetores, aplicando a propriedade **P3**, temos:

$$
u_1 = - \dfrac{a_2u_2 +  \dots + a_nu_n}{a_1} = b_2u_2 + \dots + b_nu_n = [S]
$$

Onde $b_i = -a_1^{-1}a_i$. Continuando,

$$
b_2u_2 + \dots + b_nu_n = [S - \{u_1\}] \therefore [S - \{u_1\}] = [S]
$$