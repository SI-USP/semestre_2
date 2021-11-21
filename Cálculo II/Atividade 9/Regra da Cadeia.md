# Regra da Cadeia

Para as funções de mais de uma variável, a Regra da Cadeia tem muitas versões, cada uma delas fornecendo uma regra de derivação de uma função composta.

## Caso 1

Suponha que $z = f (x,y)$ seja uma função diferenciável de $x$ e $y$, onde $x = g(t)$ e $y = h(t)$ são funções diferenciáveis de $t$. Então $z$ é uma função diferenciável de $t$ e

$$
\frac{dz}{dt} = \frac{\partial z}{\partial x} \frac{dx}{dt} +
\frac{\partial z}{\partial y} \frac{dy}{dt}
$$

## Caso 2

Suponha que $z = f(x,y)$ seja uma função diferenciável de $x$ e $y$, onde $x = g(s,t)$ e $y = h(s,t)$ são funções diferenciáveis de $s$ e $t$. Então

$$
\begin{matrix}
\displaystyle \frac{\partial z}{\partial s} =
\frac{\partial z}{\partial x} \frac{\partial x}{\partial s} +
\frac{\partial z}{\partial y} \frac{\partial y}{\partial s}& &
\displaystyle \frac{\partial z}{\partial t} =
\frac{\partial z}{\partial x} \frac{\partial x}{\partial t} +
\frac{\partial z}{\partial y} \frac{\partial y}{\partial t}
\end{matrix}
$$

Denomina-se $s$ e $t$ as variáveis **independentes**, $x$ e $y$ as variáveis **intermediárias**, e $z$ a variável **dependente**. Tal qual ilustra o seguinte **diagrama em árvore**:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-18-12-37-12-image.png" title="" alt="" data-align="center">

## A Regra da Cadeia (Versão Geral)

Suponha que $u$ seja uma função diferenciável de $n$ variáveis  $x_1, \dots , x_n$ onde cada $x$ é uma função diferenciável de $m$ variáveis $t_1, \dots , t_m$. Então $u$ é uma função de $t_1, \dots , t_m$ e

$$
\frac{\partial u}{\partial t_i} =
\sum^i_{j = 1} \frac{\partial u}{\partial x_j}
\frac{\partial x_j}{\partial t_i}
$$

Por exemplo, a Regra da Cadeia para o caso onde $w = f(x,y,z,t)$ e $x(u,v)$, $y = y(u,v)$, $z = z(u,v)$ e $t = t(u,v)$ é exemplificada pela seguinte diagrama de árvore

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-18-13-15-49-image.png" title="" alt="" data-align="center">

e pode ser descrito em suas parciais por:

$$
\frac{\partial w}{\partial u} =
\frac{\partial w}{\partial x}\frac{\partial x}{\partial u} + 
\frac{\partial w}{\partial y}\frac{\partial y}{\partial u} + 
\frac{\partial w}{\partial z}\frac{\partial z}{\partial u} +
\frac{\partial w}{\partial t}\frac{\partial t}{\partial u} \\\ \\
\frac{\partial w}{\partial v} =
\frac{\partial w}{\partial x}\frac{\partial x}{\partial v} + 
\frac{\partial w}{\partial y}\frac{\partial y}{\partial v} + 
\frac{\partial w}{\partial z}\frac{\partial z}{\partial v} +
\frac{\partial w}{\partial t}\frac{\partial t}{\partial v} 
$$

## Diferenciação implícita

Suponha que $z$ seja dado implicitamente como uma função $z = f(x,y)$ por uma equação da forma $F(x,y,z) = 0$. Isso significa que $F(x,y,f(x,y)) = 0$ para todo $(x,y)$ no domínio de $f$. Se $F$ e $f$ forem diferenciáveis,

$$
\begin{matrix}
\dfrac{\partial z}{\partial x} =
\dfrac{\dfrac{\partial F}{\partial x}}{\dfrac{\partial F}{\partial z}}
& &
\dfrac{\partial z}{\partial y} =
\dfrac{\dfrac{\partial F}{\partial y}}{\dfrac{\partial F}{\partial z}}
\end{matrix}
$$

$$