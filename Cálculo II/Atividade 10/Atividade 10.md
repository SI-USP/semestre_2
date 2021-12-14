# Atividade 10

> Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 14.6

### Exercício 35

Seja $f$ uma função de duas variáveis que tenha derivadas parciais contínuas e considere os pontos

- $A(1, 3)$,

- $B(3, 3)$,

- $C(1, 7)$ e

- $D(6, 15)$.

E as derivadas direcionais de $f$ em $A$ em direção aos vetores

- $D_{\overrightarrow{AB}}f = 3$ ,

- $D_{\overrightarrow{AC}} f = 26$.

Determine a derivada direcional de $f$ em $A$ na direção do vetor $\vec{AD}$.

#### Resolução

Sejam $x$ e $y$ as duas variáveis para qual $f$ está definida.

1. Nota-se que em $\vec{AB}$ ocorre variação apenas em $x$ enquanto em $\vec{AC}$ ocorre variação apenas em $y$. Então,
   
   - $D_{\overrightarrow{AB}}f(1,3) = f_x(1,3)a + \cancel{f_y(1,3)b}\ = 3 \implies f_x(1,3)a = 3$;
   
   - $D_{\overrightarrow{AC}}f(1,3) = \cancel{f_x(1,3)a} + f_y(1,3)b = 26 \implies f_y(1,3)b = 26$;

2. Com isso conseguimos inferir o vetor gradiente $\nabla f(1,3)$:

$$
\nabla f(1,3) = f_x(1,3)a + f_y(1,3)b = \lang f_x(1,3), f_y(1,3) \rang = \lang 3, 26 \rang
$$

3. Podemos agora aferir a derivada direcional $D_{\overrightarrow{AD}}f(1,3)$ a partir da equação $D_\textbf u f(1,3) = \nabla f(1,3) \cdot \textbf u$, onde $\textbf u$ é o vetor unitário com direção $\vec{AD}$ tal que

$\displaystyle \textbf u = \left \lang \frac{x - x_0}{\sqrt{(x - x_0)^2 + (y - y_0)^2}},
\frac{y - y_0}{\sqrt{(x - x_0)^2 + (y - y_0)^2}} \right \rang\\\ \\ = \left \lang \frac{5}{\sqrt{5^2 + 12^2}},
\frac{12}{\sqrt{5^2 + 12^2}} \right\rang = \left\lang \frac{5}{13}, \frac{12}{13} \right\rang$

4. Por fim, temos que

$\displaystyle D_\textbf u f(1,3) = \lang 3,26 \rang \cdot \left\lang \frac{5}{13}, \frac{12}{13} \right\rang = 3 \cdot \frac 5{13} + 26 \cdot \frac{12}{13} = \dfrac{327}{13}\ \blacksquare$

### Exercício 57

Mostre que todo plano que é tangente ao cone $x^2 + y^2 = z^2$ passa pela origem.

#### Resolução

Por hipótese, podemos descrever o cone enquanto uma função $f(x,y,z) = x^2 + y^2 - z^2$. O cone toca a origem quando $z = \sqrt{x^2 + y^2} = 0$, ou seja, $z = 0 \iff x = y = 0$ . Seja $P(x_0, y_0, z_0)$ um ponto qualquer na superfície $S$ do cone. Utilizando a equação geral do plano, podemos escrever a equação do plano tangente à $S$ em $P$ como

$f_x(x_0,y_0,z_0)(x - x_0) + f_y(x_0,y_0,z_0)(y - y_0) + f_z(x_0,y_0,z_0)(z - z_0) = 0 \\\ \\\implies \cancel 2x(x - x_0) + \cancel 2y (y - y_0) - \cancel 2z(z - z_0) = 0 \\\ \\ \implies x^2 + y^2 - z^2 = xx_0 + yy_0 -zz_0$

Já estabelecemos que a expressão $x^2 + y^2 - z^2$ perpassa a origem quando $x = y = z = 0$, então o outro lado da igualdade, $xx_0 + yy_0 -zz_0$, também é uma equação que perpassa a origem e, portanto, a equação do plano no total é representativa de um plano que cruza a origem. $\blacksquare$

## Capítulo 14.7

### Exercício 23

Utilize um gráfico ou curvas de nível para estimar os valores máximos e mínimos locais e pontos de sela da função $f(x,y)  =\sin x + \sin y + \sin(x + y)$, quando $0 \le x \le 2\pi$ e $0 \le y \le 2\pi$. Em seguida, use o cálculo para determinar esses valores de modo preciso.

<div style="page-break-before: always;"></div>

#### Resolução

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-25-13-35-23-image.png" title="" alt="" data-align="center">

> Gráfico da função $f$

Observa-se pelo gráfico que a função, no domínio descrito, possui um ponto máximo, um ponto de sela e um ponto mínimo. Vamos determiná-los em seus valores e coordenadas $(x,y)$. Iniciemos por encontrar suas derivadas parciais:

$f(x,y) =\sin x + \sin y + \sin(x + y) \begin{cases} f_x = \cos x + \cos (x + y) \\ f_y = \cos y + \cos (y + y) \end{cases}$

Num ponto crítico, tem-se que $f_x = f_y = 0$, logo,

$\begin{cases} f_x = 0 \implies \cos x + \cos (x + y) = 0 \implies \cos(x + y) = \cos x \\ f_y = 0 \implies \cos(x + y) = \cos y \end{cases}\\ \therefore x = y$

Vemos então que todos os pontos críticos encontram-se em coordenadas $(x,x)$, o que é útil para encontrá-las, embora insuficiente para diferenciá-las. Mudemos nossa abordagem para encontrá-las fazendo uso de uma função de uma única variável $g(x) = 2 \sin x + \sin 2x$. Podemos encontrar os pontos críticos desta derivando-a e em seguida igualando-a a zero:

$g'(x) = 2 \cos x + 2\cos 2x = 0 \implies \cos x + \cos 2x = 0 \\\implies \cos x + \cos^2 x - \sin^2 x = 0 \implies \cos x + \cos^2x - (1 - \cos^2 x) = 0 \\\implies 2\cos^2x + \cos x - 1 = 0$

Ao admitirmos $z = \cos x$ temos pela aplicação da fórmula de Bhaskara:

$$
2z^2 + z - 1 = 0 \implies 2\left(z - \dfrac 12 \right)(z + 1) = 0
$$

Tirando as raízes desta equação, obtemos:

$$
z = \cos x \begin{cases}
\cos x = -1 \implies x = \pi \\
\cos x = \dfrac 12 \begin{cases}
x = \dfrac \pi3 \\\ \\
x = \dfrac{5\pi}3\end{cases} \end{cases}
$$

Tais são os pontos críticos desta função no eixo $(x,x)$. Aplicando estes valores na equação original, obtemos:

$f(\pi,\pi) = \sin \pi + \sin \pi + \sin 2\pi = 0 + 0 + 0 = 0 \text{ (ponto de cela)} \\\ \\
f \left(\dfrac \pi 3, \dfrac \pi 3\right) = 2 \sin \dfrac \pi 3 + \sin \left(2 \cdot \dfrac \pi 3\right) = \cancel 2 \dfrac{\sqrt 3}{\cancel 2} + \dfrac{\sqrt 3}2 = \dfrac {3\sqrt3}2 \text{ (máximo absoluto)}\\\ \\
f\left(\dfrac{5\pi}3, \dfrac{5\pi}3\right) = - \cancel 2 \dfrac{\sqrt 3}{\cancel 2} -  \dfrac{\sqrt 3}2 = - \dfrac {3\sqrt3}2 \text{ (mínimo absoluto)}\ \blacksquare
$

### Exercício 31

Determine os valores máximo e mínimo **absolutos** para $f(x,y) = x^2 + y^2 + x^2y + 4$ no conjunto $D = \{(x,y) : |x| \le 1, |y| \le 1\}$.

#### Resolução

Podemos encontrar pontos críticos de uma função de dois termos à partir de suas derivadas parciais quando estas encontram-se igualadas à 0:

$f_y = 2y + x^2 = 0 \implies 2y = - x^2 \\ f_x = 2x + 2xy = 0 \implies 2x - x^3 = 0 \implies x(2 - x^2) = 0 \\ \implies x = \begin{cases} 0 \\ \cancel{\pm \sqrt 2}\ (-1 \le x \le 1) \end{cases} \\ \therefore 2y = -0^2 \implies y = 0$

A função portanto possui ponto crítico em $(0,0)$. Pela aplicação do Teste da Segunda Derivada podemos inferir se este se trata de um ponto máximo ou mínimo local:

$\text{Det}(0,0) = f_{xx}(0,0)f_{yy}(0,0) - [f_{xy}(0,0)]^2 = (2 + 2\cdot 0)\cdot 2 - (2 \cdot 0)^2 = 4$

Temos que $\text{Det}(0,0) > 0$ e $f_{xx}(0,0) > 0$, então $f(0,0)$ trata-se de um mínimo local de valor $f(0,0) = 4$. Passemos a avaliar a presença de máximos e mínimos nas extremidades da função. Dado o domínio, esta descreve uma superfície de área quadrada cujo centro encontra-se em $f(0,0)$, avaliemos cada lado deste quadrado:

- **L~1~:** caso em que $x = 1$ e $ -1 \le y \le 1$, $L_1(y) = y^2 + y + 5$.
  - Intuitivamente conseguimos saber que obteremos o valor máximo para esta extremidade quando $y = 1$. Ou seja, $L_1(1) = 1 + 1 + 5 = 7$;
  - o valor mínimo requer que realizemos mais alguns passos, a começar por encontrar sua derivada  ($L'_1(y) = 2y + 1$) e localizar seu ponto crítico  $\left(2y + 1 = 0 \implies y = -\frac 12 \right)$, para então aferí-lo: $L_1\left(- \frac 12\right) = 1 + \frac 14 - \frac 12 + 5 = \frac{23}4 = 5,75$.
- **L~2~:** caso em que $-1 \le x \le 1$ e $y = -1$, $L_2(x) = x^2 + 1 - x^2 + 4 = 5$ (constante).
- **L~3~:** caso em que $x = -1$ e $-1 \le y \le 1$, $L_3(y) =y^2 + y + 5$ (análogo à **L~1~**).
- **L~4~:** caso em que $-1 \le x \le 1$ e $y = 1$, $L_4(x) = 2x^2 + 5$.
  - Maximo: $L_4(1) = 1 + 1 + 1 + 4 = 7$;
  - Mínimo: $L_4'(x) = 4x = 0 \implies x = 0 \therefore L_4(0) = 5$.

Finalmente, concluímos que os valores máximo e mínimo para a função dada no domínio dado são, respectivamente, **7** e **4**. $\blacksquare$

[^1]: nUSP 12543033; Turma 04