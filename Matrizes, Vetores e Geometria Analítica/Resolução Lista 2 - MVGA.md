# Resolução da [Lista 2](https://edisciplinas.usp.br/mod/resource/view.php?id=3889802) da disciplina "Matrizes, Vetores e Geometria Analítica"

# Exercício 1

Seja $\{u, v, w\}$ um conjunto L.I. (Linearmente Independente) de um espaço vetorial $V$. Prove que o conjunto $\{u + v − 3w, u + 3v − w, v + w\}$ é L.D. (Linearmente Dependente).

## Resolução

Dizemos que um conjunto vetorial $L \subset V$ é L.I. se, e somente se, este é nulo $\left(L = \{\empty\}\right)$ ou, se $L = {u_1, \dots, u_n}$, uma igualdade do tipo

$$
a_1u_1 + \dots + a_nu_n = e
$$

onde $a \in \R$, for possível **somente** quando $a_1 = \dots = a_n = 0$. Isto pois nenhum dos seus elementos é combinações linear de outro. Doutra forma, o conjunto em questão é L.D.

Avaliemos o caso proposto. Por hipótese este não é nulo, então para $L = 0$:

$$
\{u + v - 3w, u + 3v - w, v + w\} = \{0,0,0\}
\implies \begin{cases}
u + v - 3w = 0 \\ u + 3v - w = 0 \\ v + w = 0 
\end{cases}
$$

A resolução do sistema anteriormente descrito tem que $u = -4v = 4w$. Logo, $u + v -3w = e$ é uma possível solução do sistema onde $\exists\ a \not = 0$. O sistema em questão é, portanto, L. D. $\blacksquare$

## Exercícios 2 e 3

Suponha que $\{v_1, \dots, v_n\}$ é um conjunto L.I. de um espaço vetorial. Mostrar que $\{a_1v_1, \dots , a_nv_n\}$ também é L.I., desde que os $a_i$'s sejam todos não nulos. O que acontece se um dos $a_i$'s for zero? Justifique.

### Resolução

Sem perda de sentido, podemos renomear os vetores $\{a_1v_1, \dots , a_nv_n\}$ como $B = \{u_1, \dots, u_n\}$, onde $u_i$ é o vetor resultante produto do vetor $v_i$ com o escalar $a_i$, para $1 \le i \le n$. Para $B$ ser L.I., conforme a definição de conjunto L.I., faz-se necessário que $b_1u_1 + \dots + b_nu_n = e$, onde $b_1 = \dots = b_n = 0$. Ora, a única maneira de se garantir que todos os $b$'s são nulos em uma sequência $b_1a_1u_1 + \dots + b_na_nu_n = 0$ é se todo $a \not = 0$ pois doutra forma um $b$ pareado com $0$ poderia assumir qualquer valor. $\blacksquare$

## Exercício 4

Determine quais dos seguintes conjuntos são bases de $\R^3$:

- [x] $\{(1, 1, 1),(1, 0, 1),(1, 1, 0)\}$

- [ ] $\{(1, 1, 1),(1, 0, 1),(1, 2, 1)\}$

- [ ] $\{(3, 0, 0),(1, 1, 0),(2, 2, 2),(1, 3, 5)\}$

- [ ] $\{(1, 1, 1),(2, 2, 0)\}$

### Resolução

Seja $V$ um espaço vetorial finitamente gerado. Uma base de $V$ é o subconjunto finito $B \subset V$ para o qual as seguintes condições se verificam:

1. $[B] = V$;

2. $B$ é L.I.

Observa-se que os vetores anteriormente descritos possuem a dimensão adequada para satisfazer a primeira condição, mas a maioria não satisfaz a segunda. Seja porque contêm vetores múltiplos (2º caso), um número de vetores superior à dimensão do espaço vetorial (3º caso), ou cujo produto escalar (o valor de $a_i \in \{a_1, \dots, a_n\}$ ) para $\{a_1u_1, \dots, a_nu_n\} = 0$ está indeterminado (4º caso). $\blacksquare$

## Exercício 5

Considere $\{u_1, u_2, u_3\}$ uma base de um espaço vetorial $V$ . Prove que o conjunto $\{v_1 , v_2 , v_3 \}$, onde $v_i = u_1 + u_i$ , também é uma base de V.

### Resolução

Uma base vetorial $B$ é um subconjunto tal que os vetores nele contidos **não são**

- múltiplos entre si;

- nulos.

tal que $[B] = e$ se, e somente se, $[B] = 0u_1 + 0u_2 + 0u_3$. Assim sendo, para quaisquer $u_i$, $u_j$, e $u_w$ diferentes de zero onde $u_i \nmid u_j$ e $u_w \nmid u_j$ segue que $u_i + u_w \nmid u_j$ e mesmo $u_i + u_j \nmid u_j$. Assim, cerificamos que se $\{u_1, u_2, u_3\}$ é um subespaço vetorial L.I., $\{v_1 , v_2 , v_3\}$ também o é.

Mas seria esse segundo subconjunto também uma base? Conforme o **Teorema da invariância**:

> Seja $V$ um espaço vetorial finitamente gerado. Então duas bases quaisquer de $V$ têm **o mesmo número de vetores**.

Portanto, vemos que este é o caso ao atestar que esta contém o mesmo número de vetores que a primeira, que é base. $\blacksquare$

## Exercício 6

Mostre que se $B = \{v_1 , \dots , v_n\}$ é uma base de um espaço vetorial $V$ , a
equação:

$$
c_1v_1 + \dots + c_kv_k = c_{k + 1}v_{k + 1} + \dots + c_n v_n
$$

só pode ser verdadeira quando todos os $c_i$'s = 0.

### Resolução

Por tratar-se de uma base, tem-se que:

$0(v_1 + \dots + v_k + v_{k + 1} + \dots + v_n ) = e \implies \\ 0(v_1 + \dots + v_k) = -0(v_{k + 1} + \dots + v_n) \implies \\ 0(v_1 + \dots + v_k) = 0(v_{k + 1} + \dots + v_n)$

Substituindo 0 por $c$, temos que a relação se mantém verdadeira. Aliás, isso só é possível se $c = 0$, pois este é o único número de mesmo valor sendo positivo ou negativo. $\blacksquare$

## Exercício 7

Mostre que, considerando uma base $B = \{v_1 , \dots , v_n\}$ de um espaço $V$, cada combinação linear é única, isto é, cada vetor $u \in V$ pode ser escrito de maneira única como combinação linear dos vetores de $B$.

### Resolução

Vamos admitir que uma dada combinação linear $u$ admite duas representações distintas:

$$
u = \{a_1v_1, \dots, a_nv_n\} = \{b_1v_1, \dots, b_nv_n\}
$$

Disso implica que:

$$
a_iv_i = b_iv_i \implies \underbrace{\cancel{a_iv_i + (-a_i)v_i}}_{e} = b_iv_i + (-a_i)v_i \implies (b_i - a_i)v_i = e
$$

Por tratar-se de uma base, tem-se que $\prod^n_{i = 1} v_i \not = 0$. Logo:

$$
(b_i - a_i)v_i = e \implies (b_i - a_i)v_i = 0v_i \implies b_i - a_i = 0 \implies b_i = a_i\ \blacksquare
$$