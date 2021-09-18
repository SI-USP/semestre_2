# Atividade 2

Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 5.3

### Exercício 45

O que está errado com a seguinte equação?

$$
\displaystyle \int^1_{-2} x^{-4}\ dx  = \dfrac{x^{-3}}{-3} \Bigg ]^1_{-2} = - \dfrac 38
$$

#### Resolução

A equação em questão faz uso do Teorema Fundamental do Cálculo (TFC) para calcular o valor da integral da função $f(x) = x^{-4}$ no intervalo $[1, -2]$. Entretanto, o TFC, conforme sua definição, aplica-se somente às integrais de **funções contínuas**. Este não é o caso aqui, pois nota-se que $f(x) = x^{-4}$ apresenta descontinuidade no ponto $x = 0$.

### Exercício 65

A função de Fresnel $S$ foi definida no Exemplo 3, e seus gráficos estão nas Figuras 7 e 8.

<img src="file:///home/user/Documents/Drives/USP/Introdução%20a%20Ciência%20da%20Computação/Imagens/2021-09-06-16-23-50-image.png" title="" alt="" data-align="center">

**(a)** Em que valores de x essa função tem valores máximos locais?

**(b)** Em que intervalos a função é côncava para cima?

**(c)** Use um gráfico para resolver a seguinte equação, com precisão de duas casas decimais:

$$
\displaystyle \int^x_0 \sin \left(\dfrac{\pi t^2}2\right)\ dt = \dfrac 15
$$

#### Resolução

**(a)** Conforme se observa pela figura 7, a função de Fresnel apresenta valores máximos e mínimos para os valores de $x$ aqueles em que sua função derivada  $S'(x) = \sin (\pi x^2/2)$ tem valor 0. O que ocorre sempre que o valor de $x$ é diferente de 0 e múltiplo de √2:

$$
S'(x) = \sin \left(\dfrac{\pi (n \sqrt 2)^2}2\right) = 0 \implies
\begin{cases}
\text{Máximo local, se \textit k for} \begin{cases}
\text{ímpar e positivo} \\
\text{par e negativo}
\end{cases} \\\ \\
\text{Mínimo local, se k for} \begin{cases}
\text{par e positivo} \\
\text{ímpar e negativo}
\end{cases} \\
\end{cases}
$$

Onde $n$ é um número inteiro e positivo. Ou seja, para $x > 0$ tem-se um máximo local quando:

$$
\dfrac{\pi x^2}2 = (2n + 1)\pi \implies x = \sqrt{2(2n + 1)}
$$

Enquanto, para $x < 0$, isso ocorre quando:

$$
\dfrac{\pi x^2}2 = 2n\pi \implies x = -2\sqrt x
$$

**(b)** Conforme as propriedades das funções derivadas, enquanto a função derivada descreve a localização dos pontos máximos e mínimos da função da qual foi derivada, por vez, a função derivada desta primeira descreve a concavidade desta última: para cima quando $S''(x) > 0$ e para baixo quando $S''(x) < 0$. Onde $S'''(x)$ é:

$$
S'(x) = \sin \left(\dfrac{\pi x^2}2\right) \implies S''(x) = \cos \left(\dfrac{\pi x^2}2\right) \cdot \pi x
$$

Logo, para $x > 0$:

$$
\cos \left(\dfrac{\pi x^2}2\right) \cdot \pi x > 0 \implies \cos \left(\dfrac{\pi x^2}2\right) > 0 \implies 0 < \dfrac{\pi x^2}2 < \dfrac \pi 2
$$

Generalizando:

$$
\left(2n - \dfrac 32 \right)\pi < \dfrac{\pi x^2}2 < \left(2n - \dfrac 12 \right)\pi \\\ \\
\sqrt{4n - 3} < x < \sqrt{4n - 1}
$$

Para qualquer número inteiro e positivo $n$.

De maneira análoga, para $x < 0$:

$$
\cos \left(\dfrac{\pi x^2}2\right) \cdot \pi x > 0 \implies \cos \left(\dfrac{\pi x^2}2\right) < 0 \implies \dfrac \pi 2 < \dfrac{\pi x^2}2 < \dfrac{3\pi} 2
$$

Generalizando:

$$
\left(2n - \dfrac 12 \right)\pi <  \dfrac{\pi x^2}2 < \left(2n - \dfrac 32 \right)\pi\\\ \\
\sqrt{4n - 1} < |x| < \sqrt{4n - 3}
$$

**(c)** O gráfico à seguir foi gerado aplicando a fórmula da integral em uma calculadora gráfica e experimentando-se valores para x menores que √2 até ser encontrado o valor aquele que corresponde à área descrita pelo enunciado em **x = 0.74**.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%202/Imagens/2021-09-06-22-15-00-image.png" title="" alt="" data-align="center">

## Capítulo 5.4

### Exercício 45

Calcule a integral de $\int^2_{-1} (x - 2 |x|)\ dx$

### Resolução

$\text{(I) } \int^2_{-1} (x - 2 |x|)\ dx = \int_{-1}^0 (x + 2x)\ dx + \int_0^2 (x - 2x)\ dx =\\\ \\ 3 \int_{-1}^0 x\ dx - \int_0^2 x\ dx = 3[F(0) - F(-1)] - [F(2) - F(0)] \\\ \\
\text{(II) } f(x) = x \implies F(x) = \dfrac{x^2}2 \\\ \\
\text{(I) e (II) } 3 \cdot - \dfrac 12 - \dfrac 42 = - \dfrac 72 
$

### Exercício 67

O custo marginal de fabricação de x metros de um certo tecido é C'(x) = 3 - 0,01x + 0,000006x^2^ US$/m (em dólares por metro). Ache o aumento do custo (A) se o nível de produção for elevado de 2 000 para 4 000 metros.

#### Resolução

$ C'(x) = 3 - 10^{-2}x + 6 \cdot 10^{-6}x \implies C(x) = 3x - \dfrac{10^{-2}}2x^2 + 2 \cdot 10^{-6}x^3\\\ \\A = \displaystyle \int_{2 \cdot 10^3}^{4 \cdot 10^3} C'(x) dx = C(4 \cdot 10^3) - C(2 \cdot 10^3) = \\\ \\4 \cdot 10^3 \left[3 - \dfrac{10^{-2} \cdot 4 \cdot 10^3}2 + 2 \cdot 10^{-6} \cdot 16 \cdot 10^6\right] - 2 \cdot 10^3 (3 - 10 + 8)\\\ \\ = \bm{58 \cdot 10^3 \textbf{ dollares/m}}$

[^1]: nUSP 12543033