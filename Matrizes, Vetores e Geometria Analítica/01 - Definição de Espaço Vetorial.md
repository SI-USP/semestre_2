# Definição de *Espaço Vetorial*

Todo conjunto $V \not = \empty$ definido sobre um campo qualquer $\mathbb D$[^1]  (por exemplo, $\R$ ou $\mathbb C$) em que existe:

1. adição $(u, v) \in V \mapsto u + v \in V$

2. e multiplicação $(a, u), a \in \R, u \in V \mapsto au \in V$

com determinados axiomas (8 no total).

## I. Propriedades da adição

Para $\forall u, v, w \in V$:

1. Comutação

$$
u + v = v + u
$$

2. Associação

$$
u + (v + w) = (u + v) + w
$$

3. Existe um elemento neutro, aqui indicado por $e$, que não altera o resultado de uma adição ao ser acrescentado nesta

$$
\exist\ e \in V \mid u + e = u
$$

4. Para  todo elemento $u$ existe um *oposto* $(-u)$ tal que:

$$
\exist\ (-u) \in V \mid u + (-u) = e
$$

## II. Propriedades da multiplicação

Para $\forall a, b \in \R$ e $\forall u, v \in V$:

1. $a(bu) = (ab)u$

2. $(a + b)u = au + bu$

3. $a(u + v) = au + av$

4. $1u = u$

## O espaço vetorial $\R^n$

As propriedades anteriormente descritas se aplicam a qualquer n-upla de números ordenados:

$
(x_1, y_1) + (x_2, y_2) = (x_1 + x_2, y_1 + y_2), \forall x, y \in \R^2 \\
(x_1, y_1, z_1) + (x_2, y_2, z_2) = (x_1 + x_2, y_1 + y_2, z_1 + z_2), \forall x, y, z \in \R^3 \\
\vdots \\
(a_1, \dots a_n) + (b_1, \dots, b_n) = (a_1 + b_1, \dots a_n + b_n), \forall a_1, \dots, a_n, b_1, \dots, b_n \in \R^n
$

[^1]: Daqui por diante assumiremos $\R$, mas tais propriedades aplicariam-se a qualquer outro campo.