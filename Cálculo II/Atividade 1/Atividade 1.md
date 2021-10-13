# Atividade 1

## Capítulo 4.9

### Exercício 29

Encontre $f$, onde $f'''(t) = \cos t$.

#### Resolução

Conforme a tabela dos integrais,

$f'''(t) = \cos t \\
f'' (t) = \sin t + C_1 \\
f' (t) = - \cos t + C_1x + C_2 \\
f(t) = - \sin t + \dfrac{C_1x^2}2 + C_2x + C_3
$

### Exercício 67

Um objeto é lançado para cima com velocidade inicial $v_0$ metros por segundo a partir de um ponto $s_0$ metros acima do solo. Mostre que

$$
[v(t)]^2 = v_0^2 - 19,6[s(t) - s_0]
$$

#### Resolução

$a(t) = v'(t) \approx -9,8 \\
v(t) = a(t)t + C_1 = a(t)t + v_0 = s'(t)\implies t = \dfrac{v(t) - v_0}{a(t)} \\
s(t) = \dfrac{a(t)t^2}2 + v_0t + C_2 = \dfrac{a(t)t^2}2 + v_0t + s_0 \\
s(t) - s_0 = t \left[ \dfrac{a(t)t}2 + v_0 \right] \\\ \\
s(t) - s_0 = \left[ \dfrac{v(t) - v_0}{a(t)} \right] \left[ \dfrac{\cancel{a(t)}}2 \cdot \dfrac{v(t) - v_0}{\cancel{a(t)}} + v_0 \right] \\\ \\
s(t) - s_0 = \dfrac{[v(t) - v_0][v(t) - \cancel{v_0} + \cancel 2v_0]}{2a(t)} \\\ \\
2a(t)[s(t) - s_0] = [v(t)]^2 - v_0^2 \\\ \\
\bm{[v(t)]^2 = v_0^2 -19,6 [s(t) - s_0]}
$

## Capítulo 5.2

### Exercício 37

Calcule a integral de $\int_{-3}^0 (1 + \sqrt{9 - x^2})\ dx$, interpretando-a em termos das áreas.

#### Resolução

$\int_{-3}^0 (1 + \sqrt{9 - x^2})\ dx =\\ \int_{-3}^0 1 \ dx + \int_{-3}^0 \sqrt{9 - x^2}\ dx =\\  1 \cdot (0 - (-3)) + \int_{-3}^0 \sqrt{9 - x^2}\ dx = 3 + \int_{-3}^0 \sqrt{9 - x^2}\ dx$

Considerando $y = \sqrt{9 - x^2}$ temos que o segundo termo da equação anterior refere-se à uma área posicionada no segundo quadrante ($[-3,0]$) e estritamente positiva ($0 \le y \le 3$). Também percebemos que esta possui forma circular pois a equação se assemelha à aquela do círculo ($y^2 + x^2 = r^2$):

$y = \sqrt{9 - x^2} \implies y^2 + x^2 = 9$

Onde $r^2 = 9$. Assim, substituindo $\int_{-3}^0 \sqrt{9 - x^2}\ dx$ pela área de um quadrante de um círculo de raio $3$, temos:

$\int_{-3}^0 (1 + \sqrt{9 - x^2})\ dx = 3 + \dfrac{9\pi}4$

### Exercício 53

Cada uma das regiõves $A$, $B$ e $C$ delimitadas pelo gráfico de $f$ e o eixo $x$ tem área $3$. Encontre o valor de

$$
\int_{-4}^2 [f(x) + 2x +5]\ dx
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Imagens/2021-08-31-19-16-21-image.png" title="" alt="" data-align="center">

#### Resolução

$\int_{-4}^2 [f(x) + 2x +5]\ dx = \int_{-4}^2 f(x)\ dx + \underbrace{\int_{-4}^2 2x \ dx}_{\text{função linear}} + \underbrace{\int_{-4}^2 5\ dx}_{\text{função constante}} =\\\ \\ (-3 + 3 - 3) + \left(\dfrac{2 \cdot 4}2 - \dfrac{4 \cdot 8}2 \right) + 5 (2 - (-4)) = \bm{15}$