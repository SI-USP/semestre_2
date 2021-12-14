# [Lista 4](https://edisciplinas.usp.br/mod/resource/view.php?id=3995403) - Matrizes, Vetores e Geometria Analítica

## Recapitulação

O produto interno é uma generalização daquilo que nas aulas de Cálculo, na geometria euclidiana, se refere por "produto escalar". Ou seja, para um par de vetores $(\vec u, \vec v)$ onde $\vec u = \lang x_1, x_2, x_3 \rang$ e $\vec v = \lang y_1, y_2, y_3 \rang$, então

$$
\vec u \times \vec v = x_1y_1 + x_2y_2 + x_3 y_3
= |\vec u| |\vec v| \cos \theta
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/2021-12-07-11-09-56-image.png" title="" alt="" data-align="center">

### Definição

Seja $V$ um espaço vetorial de dimensão finita sobre $\R$. Entende-se por produto interno sobre $V$ uma aplicação que transforma cada par ordenado $(u,v) \in V \times V$ em que um número **real** (que indicaremos por $\lang u,v
 \rang$) obedecendo às seguintes condições ($\forall u, v, w \in V, \alpha \in \R$):

1. $\lang u + v, w
   \rang = \lang u,w
   \rang + \lang v,w
   \rang$;

2. $\lang \alpha u, v
   \rang = \alpha \lang u,v
   \rang$;

3. $\lang u,v
   \rang = \lang v,u
   \rang$;

4. $\lang u,u
   \rang$ é um número real maior que zero para todo vetor $u\not = e$.

### O produto interno usual do $\R^n$

Se $u = (x_1, \dots, x_n)$ e $v = (y_1, \dots, y_n)$ são vetores genéricos do $\R^n$, então:

1. $\lang u,v
   \rang\ = \lang(x_1, \dots, x_n),(y_1,\dots, y_n)
   \rang\\= x_1y_1 + \dots + x_ny_n$

2. $\lang \alpha u,v
   \rang = (\alpha x_1)y_1 + \dots + (\alpha x_n)y_n\\ = \alpha (x_1y_1 + \dots + x_ny_n) = \alpha \lang u,v
   \rang$

3. $\lang u,v
   \rang = x_1y_1 + \dots + x_ny_n = y_1x_1 + \dots + y_nx_n\\ = \lang v,u
   \rang$

4. Se $u \not = (0,\dots, 0)$ então um dos $x_i$, ao menos, é não nulo. Logo,
   $\lang u,u \rang = x_1^2 + \dots + x_n^2 > 0$

## Exercícios

**1.** Verifique, em cada um dos itens abaixo, se a função $\lang, \rang$ é um produto interno no espaço vetorial V:

**a.**

$V = \R^2, u = (x_1,y_1), w = (x_2, y_2)$ e $\lang u,w
\rang = 2x_1x_2 + 4y_1 y_2$.

- [x] $\lang u + v, w
  \rang = \lang u,w
  \rang + \lang v,w
  \rang$

**Demonstração**

Seja $v = (x_3,y_3)$,

$\lang u + v, w\rang = 2(x_1 + x_3)x_2 + 4(y_1 + y_3)y_2\\ = 2x_1x_2 + 4y_1y_2 + 2x_1x_3 + 4y_1y_3 = \lang u,w\rang + \lang v,w \rang$

- [x] $\lang \alpha u, w
  \rang = \alpha \lang u,w
  \rang$, $\forall \alpha \in \R$

**Demonstração**

$\lang \alpha u, v \rang = 2(\alpha x_1)x_2 + 4(\alpha y_1)y_2 = \alpha(2x_1x_2 + 4y_1y_2) = \alpha\lang u, w\rang$

- [x] $\lang u,w
  \rang = \lang w,u
  \rang$

**Demonstração**

$\lang u,w
\rang = 2x_1x_2 + 4y_1 y_2 = 2x_2x_1 + 4y_2y_1 = \lang w,u \rang$

- [x] $\lang u,u
  \rang$ é um número real maior que zero para todo vetor $u\not = e$.

**Demonstração**

$\lang u,u \rang = 2x_1^2 + 4y_1^2$

Se $u \not = e$, então pelo menos $x_1 \not = 0$ ou $y_1 \not = 0$, logo

$2x_1^2 + 4y_1^2 > 0\ \blacksquare$

**b.**

$V = \R^3, u = (x_1,y_1,z_1), w = (x_2,y_2,z_2)$ e $\lang u,w \rang = x_1x_2 + y_1y_2$.

- [x] $\lang u + v, w
  \rang = \lang u,w
  \rang + \lang v,w
  \rang$

**Demonstração**

Seja $v = (x_3,y_3, z_3)$,

$\lang u + v, w \rang = (x_1 + x_3)x_2 + (y_1 + y_3)y_2\\ = x_1x_2 + y_1y_2 + x_3x_2 + y_3y_2 = \lang u,w\rang + \lang v, w \rang$

- [x] $\lang \alpha u, w
  \rang = \alpha \lang u,w
  \rang$, $\forall \alpha \in \R$

**Demonstração**

$\lang \alpha u, w \rang = (\alpha x_1)x_2 + (\alpha y_1)y_2 = \alpha (x_1x_2 + y_1y_2) = \alpha \lang u, w \rang$

- [x] $\lang u,w
  \rang = \lang w,u
  \rang$

**Demonstração**

$\lang u,w \rang = x_1x_2 + y_1y_2 = x_2x_1 + y_2y_1 = \lang w,u \rang$

- [x] $\lang u,u
  \rang$ é um número real maior que zero para todo vetor $u\not = e$.

**Demonstração**

$\lang u, u \rang = x_1^2 + y_1^2$

Se $u \not = e$, então pelo menos $x_1 \not = 0$ ou $y_1 \not = 0$, logo

$x_1^2 + y_1^2 > 0\ \blacksquare$

**c.**

$V = \R^4, u = (x_1,y_1, z_1,t_1), w = (x_2, y_2, z_2, t_2)$ e $\lang u,w
\rang = x_1x_2 + y_1y_2 + z_1z_2 - t_1t_2$.

- [x] $\lang u + v, w
  \rang = \lang u,w
  \rang + \lang v,w
  \rang$ 

**Demonstração**

Seja $v = (x_3,y_3,z_3,t_3)$,

$\lang u + v, w \rang = (x_1 + x_3)x_2 + (y_1 + y_3)y_2 + (z_1 + z_3)z_2 - (t_1 + t_3)t_2 \\ = x_1x_2 + y_1y_2 + z_1z_2 - t_1t_2 + x_3x_2 + y_3y_2 + z_3z_2 - t_3t_2 \\ = \lang u,w \rang + \lang v,w \rang$

- [x] $\lang \alpha u, w
  \rang = \alpha \lang u,w
  \rang$, $\forall \alpha \in \R$

**Demonstração**

$\lang \alpha u, w \rang = (\alpha x_1)x_2 + (\alpha y_1)y_2 + (\alpha z_1)z_2 - (\alpha t_1)t_2\\ = \alpha(x_1x_2 + y_1y_2 + z_1z_2 - t_1t_2) = \alpha \lang u,w \rang$

- [x] $\lang u,w
  \rang = \lang w,u
  \rang$

**Demonstração**

$\lang u, w \rang = x_1x_2 + y_1y_2 + z_1z_2 - t_1t_2\\ = x_2x_1 + y_2y_1 + z_2z_1 - t_2t_1 = \lang w, u \rang$

- [ ] $\lang u,u
  \rang$ é um número real maior que zero para todo vetor $u\not = e$.

**Demonstração**

$\lang u,u \rang = x_1^2 + y_1^2 + z_1^2 - t_1^2$

Se $u \not = e$, então pelo menos $x_1 \not = 0$, ou $y_1 \not = 0$, ou $z_1 \not = 0$, ou $t_1 \not = 0$. Entretanto, se $x_1 = 0$,  $y_1 = 0$, $z_1 = 0$ e $t_1 \not = 0$, então

$x_1^2 + y_1^2 + z_1^2 - t_1^2 < 0$ não é produto interno. $\blacksquare$

**2.** Sejam $X = (1,1,-2)$ e $Y = (a, - 1,2)$. Para quais valores de $a$, $X$ e $Y$ são ortogonais?

Dois vetores são ortogonais entre si se estes descrevem entre si um ângulo $\theta = \frac \pi 2$. Assim o sendo, o produto interno entre estes será nulo pois

$$
\vec X \times \vec Y = |\vec X| |\vec Y| \cos \theta
=  |\vec X| |\vec Y| \cos \frac \pi 2 = 0
$$

No mais, temos pela definição de produto interno que

$$
|\vec X| |\vec Y| \cos \theta = x_1y_1 + \dots + x_ny_n
$$

Então, os valores de $a$ para o qual $X$ e $Y$ seriam ortogonais são

$$
\lang X,Y \rang = a - 1 - 4 = 0 \implies a = 5\ \blacksquare
$$

**3.** Mostre que se um vetor $v$ é ortogonal a um vetor $u$, então $v$ também é ortogonal à $\alpha u$, para qualquer $\alpha \in \R$.

Seja $u = (x_1, \dots, x_n)$ e $v = (y_1, \dots, y_n)$. Pela definição de produto interno, se $v$ é ortogonal a $u$, então

$$
\lang u,v \rang\ = \lang(x_1, \dots, x_n),(y_1,\dots, y_n)
\rang = x_1y_1 + \dots + x_ny_n = 0
$$

Avaliemos agora o caso $\lang\alpha u, v \rang$:

$\lang\alpha u,v \rang = (\alpha x_1)y_1 + \dots + (\alpha x_n)y_n
= \alpha (x_1y_1 + \dots + x_ny_n)\\ =
\alpha \underbrace{\lang u,v \rang}_{\text{Por hipótese = 0}} = 0$

Logo, $v$ também é ortogonal à $\alpha u$. $\blacksquare$

**4.** Sabendo que $||u|| = 3$, $||v|| = 5$, determine $\alpha$ de tal maneira que $\lang u + \alpha v, u - \alpha v
\rang\ = 0$.

> Seja $V$ um espaço euclidiano com o produto interno $(u,v) \to \lang u,v \rang$. Dado um vetor $u \in V$ indica-se por $||u||$ e chama-se *norma de $u$* o número real positivo dado por 
> 
> $$
> ||u|| = \sqrt{\lang u,u \rang}
> $$

$||u|| = 3 \implies \sqrt{\lang u,u \rang} = 3 \implies  \lang u,u \rang\ = 9 \\ ||v|| = 5 \implies \sqrt{\lang v,v
\rang} = 5 \implies \lang v,v \rang\ = 25$

Conforme a Definição 1, itens $a$ à $d$, e propriedades $P$ descritas por Callioli, et al.[^1], temos

$\lang u + \alpha v, u - \alpha v \rang = \underbrace{\lang u, u - \alpha v \rang + \lang\alpha v, u - \alpha v \rang}_{(a)} =\\ \underbrace{\lang u,u \rang + \lang u, - \alpha v \rang + \lang \alpha v, u \rang + \lang \alpha v, -\alpha v \rang}_{\textbf P_3} =\\ \lang u,u \rang -\ \underbrace{\alpha \lang u,v \rang}_{\textbf P_2}\ +\ \underbrace{\alpha \lang v,u \rang}_{(b)}\ -\ \underbrace{(\alpha)^2 \lang v,v \rang}_{\textbf P_2\ e \ (b)} =\\ 9 - \alpha \lang u,v \rang +  \alpha\underbrace{\lang u,v \rang}_{(c)} - 25\alpha^2 =\\ 9\ \cancel{- \alpha \lang u,v \rang + \alpha \lang u,v
\rang}\ - 25\alpha^2 = 0\\ \implies \alpha = \pm \dfrac 35\ \blacksquare$

**5.** Sejam $u$ e $v$ vetores de um espaço vetorial com norma. Prove que $\lang u,v \rang = 0$ se, e somente se, $||u + \alpha v|| \ge ||u||, \forall \alpha \in \R$.

Segundo a definição de norma, temos que $||u|| \ge 0, \forall u \in V$. A norma $||u + \alpha v ||$ é a medida de um vetor, tal que, conforme a demonstração da *Desigualdade de Cauchy-Schwarz*, 

$||u + \alpha v||^2 = \lang u + \alpha v, u + \alpha v \rang = \\ \lang u,u \rang + \lang u, \alpha v \rang + \lang \alpha v, u \rang + \lang \alpha v, \alpha v \rang = \\ ||u||^2 + 2\lang u,v \rang + \alpha^2||v||^2$

Utilizemos essa igualdade para a prova que buscamos fazer.

$$
||u + \alpha v ||^2 = ||u||^2 + \underbrace{2 \lang u,v \rang}_{\text{Por hipótese é = 0}} + \alpha^2 ||v||^2 =
\underbrace{||u||^2 + \alpha^2||v||^2}_{\text{Por definição são}\ \ge 0} \\\ \\
\therefore ||u + \alpha v||^2 \ge ||u||^2 \implies ||u + \alpha v|| \ge ||u||
\ \blacksquare
$$

**6.** Sejam $f(t) = a_0 + a_1t + \dots + a_nt^n$ e $g(t) = b_0 + b_1t + \dots + b_nt^n$ polinômios quaisquer de $P_n(\R)$. Verifique se a função

$$
\lang f(t),g(t) \rang \to \sum^n_{i = 0}a_ib_i
$$

é produto interno no espaço $P_n(\R)$.

A aplicação descrita trata-se de um produto interno se as quatro seguintes condições forem verificadas:

1. $\lang f(t) + h(t), g(t) \rang = \lang f(t),g(t) \rang + \lang h(t), g(t) \rang$

**Demonstração**

Seja $h(t) = c_0 + c_1t + \dots + c_nt^n$, tem-se:

$$
\lang f(t) + h(t), g(t) \rang = \sum^n_{i = 0} (a_i + c_i)b_i =
\sum^n_{i = 0} (a_ib_i + c_ib_i) =\\
\sum^n_{i = 0} a_ib_i + \sum^n_{i = 0} c_ib_i
= \lang f(t), g(t) \rang + \lang h(t), g(t) \rang\ \blacksquare
$$

2. $\lang \alpha f(t), g(t) \rang = \alpha \lang f(t), g(t) \rang, \forall \alpha \in \R$

**Demonstração**

$$
\lang \alpha f(t), g(t) \rang = \sum^n_{i = 0} (\alpha a_i)b_i =
\sum^n_{i = 0} \alpha (a_ib_i)\\ = \alpha \sum^n_{i = 0} a_ib_i
= \alpha \lang f(t),g(t) \rang\ \blacksquare
$$

3. $\lang u, v \rang = \lang v,u \rang$

**Demonstração**

$$
\lang f(t), g(t) \rang\ = \sum^n_{i = 0} a_ib_i =
\sum^n_{i = 0} b_ia_i = \lang g(t), f(t) \rang \blacksquare
$$

4. $\lang f(t), f(t) \rang$ é um número real maior que zero para todo $f(t) \not = 0$

**Demonstração**

$$
\lang f(t), f(t) \rang = \sum^n_{i = 0} a_ia_i
$$

Se $f(t) \not = (0, 0, \dots, 0)$ então existe pelo menos um $a_i \not = 0$, logo

$$
\sum^n_{i = 0} a_i^2 > 0 \implies \lang f(t), f(t) \rang > 0\ \blacksquare
$$

[^1]: CALLIOLI, C.; DOMINGUES, H.; COSTA, R. **Álgebra Linear e Aplicações**. 6. ed. [s.l.] Atual Editora, [s.d.].