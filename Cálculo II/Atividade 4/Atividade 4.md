# Atividade 3

Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 7.8

### Exercício 53

Use o Teorema da Comparação para determinar se a integral é convergente ou divergente.

$$
\int^1_0 \dfrac{\sec^2 x}{x\sqrt x}\ dx
$$

#### Resolução

A integral acima é imprópria e tende ao infinito para x = 0, logo, equivale à

$$
\lim_{t \to 0^+}\ \int^1_t \dfrac{\sec^2 x}{x\sqrt x}\ dx
$$

Podemos atestar que a seguinte declaração é verdadeira:

$$
\lim_{t \to 0^+}\ \int^1_t \dfrac{\sec^2 x}{x\sqrt x}\ dx \ge \lim_{t \to 0^+}\  \int^1_t \dfrac{\sec^2 x}{x}\ dx
$$

Pois no intervalo de 0 à 1 $x\sqrt x$ produz denominadores menores que $x$ simplesmente. Logo, se a expressão à direita da desigualdade divergir, a expressão à esquerda, função de maior valor, também divergirá. Isso segundo o Teorema da Comparação. Logo,

$\displaystyle \lim_{t \to 0^+}\ \int^1_t \dfrac{\sec^2 x}{x}\ dx
\begin{cases}
u = \sec^2 x \implies du = \sec x \tan x\ dx\\
dv = \dfrac 1x \implies v = \ln |x|
\end{cases} \\\ \\
= \lim_{t \to 0^+} \ln |x|\sec^2x\bigg |^1_t - \lim_{t \to 0^+} \int^1_t \ln |x| \sec x \tan x\ dx
$

Vejamos que a primeira parte desta expressão diverge:

$$
\lim_{t \to 0^+} \ln |x|\sec^2x\bigg |^1_t = \ln|1|\sec^21 - \ln |0⁺|\sec^20^+ = \infty
$$

Logo, $\lim_{t \to 0^+}\ \int^1_t \frac{\sec^2 x}{x}\ dx$ diverge e, dado o Teorema da Comparação,  $\lim_{t \to 0+}\ \int1_t \frac{\sec^2 x}{x\sqrt x}\ dx$ também. $\blacksquare$

#### Exercício 65

Encontre a velocidade de escape $v_0$ que é necessária para lançar um foguete de massa $m$ para fora do campo gravitacional de um planeta com massa $M$ e raio $R$. Use a Lei da Gravitação de Newton e o fato de que a energia cinética inicial de $\frac 12 mv^2_0$ supre o trabalho necessário.

#### Resolução

Admitindo que o lançamento se dá na superfície do planeta, temos:

$$
E_c \ge F_g \implies \dfrac{mv_0^2}2 \ge G\dfrac{Mm}{R^2} \implies v_0 \ge \dfrac{\sqrt{2GM}}R
$$

## Capítulo 6.1

### Exercício 31

Calcule a integral e interprete-a como a área de uma região. Esboce a região.

$$
\int^{\frac \pi 2}_0 |\sin x - \cos 2x|\ dx
$$

#### Resolução

O resultado desta integral, por se tratar de uma função modular, será equivalente a soma dos módulos das áreas descritas pela função quando esta tem valores positivos e negativos. Notamos que esta possui valor negativo em seu início:

$
\sin 0 - \cos 0 = -1 
$

Positivo ao seu final:

$\sin \frac \pi 2 + \cos \pi = 2$

E nulo em:

$\sin x - \cos 2x = 0 \implies \sin x = \cos 2x \implies \sin x = \sin \left(\frac \pi2 - 2x\right)\\ \implies x = \frac \pi2 - 2x \implies x = \frac \pi 6$

Logo,

$\displaystyle \int^{\frac \pi 2}_0 |\sin x - \cos 2x|\ dx = \\\ \\ - \int^{\frac \pi 6}_0 \sin x - \cos 2x\ dx + \int^{\frac \pi 2}_{\frac \pi6} \sin x - \cos 2x\ dx = \\\ \\
\int^{\frac \pi 6}_0 \cos 2x - \sin x\ dx + \int^{\frac \pi 2}_{\frac \pi6} \sin x - \cos 2x\ dx =\\\ \\
\int^{\frac \pi 2}_{\frac \pi6} \sin x\ dx - \int^{\frac \pi 6}_0 \sin x\ dx + \int^{\frac \pi 6}_0 \cos 2x\ dx - \int^{\frac \pi 2}_{\frac \pi6} \underbrace{\cos 2x\ dx}_{u = 2x,\ du = 2dx} = \\\ \\
\cos x \Big |^\frac \pi2_\frac\pi 6 - \cos x\Big |^\frac \pi6_0 + \dfrac 12\left(\sin x \Big |^\frac \pi3_0 - \sin x\Big |^\pi_\frac \pi 3\right) = \dfrac{3\sqrt 3}2 - 1\ \blacksquare$

Esse resultado pode ser expresso graficamente como:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-25-16-49-50-image.png" title="" alt="" data-align="center">

### Exercício 45

É mostrada a seção transversal da asa de um avião. As medidas em centímetros da espessura da asa, em intervalos de 20 centímetros, são 5.8, 20.3, 26.7, 29.0, 27.6, 27.3, 23.8, 20.5, 15.1, 8.7, e 2.8. Utilize a Regra do Ponto Médio para estimar a área da secção transversal da asa.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-25-16-52-18-image.png" title="" alt="" data-align="center">

#### Resolução

$\displaystyle \int^{200}_0 f(x)\ dx \approx \sum^{10}_{i = 1}\dfrac{x_{i - 1} + x_i}2\Delta x =\\ 20(13,05 + 23,5 + 27,85 + 28,3 + 27,45 + 25,55 + 22,15 + 17,8 + 11,9 + 5,75) =\\ \textbf{4 066 cm²}\ \blacksquare$

## Capítulo 6.5

### Exercício 17

Em uma certa cidade a temperatura (em ºC) $t$ horas depois das 9 h foi aproximada pela função

$$
T(t) = 20 + 6 \sin \left(\dfrac{t\pi}{12}\right)
$$

Calcule a temperatura média durante o período entre 9h e 21 h.

#### Resolução

$\displaystyle\overline T = \dfrac1{12 - 0} \int^{12}_0 20 + 6 \sin \left(\dfrac{t\pi}{12}\right)\ dt\\\ \\
12\ \overline T = 20 \cdot 12 + 6 \int^{12}_0 \underbrace{\sin \left(\dfrac{t\pi}{12}\right)\ dt}_{u = \frac{t\pi}{12},\ du = \frac{\pi}{12}dt}\\\ \\
\cancel{12}\ \overline T = 20 \cdot \cancel{12} + 6 \cdot \dfrac{\cancel{12}}\pi \cdot -\cos u \Big|^\pi_0 = 20 + \dfrac6\pi (- \cos \pi + \cos 0) = 20 + \dfrac{12}\pi \ \blacksquare
$

### Exercício 21

No Exemplo 1 na Seção 3.8, modelamos a população mundial na segunda metade do século 20 pela equação $P(t) = 2 560e^{0,017185t}$. Use essa equação para estimar a população mundial média durante esse período de tempo.

#### Resolução

$c = 0,017185 = \dfrac{3437}{2 \cdot 10^5}\\\ \\
\displaystyle \overline P = \dfrac{2560}{50} \int^{50}_0 e^{ct}dt\ \}\ u = bt\implies du = cdu \\\ \\
\overline P = \dfrac{256}{5c}e^u\Big|^{50c}_0 = \dfrac{4 \cdot 10^4 \cdot 256}{3437}(e^{\frac{3437}{4 \cdot 10^3}} - 1) \approx \dfrac{4 \cdot 10^4 \cdot 256}{3437}(e^{\frac78} - 1) \approx 4167,08\ mi \approx 4\ bi\ \blacksquare
$

## Capítulo 8.3

### Exercício 27

Esboce a região delimitada pelas curvas e visualmente estime a localização do centroide. Em seguida, calcule as coordenadas exatas do centroide.

$$
y = e^x,\ y = 0,\ x = 0,\ x = 1
$$

#### Resolução

### Exercício 41

#### Resolução

## Capítulo 8.5

### Exercício 9

#### Resolução

### Exercício 19

#### Resolução

[^1]: nUSP 12543033