# [Lista 3](https://edisciplinas.usp.br/course/view.php?id=93211) - Matrizes, Vetores e Geometria Analítica

**1.** Verifique se as transformações abaixo são lineares

>  Sejam $U$ e $V$ espaços vetoriais sobre $\R$. Uma aplicação $F: U \to V$ é chamada *transformação linear* de $U$ em $V$ se, e somente se,
> 
> 1. $F(u_1 + u_2) = F(u_1) + F(u_2), \forall u_1, u_2 \in U$ e
> 
> 2. $F(\alpha u) = \alpha F(u), \forall \alpha \in \R \text{ e } \forall u \in U$.

- [x] $T: \R^3 \to \R,\ T(x,y,z) = x + 5y - z$;

$\bullet\ T(x_1, y_1, z_1) + T(x_2, y_2, z_2)\\ = x_1 + 5y_1 - z_1 + x_2 + 5y_2 - z_2\\ = (x_1 + x_2) + 5(y_1 + y_2) - (z_1 + z_2)\\ = T(x_1 + x_2, y_1 + y_2, z_1 + z_2) \ \blacksquare$

$ \bullet\ T(\alpha x, \alpha y, \alpha z) = \alpha x + 5\alpha y + \alpha z = \alpha (x + 5y + z) = \alpha T(x,y,z)$

- [ ] $T: \R^3 \to \R,\ T(x,y,z) = x + 5y - z + 1$;

$\bullet\ T(x_1, y_1, z_1) + T(x_2, y_2, z_2)=\\ x_1 + 5y_1 + z_1 + 1 +  x_2 + 5y_2 + z_2 + 1 \\ = (x_1 + x_2) + 5(y_1 + y_2) + (z_1 + z_2) + 2\\  \not = (x_1 + x_2) + 5(y_1 + y_2) + (z_1 + z_2) + 1\\ = T(x_1 + x_2, y_1 + y_2, z_1 + z_2)\ \blacksquare$

- [ ] $T: \R^3 \to \R,\ T(x,y,z) = x^2 + 5y - z$;

$\bullet\ T(x_1, y_1, z_1) + T(x_2, y_2, z_2)\\ = x_1^2 + 5y_1 + z_1 + 1 + x_2^2 + 5y_2 + z_2\\ = (x_1^2 + x_2^2) + 5(y_1 + y_2) + (z_1 + z_2) \\ \not = (x_1 + x_2)^2 + 5(y_1 + y_2) + (z_1 + z_2)\\ = T(x_1 + x_2, y_1 + y_2, z_1 + z_2)\ \blacksquare$

- [x] $T: \mathbb P_n(t) \to \mathbb P_n,\ T(p) = p' + p''$;

$\bullet\ T(p_1) + T(p_2) = p_1' + p_1'' + p_2' + p_2'' = (p_1' + p_2') + (p_1'' + p_2'') = T(p_1 + p_2)$

$\bullet\ T(\alpha p) = \alpha p' + \alpha p'' = \alpha (p' + p'') = \alpha T(p)\ \blacksquare$

**2.** Determinar o núcleo das transformações lineares abaixo: representá-las graficamente

> **Definição de Núcleo:** Sejam U e V espaços vetoriais de $\R$ e $F: U \to V$ uma transformação linear. Indica-se por $\ker(F)$ e denomina-se o *núcleo* de F o seguinte subconjunto de U:
> 
> $$
> \ker(F) = \{u \in U | F(u) = e\}
> $$

- $T : \R^2 \to \R,\ T(x,y) = y + 2x$;

$(x,y) \in \ker(T) \iff y + 2x = 0 \implies y = -2x$

Logo, $\ker(T) = \{(x,-2x) : x \in \R\}\ \blacksquare$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/00ba0519e68c331512623698a66fdec257d72ec7.png" title="" alt="" data-align="center">

- $T : \R^3 \to \R,\ T(x,y,z) = z - 2x$;

$(x,y,z) \in \ker(T) \iff z - 2x = 0 \implies z = 2x$

Logo, $\ker(T) = \{(x,y,2x) : x, y \in \R\}\ \blacksquare$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/188941324b6fba59104135a8d57cb89eb5ba18bd.png" title="" alt="" data-align="center">

- $T : \R^2 \to \R^2,\ T(x,y) = (2x + 2y, x + y)$;

$(x,y) \in \ker(T) \iff (2x + 2y, x + y) = (0,0) \implies \begin{cases}2x + 2y = 0 \\ x + y = 0 \end{cases} \therefore x = -y = 0$

Logo, $\ker(T) = \{(x,y) : x = y = 0\}\ \blacksquare$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/8a4bef40ec6593eb033bbbe08aae664d254e2b30.png" title="" alt="" data-align="center">

- $T : \R^2 \to \R^2,\ T(x,y) = (x + y, x - y)$;

$(x,y) \in \ker(T) \iff (x + y, x - y) = (0,0) \implies \begin{cases}x + y = 0 \\ x - y = 0 \end{cases} \therefore x = y = 0$

Logo, $\text{Ker}(T) = \{(x,y) : x = y = 0\}\ \blacksquare$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informa%C3%A7%C3%A3o/2%C2%BA%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Anal%C3%ADtica/Imagens/8a4bef40ec6593eb033bbbe08aae664d254e2b30.png" title="" alt="" data-align="center">

- $T : \R^3 \to \R^3,\ T(x,y,z) = (z - x, z - 2x, z - 3x)$.

$(x,y,z) \in \ker(T) \iff (z - x, z - 2x, z - 3x) = (0,0,0) \implies \begin{cases}z -x = 0 \\ z - 2x = 0  \\ z - 3x = 0\end{cases}\\ \therefore x = z = 0$

Logo, $\ker(T) = \{(x,y,z) : x = z = 0, y \in \R\}\ \blacksquare$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/e4a757ba7a5b859f3d4919117f8f98b3f8790297.png" title="" alt="" data-align="center">

**3.** Determinar base para o núcleo e para a imagem das transformações lineares abaixo

- $T:\R^3 \to \R^3,\ T(x,y,z) = (x + y, 2x + y, 3x + y)$;

$(x + y, 2x + y, 3x + y) = (x,2x,3x) + (y,y,y) = x(1,2,3) + y(1,1,1)$

Para que $x(1,2,3) + y(1,1,1) = (0,0,0)$, teríamos

$$
\begin{cases}x + y = 0 \\ 2x + y = 0 \\ 3x + y = 0\end{cases}\ \therefore x = y = 0
$$

Logo $B_{\text{Im}} = \{(1,2,3), (1,1,1)\}$ é um conjunto composto por elementos  linearmente independentes entre si e base geradora do conjunto imagem $\text{Im}(T)$.

Pelo Teorema do Núcleo e da Imagem, a base do núcleo há de possuir uma base de dimensão 1. Observa-se que para corresponder a definição do núcleo, basta que $x = y = 0, z \in \R$. Assim, satisfaz essa definição a base canônica $B_{\ker} = \{(0,0,1)\}$. $\blacksquare$

- $T:\R^2 \to \R,\ T(x,y) = y + 2x$

$(x, y) = y + 2z \implies (x,y) = x(2) + y(1)$

Assim obtêm-se as bases $(1)$ e $(2)$ para a imagem, onde $(2)$ é combinação linear de $(1)$ e portanto pode ser descartada. $B_{\text{Im}} = \{(1)\}$.

O núcleo há de ter uma base de duas dimensões, da qual resultam valores de $x$ e $y$ para os quais $T(x,y) = e$. Esta seria $y = -2x$, $(-2, 1)$. Logo, $B_{\ker} = \{(-2, 1)\}$. $\blacksquare$

- $T: \mathbb P_2(t) \to \mathbb P_2(t),\ T(p) = p'$;

A base canônica polinomial é $B_{\mathbb P_2} = \{t^2,t,1\}$, ao aplicarmos sobre esta a regra de transformação da função, obtemos a base da imagem $ B_{\text{Im}} = \{T(t^2), T(t), T(1)\}$ . Logo,

$$
\begin{cases} T(t^2) = 2t \\ T(t) = 1\\ T(1) = 0 \end{cases} \therefore 
B_{\text{Im}} = \{2t, 1 \}
$$

A base do núcleo é aquela para qual a regra de transformação resulta em 0, ou seja, $B_{\ker} = \{1\}$. $\blacksquare$

- $T: \mathbb P_2(t) \to \mathbb P_2(t),\ T(p) = p' + p''$

De maneira similar a resolução anterior, temos:

$$
\begin{cases} T(t^2) = 2t + 2\\ T(t) = 1\\ T(1) = 0 \end{cases}
\therefore B_{\text{Im}} = \{2(t + 1), 1\}
$$

e $B_{\ker} = \{1\}$. $\blacksquare$

**4.** Seja $T : \R^3 \to \R^3$ uma transformação linear tal que : $T(1, 0, 0) = (2, 3, 1)$; $T(1, 1, 0) = (5, 2, 7)$ e $T(1, 1, 1) = (−2, 0, 7)$

> **Teorema do Núcleo e da Imagem**: Sejam $U$ e $V$ espaços vetoriais de dimensão finita sobre $\R$. Dada uma transformação linear $F: U\to V$, então
> 
> $$
> \dim (U) = \dim (\text{Ker}(F)) + \dim (\text{Im(F)})
> $$

- Encontre $T(x,y,z)$ para $(x,y,z) \in \R^3$;

$T(x,y,z) = (2x + 3y - 7z, 3x - y - 2z, x + 6y)$

- $T$ é sobrejetora? Justifique;

Sim. Para todo $u \in \R^3$ existe $T(u) \in \R^3$. Demonstração:

$T(u) = T(\underbrace{x,y,z}_{\in\ \R^3}) = (2x + 3y - 7z, 3x - y - 2z, x + 6y) =\\ \underbrace{\underbrace{x}_{\in\ \R}\underbrace{(2,3,1)}_{\in\ \R^3}}_{\in \R^3} + \underbrace{y(3, -1, 6)}_{idem} + \underbrace{z(-7, -2, 0)}_{idem}$

- $T$ é injetora? Justifique;

Sim. Para cada valor de $u$ corresponde um único valor de $F(u)$. O que é imediato.

- $T$ e bijetora? Justifique;

Sim, pois é tanto sobrejetora e injetora.

**5.** Seja $T: U \to V$ uma transformação linear e $\dim(U) > \dim(V)$. Prove que existe um vetor não nulo $u_0 \in U$ tal que $T(u_0) = e$

Dado que a imagem de $T$ é um subconjunto do contradomínio $V$ temos que $\dim(V) \ge \dim({\text{Im}(T)})$. No mais, pelo Teorema do Núcleo e da Imagem, sabemos que $\dim (U) = \dim (\ker(T)) + \dim (\text{Im(T)})$. Mas como $\dim(U) > \dim(V) \ge \dim({\text{Im}(T)}$, isso significa que $\dim (\ker(T)) \ge 1$. O núcleo $\ker$ é o subconjunto aquele para o qual $\ker(T) = \{u \in U | T(u) = e\}$, se este possui dimensão maior ou igual à 1, isso garante que haja pelo menos uma combinação linear da base de $\ker$ da qual resulte um vetor $u \not = e$ tal que $T(u) = e$. $\blacksquare$