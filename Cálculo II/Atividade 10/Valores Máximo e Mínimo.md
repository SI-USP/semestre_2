# Valores Máximo e Mínimo

Uma função de duas variáveis tem um **máximo local** em $(a, b)$ se $f (x, y) \le f (a, b)$ quando $(x, y)$ está próximo de $(a, b)$. Neste caso o número
$f (a, b)$ é denominado o **valor máximo local**. Enquanto, se $f (x, y) \ge f(a, b)$ quando $(x, y)$ está próximo $(a, b)$, $f$ tem um mínimo local em $(a, b)$ e $f (a, b)$ é denominado o **valor mínimo local**. Se estas inequações valem para todos os pontos $(x,y)$ no domínio de $f$, segue que este possui um máximo e mínimo **absolutos**.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-24-18-50-14-image.png" title="" alt="" data-align="center">

Um ponto $(a, b)$ é chamado **ponto crítico** (ou ponto estacionário) de $f$ se $f_x(a, b) = 0$ e $f_y(a, b) = 0$, ou se uma das derivadas parciais não existir. O Teorema dispõe que se $f$ tem um máximo ou mínimo local em $(a, b)$, então $(a, b)$ é um ponto crítico de $f$. No entanto, como no cálculo variável único, nem todos os pontos críticos originam máximos ou mínimos. Em um ponto crítico, a função pode ter um máximo local ou um mínimo local, ou ainda nenhum dos dois.

**Exemplo:** Seja $f(x,y) = x^2 + y^2 - 2x - 6y + 14$. Então

$$
\begin{matrix} f_x(x,y) = 2x - 2 & & f_y(x,y) = 2y - 6 \end{matrix}
$$

Essas derivadas parciais são nulas quando $x = 1$ e $y = 3$, portanto, o único ponto crítico é $(1,3)$. Já que $(x - 1)^2 \ge 0$ e $(y - 3)^2 \ge 0$, temos $f(x, y) = 4$ para todos os valores de $x$ e $y$. Logo, $f(1, 3) = 4$ é um mínimo local e, de fato, é o mínimo absoluto de $f$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-24-21-33-12-image.png" title="" alt="" data-align="center">

## Teste da segunda derivada

Suponha que as segundas derivadas parciais de $f$ sejam contínuas em uma bola aberta com centro em $(a, b)$, e suponha que $f_x(a, b) = 0$ e $f_y(a, b) = 0$ — ou seja, $(a, b)$ é um ponto crítico de $f$. Seja

$$
D(a, b) = f_{xx}(a, b) f_{yy}(a, b) - [f_{xy}(a, b)]^2
$$

- Se $D > 0$ **e** $f_{xx}(a, b) > 0$, então $f(a,b)$ é um **mínimo local**.

- Se $D > 0$ **mas** $f_{xx}(a,b) < 0$, então $f (a, b)$ é um **máximo local**.

- Se $D < 0$, então $f(a,b)$ **não é mínimo local nem máximo local** (ponto de sela).

- Entretanto, Se $D = 0$, não há nenhuma informação: $f$ pode ter um máximo local ou mínimo local em $(a,b)$, ou $(a, b)$ pode ser um ponto de sela.

## Valores máximo e mínimo absolutos

### Teorema do Valor Extremo para as Funções de Duas Variáveis

Se $f$ é contínua em um conjunto fechado[^1] e limitado[^2] $D$ em $\R^2$, então $f$ assume um valor máximo absoluto $f(x_1,y_1)$ e um valor mínimo absoluto $f(x_2,y_2)$ em alguns pontos $(x_1, y_1)$ e $(x_2,y_2)$ de $D$.

Para determinar os valores máximo e mínimo absolutos de uma função contínua
f em um conjunto fechado e limitado $D$:

1. Determine os valores de f nos pontos críticos de $f$ em $D$.

2. Determine os valores extremos de $f$ na fronteira de $D$.

3. O maior dos valores dos passos 1 e 2 é o **valor máximo absoluto**; o menor desses valores é o valor mínimo absoluto.

[^1]:
    Um conjunto fechado é aquele que contém *todos* os seus pontos da fronteira.
    
    <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-25-11-17-12-image.png" title="" alt="" data-align="center">

[^2]: Um **conjunto limitado** é aquele finito em extensão.