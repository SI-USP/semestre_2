# Atividade 8

> Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 14.2

### Exercício 19

Determine o limite, se existir, ou mostre que o limite não existe:

$$
\lim_{(x,y,z) \to (\pi,\theta,1)} e^{y^2}\tan(xz)
$$

#### Resolução

O limite existe pois a função está definida para $x = \pi$, $y = \theta$ e $z = 1$:

$$
\lim_{(x,y,z) \to (\pi,\theta,1)} e^{y^2}\tan(xz)
= e^{\theta^2} \tan (\pi)
= e^{\theta^2} \cdot 0 = 0 = e^{y^2}\tan(xz)
$$

### Exercício 31

Determine o maior conjunto no qual a função é contínua:

$$
F(x, y) = \frac{1 + x^2 + y^2}{1 - x^2 - y^2}
$$

#### Resolução

$$
\frac{1 + x^2 + y^2}{1 - x^2 - y^2} = \frac{1 + x^2 + y^2}{1 - (x^2 + y^2)}
$$

Assim, A função $F(x,y)$ está definida para $\{(x,y) : x^2 + y^2 \not = 1\}$, sendo o domínio da função o maior conjunto contínuo de valores para a mesma.

## Capítulo 14.3

### Exercício 45

Use a definição de derivadas parciais como limites para encontrar $f_x(x, y)$ e $f_y(x, y)$ em

$$
f(x,y) = xy^2 - x^3y
$$

#### Resolução

$\displaystyle f_x(x,y) = \lim_{h \to 0} \frac{(x+h)y^2 - (x + h)^3y - xy^2 + x^3y}h\\ = \lim_{h \to 0} \frac{\cancel{xy^2} + hy^2 - \cancel{x^3y} - 3x^2hy - 3xh^2y - h^3y - \cancel{xy^2 + x^3y}}h \\ = \lim_{h \to 0} \frac{\cancel h (y^2 - 3x^2y - 3xhy - h^2y)}{\cancel h} = y^2 - 3x^2y\ \blacksquare$

$\displaystyle f_y(x,y) = \lim_{h \to 0} \frac{x(y + h)^2 - x^3(y + h) - xy^2 + x^3y}h\\ = \lim_{h \to 0} \frac{\cancel{xy^2} + 2yhx + h^2x - \cancel{x^3y} - x^3h - \cancel{xy^2 + x^3 y}}h \\ = \lim_{h \to 0} \frac{\cancel h (2yx + hx - x^3)}{\cancel h} = - x^2 + 2xy\ \blacksquare$

### Exercício 65

Determine a derivada parcial $f_{xyz}$ para $f(x,y,z) = e^{xyz^2}$.

#### Resolução

$f_x = e^{xyz^2} \cdot yz^2 \implies \\ f_{xy} = e^{xyz^2} \cdot z^2 + e^{xyz^2} \cdot xyz^4 \implies \\ f_{xyz} = (e^{xyz^2} \cdot 2z + e^{xyz^2} \cdot 2xyz \cdot z^2) + (e^{xyz^2} \cdot 4xyz^3 + e^{xyz^2} \cdot 2xyz e^{xyz^2} \cdot xyz^4)\\ = e^{xyz^2}(2z + 6xyz^3 + 2x^2y^2z^5)\ \blacksquare$

[^1]: nUSP 12543033; Turma 04