# Importantes tabelas de Cálculo

## Tabela das derivadas

| Primitiva                   | Derivada                                                   |
| --------------------------- | ---------------------------------------------------------- |
| $f(x) = c$                  | $f'(x) = 0$                                                |
| $f(x) = x^n$                | $f'(x) = nx^{n - 1}$                                       |
| $f(x) = c x^n$              | $f'(x) = cnx^{n - 1}$                                      |
| $f(x) = g(x) h(x)$          | $f'(x) = g(x) h'(x) + g'(x) h(x)$                          |
| $f(x) = \dfrac{g(x)}{h(x)}$ | $f'(x) = \dfrac{h(x)g'(x) + g(x) h'(x)}{\big(h(x)\big)^2}$ |
| $f(x) = a^x$                | $f'(x) = a^x\ln a $                                        |
| $f(x) = log_ax$             | $f'(x) = \dfrac1{x\ln a}$                                  |

### Derivadas trigonométricas

| Primitiva                 | Derivada                             |
| ------------------------- | ------------------------------------ |
| $f(x) = \sin x$           | $f'(x) = \cos x$                     |
| $f(x) = \cos x$           | $f'(x) = - \sin x$                   |
| $f(x) = \tan x$           | $f'(x) = \sec^2x$                    |
| $f(x) = \cot x$           | $f'(x) = -\csc^2x$                   |
| $f(x) = \sec x$           | $f'(x) = \sec x \tan x$              |
| $f(x) = \csc x$           | $f'(x) = - \csc x \cot x$            |
| $f(x) = \arcsin x$        | $f'(x) = \dfrac 1{\sqrt{1 - x^2}}$   |
| $f(x) = \arccos x$        | $f'(x) = - \dfrac 1{\sqrt{1 - x^2}}$ |
| $f(x) = \arctan x$        | $f'(x) = \dfrac 1{1 + x^2}$          |
| $f(x) = \text{arccot } x$ | $f'(x) = - \dfrac 1{1 + x^2}$        |

### Regra da cadeia

Se $y$ é uma função derivável de $u$ e $u$ é uma função derivável de $x$, então $y$ é uma função derivável de $x$ e

$$
\dfrac{dy}{dx} = \dfrac{dy}{du} \cdot \dfrac{du}{dx}
$$

## Tabela das integrais

| Derivada                   | Primitiva                      |
| -------------------------- | ------------------------------ |
| $cf'(x)$                   | $cf(x) + C$                    |
| $f'(x) + g'(x)$            | $f(x) + g(x) + C$              |
| $x^n, n \not = -1$         | $\dfrac{x^{n + 1}}{n + 1} + C$ |
| $\dfrac 1x$                | $\ln \|x\| + C$                |
| $e^x$                      | $e^x + C$                      |
| $a^x$                      | $\dfrac{a^x}{\ln \|x\|}$       |
| $\cos x$                   | $\sin x + C$                   |
| $\sin x$                   | $- \cos x + C$                 |
| $\sec^2x$                  | $\tan x + C$                   |
| $\csc^2 x$                 | $- \cot x + C$                 |
| $\cosh x$                  | $\sinh x + C$                  |
| $\csc x \cot x$            | $- \csc x + C$                 |
| $\sec x \tan x$            | $\sec x + C$                   |
| $\dfrac 1{\sqrt{1 - x^2}}$ | $\sin^{-1} + C$                |
| $\dfrac 1{1 + x^2}$        | $\tan^{-1} + C$                |