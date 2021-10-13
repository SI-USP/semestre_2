# Integrais impróprias

## Do tipo 1

> Possui assíntota horizontal

Se $\int_a^t f(x)\ dx$ existe para cada número $t \ge a$, então

$$
\int^\infty_a f(x)\ dx = \lim_{t \to \infty} \int^t_a f(x)\ dx
$$

desde que o limite exista (como número). O mesmo caso é verdadeiro se $f$ for definida entre $[-\infty, a]$ (*tende ao infinito pela esquerda*).

## Do tipo 2

> Possui assintota vertical

Se $f$ é contínua em $[a, b)$ e descontínua em $b$, então

$$
\int^b_a f(x)\ dx = \lim_{t \to b^-} \int^t_a f(x)\ dx
$$

O mesmo caso é verdadeiro se $f$ for definida entre $(a, b]$ (*descontínuo pela esquerda*).

## Convergência

Integrais impróprias são chamadas **convergentes** se os limites correspondentes existem ou, senão, **divergentes**.

### Teorema de comparação

Suponha $f$ e $g$, duas funções contínuas com $f(x) \ge g(x) \ge 0$ para $x \ge a$.

- Se $\int^\infty_a f(x)\ dx$ é **convergente**, $\int^\infty_a g(x)\ dx$ também o é;

- Se $\int^\infty_a g(x)\ dx$ é **divergente**, $\int^\infty_a f(x)\ dx$ também o é.
