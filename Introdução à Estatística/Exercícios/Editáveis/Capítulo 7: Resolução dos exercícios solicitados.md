# Resolução dos exercícios solicitados

> Por Guilherme de Abreu Barreto, nUSP: 12543033

## Questão 7.3

Admitindo ser igualmente possível atingir à qualquer ponto da superfície (distribuição uniforme contínua) do alvo, tido por certo que a superfície do alvo será atingida ($f(x) = 0$ para valores de $x$ maiores que 10), a probabilidade de se atingir uma determinada região é proporcional à fração da área total que esta ocupa. Tratando-se de círculos concêntricos, têm-se:

$$
P(0 \lt x \le 10) = \dfrac{\pi x^2}{100\pi} = \dfrac{x^2}{100}
$$

Ou seja,  a chance de se acertar um centro de 1cm de raio é

$$
P = \dfrac{1^2}{100} = \dfrac 1{100}\ \blacksquare
$$

## Questão 7.8

**a.** Relembrando que 

$$
P (A | B) = \dfrac{P (A \cap B)}{P(B)}
$$

e 

$$
P (a \lt x \le b) = \int^b_a f(x)\ dx
$$

tem-se:

$$
P\left (X > b \mid X < \frac b 2 \right ) =
\dfrac{P \left( b < X < \frac b2 \right)}{P (X < \frac b 2)}
$$

Sendo,

$$
P \left( b < X < \frac b2 \right) =
\int^\frac b2_b 3x^2\ dx =
\cancel 3 \left [ \dfrac{x^3}{\cancel 3}\right]^\frac b2_b =
\dfrac{b^3}8 - b^3
$$

e

$$
P \left(X < \frac b2 \right) =
\int^\frac b2_{-1} 3x^2\ dx =
\cancel 3 \left [ \dfrac{x^3}{\cancel 3}\right]^\frac b2_b =
\dfrac{b^3}8 + 1
$$

Logo,

$$
P \left(X > b \mid X < \frac b 2 \right) =
\dfrac{\frac{b^3}8 - b^3}{\frac{b^3}8 + 1} =
\dfrac{b^3 - 8b^3}{\cancel 8} \cdot \dfrac{\cancel 8}{b^3 + 8} =
- \dfrac{7b^3}{b^3 + 8}\ \blacksquare
$$

**b.**

$$
E(x) = \int^0_{-1} x\ f(x)\ dx = \int^0_{-1} x\ 3x^2\ dx =
3\int^0_{-1} x^3\ dx = 3 \left[\frac{x^4}4\right]^0_{-1} =
- \dfrac 34\ \blacksquare
$$

$\displaystyle V(X) = E(X^2) - [E(X)]^2 = \int^0_{-1}x^2\cdot 3x^2\ dx - \dfrac 9{16} = 3 \left( \dfrac{x^5}5 \Bigg |^0_{-1} - \dfrac 3{16} \right) =\\\ \\ 3 \left( \dfrac 15 - \dfrac 3{16} \right) = \dfrac 3{80} \ \blacksquare$

## Questão 11

$\displaystyle E(X) = \int^\infty_0x2e^{-2x}dx$

Seja $u = -2x$, então $du = -2dx \implies dx = -\frac{du}2$.

$\displaystyle E(X) = \dfrac 12 \int^{-\infty}_0 ue^u\ du = - \dfrac 12 \int^0_{- \infty} ue^u\ du $

Seja $v = u$, então $dv = du$; seja $dw = e^udu$, então $w = e^u$. Logo, pelo Teorema da integração por partes,

$$
\displaystyle E(X) = - \frac 12 \left(ue^u\big |^0_{-\infty}
- \int^0_{-\infty}e^u\ du\right) = - \frac 12 \left(0 +
\lim_{b \to \infty} \frac b{e^b} - 1 + 0\right)
$$

Pelo teorema de L' Hospital, tem-se:

$$
\lim_{b \to \infty} \frac b{e^b} = \lim_{b \to \infty} \frac 1{e^b}
$$

E portanto,

$$
E(X) = - \dfrac 12 (0 - 1) = \dfrac 12\ \square
$$

$\displaystyle V(X) = E(X^2) - [E(X)]^2= \int^\infty_0x^22e^{-2x}dx - \frac 14$

Seja $v = x^2$, então $dv = 2xdx$; e seja $du = e^{-2x}dx$, então $u = \int e^{-2x}dx$. Seja $w = -2x$, então $dw = -2dx \implies dx = - \frac{dw}2$ e $u = -\frac 12 \int e^wdw = -\frac{e^w}2 = -\frac 1{2e^{2x}}$. Então, pelo teorema da integração por partes:

$\displaystyle \int^\infty_0x^22e^{-2x}dx - \frac 14 = 2 \left[ \left(-\dfrac{x^2}{2e^{2x}} \bigg |^\infty_0 \right) - \left(- \int^\infty_0 xe^{-2x}dx\right) \right] - \frac 14 =\\\ \\ 2\int^\infty_0 xe^{-2x}dx -\dfrac{x^2}{e^{2x}} \bigg |^\infty_0 - \dfrac 14$

Sendo $b$ uma variável que tende ao infinito, tem-se:

$$
\lim_{b \to \infty} \dfrac{x^2}{e^{2x}} \bigg |^b_0 =
\lim_{b \to \infty} \left(\dfrac{b^2}{e^{2b}} -
\cancel{\dfrac{0^2}{e^{2 \cdot 0}}}\right) =
\lim_{b \to \infty} \dfrac{x^b}{e^{2b}}
$$

Aplicando-se o teorema de L' Hospital:

$$
\lim_{b \to \infty} \dfrac{b^2}{e^{2b}} =
\lim_{b \to \infty} \dfrac{b^2}{e^{2b}} =
\lim_{b \to \infty} \dfrac{2b}{e^{2b}} =
\dfrac 2{e^{2\infty}} = 0
$$

Continuando:

$$
\displaystyle 2\int^\infty_0 xe^{-2x}dx -\cancel{\dfrac{x^2}{e^{2x}} \bigg |^\infty_0} - \dfrac 14
$$

Seja $v = x$, então $dv = dx$; e seja $du = e^{-2x}dx$, então $u = - \frac 1{2e^{2x}}$. Novamente aplicando o teorema das partes:

$$
2 \left[\left(-\dfrac{x}{e^{2x}} \bigg |^\infty_0\right) -
\left(- \frac 12 \int^\infty_0 e^{-2x}dx\right)\right] - \frac 14
$$

Novamente o teorema de L' Hospital:

$$
\lim_{b \to \infty} \dfrac{b}{e^{2b}} =
\dfrac 1{e^{2\infty}} = 0
$$

Continuando:

$\displaystyle \int^\infty_0 e^{-2x}dx - \frac 14 = \left(-\dfrac{1}{2e^{2x}} \bigg |^\infty_0\right) - \dfrac 14 = \frac 12 - \frac 14 = \dfrac 14\ \blacksquare$