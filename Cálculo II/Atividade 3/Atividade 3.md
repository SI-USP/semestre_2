# Atividade 3

Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 5.5

### Exercício 73

Avalie a integral definida:

$$
\int^1_0 \dfrac 1{(1 + \sqrt x)^4}\ dx
$$

#### Resolução

$
\displaystyle \int^1_0 \dfrac 1{(1 + \sqrt x)^4}\ dx \begin{cases}
u = \sqrt x \\
du = \dfrac{x^{-\frac 12}}{2}\ dx = \dfrac{dx}{2\sqrt x} = \dfrac{dx}{2u} \implies 2u\ du = dx
\end{cases}\\\ \\
2 \int^{\sqrt 1 = 1}_{\sqrt 0 = 0} \dfrac{u}{(1 + u)^4}\ du
\begin{cases}
v = 1 + u \implies u = v - 1 \\
dv = du
\end{cases}\\\ \\
2 \int^{1 + 1 = 2}_{0 + 1 = 1} \dfrac{v - 1}{v^4}\ dv = 
2 \left[\int^2_1 \dfrac v{v^4}\ dv - \int^2_1 \dfrac 1{v^4}\ dv \right] = 2 \left[ - \dfrac{v^{-2}}2 \Bigg |^2_1 + \dfrac{v^{-3}}3 \Bigg |^2_1 \right] = \\\ \\
2 \left[\dfrac 1{3 \cdot 8} - \dfrac 13 - \dfrac 1{2 \cdot 4} + \dfrac 12\right] = \dfrac 16
$

### Exercício 83

A respiração é cíclica e o ciclo completo respiratório desde o início da inalação até o fim da expiração demora cerca de $5\ s$. A taxa máxima de fluxo de ar nos pulmões é de cerca de $0,5\ L/s$. Isso explica, em partes, porque a função $f(x) = \frac 12 \sin \left(\frac{2\pi t}5\right)$ tem sido frequentemente  utilizada para modelar a taxa de fluxo de ar nos pulmões. Use esse modelo para encontrar o volume da ar inalado no instante $t$.

#### Resolução

O volume de ar inalado desde o início do ciclo respiratório (0) até o instante t pode ser aferido pela integral da taxa de fluxo de ar, aferida entre estes dois momentos:

$\displaystyle \int^t_0 \dfrac 12 \sin \left(\dfrac{2\pi x}5\right)\ dx = \dfrac 12 \int^t_0 \sin \left(\dfrac{2\pi x}5\right)\ dx
\begin{cases}
u = \dfrac{2\pi x}5 \\\ \\
du = \dfrac{2 \pi}5\ dx \implies dx = \dfrac 5{2\pi}\ du
\end{cases}\\\ \\
\dfrac 12 \cdot \dfrac 5{2\pi}\int^{\frac{2\pi t}5}_0 \sin u\ du = \dfrac 5{4\pi} \cdot -\cos u \Bigg |^{\frac{2\pi t}5}_0 = \dfrac 5{4\pi} \left[1 - \cos\left(\dfrac{2\pi t}5\right)\right]
$

## Capítulo 7.1

### Exercício 51

Use integração por partes para demonstrar a seguinte redução:

$$
\int (\ln x)^n\ dx = x(\ln x)^n - n\int (\ln x)^{n - 1}\ dx
$$

#### Resolução

Conforme a definição, a fórmula da integração por partes para integrais indefinidas pode ser expressa nos seguintes termos:

$$
\int u \ dv = uv - \int v\ du
$$

Assim o sendo,

$\displaystyle \int (\ln x)^n\ dx
\begin{cases}
u = (\ln x)^n \implies du = n (\ln x)^{n - 1}\ dx\\
dv = dx \implies v = x
\end{cases}\\\ \\
\displaystyle \int (\ln x)^n\ dx = x(\ln x)^n - \int n(\ln x)^{n - 1}\ dx = \bm{x(\ln x)^n - n\int (\ln x)^{n - 1}\ dx }
$

### Exercício 67

Uma partícula que se move ao longo de uma reta tem velocidade igual a $v(t) = t^2e^{-t}$ metros por segundo após t segundos. Qual a distância que essa partícula percorrerá durante os primeiros t segundos?

#### Resolução

A função velocidade trata-se da função derivada da função espaço. Assim o sendo, para obtermos a variação $\Delta S$ entre a posição inicial $S(0)$ e final $S(t)$, temos:

$S(t) = \displaystyle \int \dfrac{t^2}{e^t}\ dt
\begin{cases}
u = t^2 \implies du = 2t\ dt\\
dv = \dfrac{dt}{e^t} \implies v = \int e^{-t}dt
\begin{cases}
w = -t\\ dw = -dt
\end{cases}
\therefore v = - \int e^w\ dw = -e^{-t}
\end{cases}\\\ \\
S(t) = - \dfrac{t^2}{e^t} + 2 \int \dfrac t{e^t}\ dt
\begin{cases}
u = t \implies du = dt \\
dv = \dfrac{dt}{e^t} \implies v = -e^{-t}
\end{cases}\\\ \\
S(t) = - \dfrac{t^2}{e^t} + 2 \left(- \dfrac t{e^t} + \int e^{-t}dt\right) = \dfrac{t^2}{e^t} + 2 \left(-\dfrac{t}{e^t} + \dfrac 1{e^t}\right) + \underbrace C_{=\ S(0)} \\\ \\
\implies \Delta S = \dfrac{-t^2 - 2t + 2}{e^t}
$

[^1]: nUSP 12543033