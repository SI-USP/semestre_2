# Atividade 9

> Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 14.4

### Exercício 24

O índice de sensação térmica $W$ é a temperatura sentida quando a temperatura real é $T$ e a velocidade do vento, $v$. Portanto, podemos escrever $W = f (T, v)$. A tabela de valores a seguir foi extraída da Tabela 1 da Seção 14.1. Use essa tabela para determinara aproximação linear da função de sensação térmica quando $T$ estiver a -15 ºC e $v$ estiver próximo de 50 km/h. Estime, a seguir, a sensação térmica quando a temperatura estiver a -17 ºC e a velocidade do vento for de 55 km/h.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-16-11-32-12-image.png" title="" alt="" data-align="center">

#### Resolução

A aproximação linear para $f(T,v)$ é dada por:

$$
f(T,v) \approx f(a,b) + f_T(a,b)(T - a) + f_v(a,b)(v - b)
$$

Para valores $a \approx T$ e $b \approx v$. Assim sendo, para estimarmos $f(-17,55)$ utilizaremos o valor descrito na tabela para $f(a,b) = f(-15,60)$ e aqueles adjacentes a este. Assim, temos que

$f_T(-15, 60) \approx \displaystyle \lim_{h \to 5} \dfrac{f(-15 + h, 60) - f(-15,60)}{2h}\\\ \\ + \lim_{h \to -5} \dfrac{f(-15 +h, 60) - f(-15,60)}{2h} = \dfrac{\dfrac{-23 + 30}5 + \dfrac{-36 + 30}{-5}}2 = \dfrac{13}{10}$

e

$f_v(-15, 60) \approx \displaystyle \lim_{h \to 10} \dfrac{f(-15, 60 + h) - f(-15,60)}{2h}\\ \ + \lim_{h \to -10} \dfrac{f(-15, 60 + h) - f(-15,60)}{2h} = \dfrac{\dfrac{30 - 30}{10} + \dfrac{30 - 29}{-10}}2 = - \dfrac 1{20}$

Logo,

$f(-17,55) \approx f(-15, 60) + f_T(-15,60)(-17 + 15) + f_v(-15,60)(55 - 60) \\\ \\ \approx -30 + \dfrac{13}{10}(-2) - \dfrac 1{20}(-5) \approx -32,25\ \blacksquare$

### Exercício 42

Suponha que você precise saber uma equação do plano tangente à superfície $S$ no ponto $P(2, 1, 3)$. Você não tem uma equação para $S$, mas sabe que as curvas

- $\textbf r_1(t) = \lang 2 + 3t, 1 - t^2, 3 - 4t + t^2\rang$

- $\textbf r_2(u) = \lang 1 + u^2, 2u^3 - 1, 2u + 1 \rang$

ambas estão em $S$. Encontre uma equação para o plano tangente em $P$.

#### Resolução

Podemos deduzir onde as retas passam pelo ponto $P$ fazendo a seguinte comparação:

- Se $\textbf r_1(t) = \lang 2 + 3t, 1 - t^2, 3 - 4t + t^2\rang = \lang 2, 1, 3 \rang$, então
  $\begin{cases}
  2 + 3t = 2 \\
  1 - t^2 = 1 \\
  3 - 4t + t^2 = 3
  \end{cases} \therefore t = 0$
  Portanto, $\textbf r_1(t)$ cruza $P$ em $\textbf r_1(0)$.

- Se $\textbf r_2(u) = \lang 1 + u^2, 2u^3 - 1, 2u + 1 \rang= \lang 2, 1, 3 \rang$, então
  $\begin{cases}
  1 + u^2 = 2 \\
  2u^3 - 1 = 1 \\
  2u + 1 = 3
  \end{cases} \therefore u = 1$
  Portanto, $\textbf r_2(u)$ cruza $P$ em $\textbf r_2(1)$.

Derivamos então as equações das curvas para obter a reta tangente destas:

- $\textbf r_1(t) = \lang 2 + 3t, 1 - t^2, 3 - 4t + t^2\rang \implies \textbf r_1'(t) = \lang 3, - 2t, 2t - 4 \rang$

- $\textbf r_2(u) = \lang 1 + u^2, 2u^3 - 1, 2u + 1 \rang \implies \textbf r_2'(u) = \lang 2u, 6u, 2 \rang$

Com as retas tangentes conseguimos obter a reta normal $\textbf n$, ortogonal à ambas, no ponto $P = (2, 1, 3)$:

$\textbf r_1'(0) \times \textbf r_2'(1) = \lang 3, 0 , -4 \rang \times \lang 2, 6, 2 \rang \\ = \lang 0 \cdot 2 - (-4 \cdot 6), -4 \cdot 2 - 3 \cdot 2, 3 \cdot 6 - 0 \cdot 2 \rang = \lang 24, -14, 18 \rang$

Por vez, a reta normal nos permite descrever a **equação linear** do plano sobre o ponto $P$:

$24 x - 14y + 18z - (24 \cdot 2 - 14 \cdot 1 + 18 \cdot 3) = 0\\ \\ \implies 12 x - 7y + 9z - (12 \cdot 2 - 7 \cdot 1 + 9 \cdot 3) = 0\\ \\ \implies 12x - 7y + 9z - 44 = 0\ \blacksquare$

## Capítulo 14.5

### Exercício 43

Um lado de um triângulo está aumentando em uma taxa de $3\ cm/s$ e um segundo lado está decrescendo em uma taxa de $2\ cm/s$. Se a área do triângulo permanece constante, a que taxa varia o ângulo entre os lados quando o primeiro lado tem $20 cm$ de comprimento, o segundo lado tem $30 cm$ de comprimento e
o ângulo é $\frac \pi6$?

#### Resolução

Denominemos por $x$ o primeiro lado, $y$ o segundo e $\theta$ o ângulo entre eles. Pela aplicação da Lei dos senos, podemos aferir a área do triângulo $A$ como sendo $A = \frac{xy\sin\theta}2$ Assim, o valor de $A$ se dá em função de $x$, $y$ e $\theta$ e estes por vez se dão em função do tempo $t$. Sabemos pelo enunciado que a taxa de variação do comprimento de $x$, $\frac{dx}{dt} = 3$, e $y$, $\frac{dy}{dt} = -2$. Também, que para a área $A$ não ocorre variação, $\frac{dA}{dt} = 0$. Buscamos aqui saber a taxa de variação do ângulo $\theta$, $\frac{d\theta}{dt}$. Ora, podemos relacionar estes dados fazendo uso da Regra da Cadeia e inferi-la:

$\displaystyle \frac{dA}{dt} = \frac{\partial A}{\partial x}\frac{dx}{dt} + \frac{\partial A}{\partial y}\frac{dy}{dt} + \frac{\partial A}{\partial \theta}\frac{d\theta}{dt} \implies 0 = \frac{3y \sin \theta}2 - \frac{2 x \sin \theta}2 + \dfrac{xy \cos \theta}2\frac{d\theta}{dt} \\\ \\ \implies \frac{d\theta}{dt} = \frac{2x\sin \theta - 3y\sin \theta}{xy\cos \theta} = \frac{\sin \theta}{\cos \theta} \cdot \frac{2x - 3y}{xy} = \tan \left(\frac \pi 6\right) \cdot \frac{2 \cdot 2\cancel 0 - 3 \cdot 3\cancel 0}{60\cancel 0}\\\ \\ = \frac{\sqrt 3}3 \cdot - \frac 1{12} = - \frac{\sqrt 3}{36}\ \blacksquare$

### Exercício 59

A Equação 6 é uma fórmula para a derivada $dy/dx$ de uma função definida  implicitamente por uma equação $F (x, y) = 0$, sendo que $F$ é diferenciável e $F_y \not = 0$. Comprove que se $F$ tem derivadas contínuas de segunda ordem, então uma fórmula para a segunda derivada de $y$ é

$$
\frac{d^2y}{dx^2} = - \frac{F_{xx}F_y^2 - 2F_{xy}F_xF_y + F_yyF_x^2}{F_y^3}
$$

#### Resolução

Dado que a função foi definida implicitamente da maneira descrita pelo enunciado, sabemos que $\frac{dy}{dx} = - \frac{F_x}{F_y}$. Denominemos $G(x,y) = - \frac{F_x}{F_y}$. Ao derivarmos ambos os lados da equação e utilizarmos a Regra da Cadeia, teremos:

$$
\displaystyle \frac{d^2y}{dx^2} = \frac{\partial G}{\partial x} \cdot \cancel{\frac{dx}{dx}}\ 1 + \frac{\partial G}{\partial y} \cdot \frac{dy}{dx}
$$

Sendo que

- $\dfrac{\partial G}{\partial x} = \dfrac{\partial}{\partial x}\left(- \dfrac{F_x}{F_y}\right) = - \dfrac{F_yF_{xx} - F_xF_{yx}}{F_y^2}$

- $\dfrac{\partial G}{\partial y} = \dfrac{\partial}{\partial y}\left(- \dfrac{F_x}{F_y}\right) = - \dfrac{F_yF_{xy} - F_xF_{yy}}{F_y^2}$

Assim,

$\displaystyle \frac{d2y}{dx2} = - \dfrac{F_yF_{xx} - F_xF_{yx}}{F_y^2} + \left(- \dfrac{F_yF_{xy} - F_xF_{yy}}{F_y^2}\right)\left(- \dfrac{F_x}{F_y}\right) = \\\ \\ - \dfrac{F_{xx}F_y^2 - F_{yx} F_xF_y - F_{xy} F_yF_x + F_{yy}F_x^2}{F_y^3}$

Consideremos agora que $F$ tem derivadas de segunda ordem contínuas então, pelo Teorema de Clauraut, $F_{xy} = F_{yx}$ e

$$
\frac{d^2y}{dx^2} = - \frac{F_{xx}F_y^2 - 2F_{xy}F_xF_y + F_yyF_x^2}{F_y^3} \ \blacksquare
$$

[^1]: nUSP 12543033; Turma 04