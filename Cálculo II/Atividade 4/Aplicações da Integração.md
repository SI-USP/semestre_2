# Aplicações da Integração

## Áreas entre curvas

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-10-06-16-47-15-image.png" title="" alt="" data-align="center">

A área $A$ da região limitada pelas curvas $y = f (x)$, $y = g(x)$ e pelas retas $x = a$, $x = b$, onde $f$ e $g$ são contínuas e $f(x) \ge g(x)$ para todo x em $[a, b]$, é

$$
A = \int^b_a [f(x) - g(x)]\ dx
$$

## Valor médio de uma função

Para uma dada função $f$, contínua no intervalo $[a,b]$, por exemplo

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-10-06-16-52-39-image.png" title="" alt="" data-align="center">

Esta assume um valor médio $f_{med}$ o qual pode ser descrito por

$$
f_{med} = \frac 1{b - a} \int^b_a f(x)\ dx 
$$

## Ponto médio de uma área descrita por uma função

Sendo $\overline x$ e $\overline y$ os valores médios de $x$ e $y$ que apontam, em suas respectivas coordenadas, para para a localização do centroide de uma área, tem-se

$$
\overline x = \frac 1A \int^b_a x f(x)\ dx = \frac{\int^b_a x f(x)\ dx}{\int^b_a f(x)\ dx}
$$

$$
\overline y = \dfrac 1{2A} \int^b_a [f(x)]^2\ dx = \frac{\int^b_a [f(x)]^2\ dx}{2\int^b_a f(x)\ dx}
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-10-06-20-40-00-image.png" title="" alt="" data-align="center">

> Exemplo de centroide aferido pelo método.

## Densidade de probabilidade

Em um gráfico de densidade de probabilidade, como o abaixo,

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-10-06-19-21-18-image.png" title="" alt="" data-align="center">

É possível aferir a probabilidade de uma variável qualquer encontrar-se entre determinados valores calculando a área sob a curva no período considerado. Como as probabilidades são medidas em uma escala de 0 até 1, segue que

$$
\int^\infty_{-\infty} f(x)\ dx = 1
$$

Esta é a condição necessária para que a função seja apta a ser uma de densidade de probabilidade.

### Valor médio da densidade de probabilidade

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%204/Imagens/2021-10-06-20-05-51-image.png" title="" alt="" data-align="center">

Considerando $\mu$ o valor médio de uma densidade de probabilidade, tem-se

$$
\mu = \int^\infty_{-\infty} x f(x)\ dx
$$