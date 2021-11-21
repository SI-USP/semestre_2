# Vetores

## Adição de vetores

Se $\overrightarrow{AB}$ e $\overrightarrow{BC}$ são vetores posicionados de maneira que o ponto inicial de $\overrightarrow{BC}$ é o ponto terminal de $\overrightarrow{AB}$, então a soma $\overrightarrow{AB} + \overrightarrow{BC}$ é o vetor $\overrightarrow{AC}$ do ponto inicial de $\overrightarrow{AB}$ ao ponto final de $\overrightarrow{BC}$. A definição de adição de vetores é ilustrada abaixo. Você pode ver por que essa definição é algumas vezes chamada **Lei do Triângulo**.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%205/Imagens/2021-10-11-19-00-58-image.png" title="" alt="" data-align="center">

Utilizando-se de coordenadas cartesianas, tem-se:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%205/Imagens/2021-10-11-19-37-49-image.png" title="" alt="" data-align="center">

## Multiplicação escalar

Se $c$ é um escalar e $\textbf v$ é um vetor, então a **multiplicação escalar** $c\textbf v$ é o vetor cujo comprimento é $|c|$ vezes o comprimento de $\textbf v$ e cuja direção e sentido são os mesmos de $\textbf v$ se $c > 0$ e sentido oposto a $\textbf v$ se $c < 0$. Se $c = 0$ ou $v = 0$, então $c\textbf v = 0$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%205/Imagens/2021-10-11-19-06-47-image.png" title="" alt="" data-align="center">

> Múltiplos escalares de $\textbf v$

## Componentes

As coordenadas que descrevem um vetor. Por exemplo, sendo $a$ um componente do vetor $\textbf a$, podemos descrever vetores bi e tridimencionais como:

$$
\textbf a = \langle a_1,a_2 \rangle;\ \textbf a = \langle a_1, a_2, a_3 \rangle
$$

Usamos a notação $\langle a_1,a_2 \rangle$ para o par ordenado que se refere a um vetor para não confundir com o par ordenado $(a_1, a_2)$ que corresponde a um ponto no plano.

Ao somarmos algebricamente vetores, *somamos suas componentes*. Analogamente, ao multiplicarmos estes por escalares, multiplicamos seus componentes.

### Vetor posição

O vetor cuja origem corresponde à origem do sistema de coordenadas.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%205/Imagens/2021-10-11-19-24-18-image.png" title="" alt="" data-align="center">

Para qualquer outra representação de início no ponto $A(x_1, y_1, z_1)$ e término no ponto $B(x_2, y_2, z_2)$, temos que o  vetor $\textbf a$ com representação $\overrightarrow{AB}$ é

$$
\textbf a = \langle x_2 - x_1, y_2 - y_1, z_2 - z_1 \rangle
$$

## Comprimento

O comprimento de um vetor bidimensional $\textbf a = \langle a_1,a_2 \rangle$ é

$$
|\textbf a | = \sqrt{a_1^2 + a_2^2}
$$

O comprimento de um vetor tridimensional $\textbf a = \langle a_1,a_2, a_3 \rangle$ é

$$
|\textbf a | = \sqrt{a_1^2 + a_2^2 + a_3^2}
$$