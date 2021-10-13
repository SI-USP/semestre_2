# Propriedades dos integrais e somatórios

## Definição geral dos integrais

$$
\int_a^b f(x)\ dx = \lim_{n \to \infty}
\underbrace{\sum^n_{i = 1} f(x_i) \Delta x}
_{\text{Soma de Reimann}} = \lim_{n \to \infty} \dfrac{b - a}n \sum^n_{i = 1}
f\left(i \cdot \dfrac{b - a}n \right)
$$

## Propriedades dos integrais

1. $\displaystyle \int_a^b f(x)\ dx = - \int_b^a f(x)\ dx$

2. $\displaystyle \int_a^a f(x)\ dx = 0$

3. $\displaystyle \int_a^b c\ dx = c\ (b - a)$

4. $\displaystyle \int_a^b c f(x)\ dx = c \int_a^b f(x)\ dx$

5. $\displaystyle \int_a^b [f(x) \pm g(x)]\ dx = \int_a^b f(x)\ dx \pm \int_a^b g(x)\ dx$

6. $\displaystyle \int_a^b f(x)\ dx + \int_b^c f(x)\ dx = \int_a^c f(x)\ dx$

7. $\displaystyle \int dx = x$

## Propriedades da somatória

1. $\displaystyle \sum^n_{i = 1} i = \dfrac{n (n + 1)}2$[^1]

2. $\displaystyle \sum^n_{i = 1} i^2 = \dfrac{n (n + 1)(2n + 1)}6$

3. $\displaystyle \sum^n_{i = 1} i^3 = \left[\dfrac{n (n + 1)}2\right]^2$

4. $\displaystyle \sum^n_{i = 1} c = nc$

5. $\displaystyle \sum^n_{i = 1} c\ a_i = \displaystyle c \sum^n_{i = 1} a_i$

6. $\displaystyle \sum^n_{i = 1} (a_i \pm b_i) = \sum^n_{i = 1} a_i \pm \sum^n_{i = 1} b_i$

7. $\displaystyle \sum^n_{i = 1} a^i = \dfrac{a(a^n - 1)}{a - 1}$[^2]

## Regra do ponto médio

Quando a Somatória de Reimann é expressa enquanto

$$
\displaystyle \sum^n_{i = 1} f(\overline x_i) \Delta x
$$

Onde $\overline x_i = \frac 12 (x_{i - 1} + x_i)$.

## Propriedades comparativas da Integral

Considerando $a \le x \le b$:

- Se $f(x) \ge 0$, então $\int^b_a f(x)\ dx \ge 0$.

- Se $f(x) \ge g(x)$, então $\int^b_a f(x)\ dx \ge \int^b_a g(x)\ dx$.

- Se $m \le f(x) \le M$, então $m (b - a) \le \int^b_a f(x)\ dx \le M (b - a)$

[^1]: Fórmula da somatória de uma progressão aritmética

[^2]: Fórmula da somatória de uma progressão geométrica