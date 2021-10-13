# Atividade 5

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
\lim_{t \to 0^+}\ \int^1_t \dfrac{\sec^2 x}{x\sqrt x}\ dx \ge \lim_{t \to 0^+}\  \int^1_t \dfrac{1}{x\sqrt x}\ dx
$$

Uma secante sempre tem valores, menores ou iguais a -1 ou maiores ou iguais a +1. Uma secante elevada ao quadrado, entretanto, tem valor sempre maior ou igual a 1. Logo, se a expressão à direita da desigualdade divergir, a expressão à esquerda, de maior valor, também divergirá. Isso segundo o Teorema da Comparação. Logo,

$$
\displaystyle \lim_{t \to 0^+}\ \int^1_t \dfrac{1}{x\sqrt x}\ dx = \lim_{t \to 0^+} \dfrac{2}{\sqrt x} \Big |^1_t \text{(diverge)}
$$

Logo, dado o Teorema da Comparação,  $\lim_{t \to 0+}\ \int1_t \frac{\sec^2 x}{x\sqrt x}\ dx$ também diverge. $\blacksquare$

#### Exercício 65

Encontre a velocidade de escape $v_0$ que é necessária para lançar um foguete de massa $m$ para fora do campo gravitacional de um planeta com massa $M$ e raio $R$. Use a Lei da Gravitação de Newton e o fato de que a energia cinética inicial de $\frac 12 mv^2_0$ supre o trabalho necessário.

#### Resolução

Admitindo que o lançamento se dá na superfície do planeta $s(0) = R$, para escapar da atração gravitacional, o foguete necessita produzir uma força $F$ no mínimo equivalente, mas de sentido oposto, a força de atração gravitacional $F_g$:

$$
F = - F_g \implies \cancel ma(t) = - \dfrac{GM\cancel m}{[s(t)]^2}
$$

Para encontrar o valor destas funções com relação a v(t), multiplicaremos ambos  membros por v(t) e realizaremos a integração. Lembrando que $s'(t) = v(t)$ e

$s''(t) = v'(t) = a(t)$:

$$
\int a(t)v(t)\ dt = - GM \int \dfrac {v(t)}{[s(t)]^2}\ dt
$$

Realizando operações de substituição onde $v = v(t)$, $dv = a(t)\ dt$, e $w = s(t)$, $dw = v(t)\ dt$, tem-se:

$$
\int v\ dv = - GM \int w^{-2}\ dw \implies \dfrac{[v(t)]^2}{2} + C_1= \dfrac{GM}{s(t)} + C_2
\implies\dfrac{[v(t)]^2}{2} = \dfrac{GM}{s(t)} + C
$$

Onde $C$ é a diferença ($C_2 - C_1$) entre as  constantes de integração. Ora, mas o que seriam estas constantes de integração? Estas são os valores que suas respectivas funções assumem inicialmente, para $t = 0$:

$$
C = \dfrac{[v(0)]^2}2 - \dfrac{GM}{s(0)} = \dfrac{v_0^2}2 - \dfrac{GM}{R}
$$

Atente para o sinal, congruente com a orientação das forças. Também note que encontramos a variável cujo valor buscamos aferir.

$$
\dfrac{[v(t)]^2}{2} = \dfrac{GM}{s(t)} + \dfrac{v_0^2}2 - \dfrac{GM}{R}
$$

Analizando a equação acima, temos que para o foguete escapar da atração da força gravitacional, $\frac{[v(t)]^2}{2}$ necessita ser maior ou igual a zero. Por outro lado$\frac{GM}{s(t)}$ é sempre maior que zero, mas tende a zero em função do tempo. Logo, recai sobre $\frac{v_0^2}2 - \frac{GM}{R}$ também ser maior ou igual a zero para que a condição de escape seja satisfeita. Logo:

$$
\frac{v_0^2}2 - \frac{GM}{R} \ge 0 \implies v_0 \ge \sqrt{\dfrac{2GM}R}\ \blacksquare
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

$\displaystyle \int^{\frac \pi 2}_0 |\sin x - \cos 2x|\ dx = - \int^{\frac \pi 6}_0 \sin x - \cos 2x\ dx + \int^{\frac \pi 2}_{\frac \pi6} \sin x - \cos 2x\ dx = \int^{\frac \pi 6}_0 \cos 2x - \sin x\ dx + \int^{\frac \pi 2}_{\frac \pi6} \sin x - \cos 2x\ dx = \int^{\frac \pi 2}_{\frac \pi6} \sin x\ dx - \int^{\frac \pi 6}_0 \sin x\ dx + \int^{\frac \pi 6}_0 \cos 2x\ dx - \int^{\frac \pi 2}_{\frac \pi6} \underbrace{\cos 2x\ dx}_{u = 2x,\ du = 2dx} = \cos x \Big |^\frac \pi2_\frac\pi 6 - \cos x\Big |^\frac \pi6_0 + \dfrac 12\left(\sin x \Big |^\frac \pi3_0 - \sin x\Big |^\pi_\frac \pi 3\right) = \dfrac{3\sqrt 3}2 - 1\ \blacksquare$

Esse resultado pode ser expresso graficamente como:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-25-16-49-50-image.png" title="" alt="" data-align="center">

### Exercício 45

É mostrada a seção transversal da asa de um avião. As medidas em centímetros da espessura da asa, em intervalos de 20 centímetros, são 5.8, 20.3, 26.7, 29.0, 27.6, 27.3, 23.8, 20.5, 15.1, 8.7, e 2.8. Utilize a Regra do Ponto Médio para estimar a área da secção transversal da asa.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-25-16-52-18-image.png" title="" alt="" data-align="center">

#### Resolução

$\displaystyle \int^{200}_0 f(x)\ dx \approx \sum^{10}_{i = 1}\dfrac{x_{i - 1} + x_i}2\Delta x = 20(13,05 + 23,5 + 27,85 + 28,3 + 27,45 + 25,55 + 22,15 + 17,8 + 11,9 + 5,75) = \text{4 066 cm²}\ \blacksquare$

## Capítulo 6.5

### Exercício 17

Em uma certa cidade a temperatura (em ºC) $t$ horas depois das 9 h foi aproximada pela função

$$
T(t) = 20 + 6 \sin \left(\dfrac{t\pi}{12}\right)
$$

Calcule a temperatura média durante o período entre 9h e 21 h.

#### Resolução

$\displaystyle\overline T = \dfrac1{12 - 0} \int^{12}_0 20 + 6 \sin \left(\dfrac{t\pi}{12}\right)\ dt \implies
12\ \overline T = 20 \cdot 12 + 6 \int^{12}_0 \underbrace{\sin \left(\dfrac{t\pi}{12}\right)\ dt}_{u = \frac{t\pi}{12},\ du = \frac{\pi}{12}dt} \implies
\cancel{12}\ \overline T = 20 \cdot \cancel{12} + 6 \cdot \dfrac{\cancel{12}}\pi \cdot -\cos u \Big|^\pi_0 = 20 + \dfrac6\pi (- \cos \pi + \cos 0) = 20 + \dfrac{12}\pi \text{ °C } \blacksquare
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

A localização do centroide de uma área plana é dado pelo ponto $(\overline x, \overline y)$ onde:

$$
\overline x = \dfrac{\int^1_0xf(x)\ dx}{\int^1_0f(x)\ dx} \text{, e }
\overline y = \dfrac{\int^1_0[f(x)]^2\ dx}{2\int^1_0f(x)\ dx}
$$

Logo,

$\overline x = \dfrac{\int^1_0xe^x\ dx}{\int^1_0e^x\ dx} =
\dfrac{xe^x\Big |^1_0 - \int^1_0e^x\ dx}{e - 1} = \dfrac 1{e - 1}\\\ \\
\overline y = \dfrac{\int^1_0e^{2x}\ dx}{2\int^1_0e^x\ dx} = \dfrac{\int^2_0e^u\ du}{4 (e - 1)} = \dfrac{e + 1}4\ \blacksquare
$

<img title="" src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-27-14-29-57-image.png" alt="" data-align="center" width="248">

> Gráfico da função com centroide calculado (ponto A, mais acima) e estimado (ponto B, mais abaixo)

### Exercício 41

Encontre o centroide da região mostrada, não por integração, mas por localização dos centroides dos retângulos e triângulos e usando a aditividade dos momentos.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-27-15-00-05-image.png" title="" alt="" data-align="center">

#### Resolução

O contorno da região é simétrico com relação ao eixo $y$, logo, $\overline x = 0$. Agora, o centroide do triângulo encontra-se no encontro de suas medianas ($h/3 = 2/3$) e aquele do retângulo encontra-se em seu centro ($h/2 = -1/2$). O centroide da região no encontrará-se no ponto médio entre estes pontos:

$\overline y = \dfrac 23 - \dfrac 12\left[\dfrac 23 - \left( - \dfrac 12 \right)\right] = \dfrac 1{12}\ \blacksquare$

## Capítulo 8.5

### Exercício 9

Mostre que a mediana do tempo de espera para uma chamada para a companhia descrita no Exemplo 4 é de cerca de 3,5 minutos.

#### Resolução

$\displaystyle \int^\infty_m f(t)\ dt = \dfrac 12 \implies \lim_{x \to \infty} \int^x_m\underbrace{\dfrac{e^{-\frac t5}}5\ dt}_{u\ = - \frac t5;\ du = - \frac{dt}5} \implies \lim_{x \to \infty} \dfrac 15 \cdot -5 \cdot e^u \Big |^{- \frac x5}_{- \frac m5} = \dfrac 12 \implies \lim_{x \to \infty} \left(\dfrac 1{e^{\frac m5}} - \cancel{\dfrac 1{e^{\frac x5}}}\right) = \dfrac 12 \implies e^{m/5} = 2 \implies \dfrac m5 \cancel{\ln e} = \ln 2 \implies m = 5\ln 2 \approx 3,5\ \blacksquare$

### Exercício 19

O átomo de hidrogênio é composto por um próton no núcleo e um elétron, que se move ao redor do núcleo. Na teoria quântica de estrutura atômica supõe-se que o elétron não se mova em uma órbita bem definida. Ao contrário, ele ocupa um estado conhecido como *orbital*, que pode ser pensado como uma “nuvem” de carga negativa rodeando o núcleo. No estado de energia mais baixa, chamado *estado fundamental*, ou *orbital 1s*, é suposto que o formato do orbital seja uma esfera com centro no núcleo. Essa esfera é descrita em termos da função densidade de probabilidade

$$
p(r) = \dfrac 4{a^3_0}r^2e^{-\frac{2r}{a_o}},\ r \ge 0
$$

onde $a_0$ é o *raio de Bohr* ($a_0 \approx 559 \cdot 10^{-13}m$). A integral

$$
P(r) = \int^r_0 \dfrac 4{a^3_0}s^2e^{-\frac{2s}{a_o}}\ ds
$$

dá a probabilidade de o elétron ser encontrado dentro da esfera de raio *r* metros centrada no núcleo.

#### Resolução

**a)** Verifique se $p(r)$ é uma função densidade de probabilidade.

A função $p(r)$ é uma função densidade de probabilidade se, e somente se, $\lim_{r \to \infty}\int_0^r p(s)\ ds = 1$.

$\displaystyle \lim_{r \to \infty} \int^r_0 \underbrace{\dfrac{4s^2}{a_0^3}e^{-\frac{2s}{a_o}}ds}_{u\ =\ \frac{2s}{a_o},\ du = \frac{2ds}{a_o}} = \lim_{r \to \infty} - \dfrac {\cancel{a_0}}2 \cdot \dfrac 1{\cancel{a_0}} \int^{\frac{2r}{a_o}}_0 u^2e^u\ du   = \lim_{r \to \infty} - \dfrac 12 \left(u^2e^u \Big |^{\frac{-2r}{a_o}}_0 - 2 \int^{\frac{-2r}{a_o}}_0 ue^u\ du\right) = \lim_{r \to \infty} - \dfrac 12 \left[u^2e^u \Big |^{\frac{-2r}{a_o}}_0 - 2 \left( ue^u \Big |^{\frac{-2r}{a_o}}_0 - e^u \Big |^{\frac{-2r}{a_o}}_0 \right)\right] = 1\ \blacksquare$

**b)** Encontre $\lim_{r\to \infty} p(r)$. Para que valor de $r$ a função $p(r)$ tem seu valor máximo?

$\displaystyle \lim_{r \to \infty} \dfrac{4r^2}{a_0^3e^{\frac{2r}a}} = \dfrac 4{a^3_0} \lim_{r \to \infty} \dfrac{r^2}{e^{\frac{2r}a}} = \dfrac 4{a^3_0} \lim_{r \to \infty} \dfrac{2r}{e^{\frac{2r}a} \cdot \dfrac 2a} = \dfrac 4{a^3_0} \lim_{r \to \infty} \dfrac{ar}{e^{\frac{2r}a}} = \dfrac 4{a^3_0} \lim_{r \to \infty} \dfrac{a}{e^{\frac{2r}a} \cdot \dfrac 2a} = \dfrac 4{a^3_0} \cdot 0 = 0\ \blacksquare$

Para encontrar o valor máximo da função, iremos derivá-la para encontrar os pontos de valor máximo e mínimo:

$p(r) = \dfrac 4{a_0^3} \cdot \dfrac{\overbrace{r^2}^{u}}{\underbrace{e^{\frac{2r}a}}_{v}} \implies u' = 2r;\ v' = e^{\frac{2r}{a_o}} \ln e \dfrac 2{a_0} = \dfrac{2e^{\frac{2r}{a_o}}}{a_0}\\\ \\ p'(r) = \dfrac 4{a_0^3} \cdot \dfrac{e^{\frac{2r}{a_o}} \cdot 2r - \left(r^2 \cdot \dfrac{2e^{\frac{2r}{a_o}}}{a}\right)}{(e^{\frac{2r}{a_o}})^2} = \dfrac{8r(a_0 - r)}{a^4e^{\frac{2r}{a_o}}}$

Assim, a função tem valor máximo ou mínimo quando a sua derivada tem valor igual a $0$. Verificamos que isso ocorre quando $r (r - a_0) = 0$, o que implica $r = 0$ ou $r = a_0$. Substituíndo estes valores da função inicial obtemos respectivamente o mínimo ($0$) e o máximo($\frac 4{a_0e^2}$). $\blacksquare$

**c)** Desenhe a função densidade

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-09-29-18-09-21-image.png)

> Desenho fora de escala, feito do ponto 0 em diante.

**d)** Calcule a probabilidade de o elétron estar dentro da esfera de raio $4a_0 $ centrada no núcleo.

$ P(4a)= \displaystyle \int^{4a}_0 \dfrac{4s^2}{a_0^3}e^{-\frac{2s}a} ds =  -\dfrac 12 \left[u^2e^u \Big |^{\frac{-2r}{a_o}}_0 - 2 \left( ue^u \Big |^{\frac{-2r}{a_o}}_0 - e^u \Big |^{\frac{-2r}{a_o}}_0 \right)\right] = - \dfrac 12 \left[64e^{-8} - 64 - 2 (-8e^{-8} - e^{-8} + 1)\right] = 33 - \dfrac{41}{e^8} \approx 0,986\ \blacksquare$

**e)** Calcule a distância média do elétron e do núcleo no estado fundamental do átomo de hidrogênio.

$\displaystyle \lim_{r \to \infty} \int^r_0 \underbrace{4\left(\dfrac s{a_0}\right)^3 e^{-\frac{2r}{a_o}}ds}_{u = - \frac 2{a_o},\  -a_odu = ds} = \lim_{r \to \infty} 4a_0 \int^{-\frac r{a_o}}_0 \underbrace{u^3e^{2u}du}_{v = 2u,\ dv = 2du} = \lim_{r \to \infty}\dfrac {a_0}4 \int^{-\frac{2r}{a_o}}_0v^3e^vdv =  \lim_{r \to \infty} \dfrac{a_0}4 \left(v^3e^v \Big|^{-\frac {2r}{a_o}}_0 - 3 \left(v^2e^v \Big|^{-\frac {2r}{a_o}}_0 - 2 \left(ve^v \Big|^{-\frac {2r}{a_o}}_0 - e^v \Big|^{-\frac {2r}{a_o}}_0\right)\right)\right) = - \underbrace{\cancel{\lim_{r \to \infty} \dfrac{2r^3}{e^{- \frac{2r}{a_o}}}  -\lim_{r \to \infty} \dfrac{3r^2}{e^{- \frac{2r}{a_o}}} + \lim_{r \to \infty} \dfrac{3r}{e^{- \frac{2r}{a_o}}}}}_{\text{Aplicando L'Hopital, igualam-se a 0}} + \dfrac{3a_0}2 = \dfrac{3a_0}2\ \blacksquare$

[^1]: nUSP 12543033