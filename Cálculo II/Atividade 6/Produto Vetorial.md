# O Produto Vetorial

## Definição

Se $\textbf a = \lang a_1, a_2, a_3 \rang$ e $\textbf b = \lang b_1, b_2, b_3 \rang$, então **produto vetorial** ou **cruzado** de **a** e **b** é o vetor **c** perpendicular tanto à **a** e **b** descrito por

$$
\textbf c = \textbf a \times \textbf b =
\lang a_2b_3 - a_3b_2, a_3b_1 - a_1b_3, a_1b_2 - a_2b_1 \rang
$$

> **Obs:** Definição de produto vetorial para vetores *tridimensionais*.

Por ser ortogonal tanto à **a** e **b**, tem-se que:

$$
\textbf c \cdot \textbf a = \textbf c \cdot \textbf b = 0
= (\textbf a \times \textbf b) \cdot \textbf b
= (\textbf a \times \textbf b) \cdot \textbf a
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/220px-Right_hand_rule_cross_product.svg.png" title="" alt="" data-align="center">

> A regra da mão direita fornece a direção de $\textbf a \times \textbf b$, ortogonal ao plano que contêm **a** e **b**. Nesta, um dos vetores aponta para o pulso enquanto os dedos da mão fecham-se em direção ao outro vetor pelo ângulo agudo entre estes. Nesta configuração, o polegar levantado aponta para $\textbf a \times \textbf b$.

### Propriedades

Se **a**, **b** e **c** são vetores e *c* é um escalar, então

1. $\textbf a \times \textbf a = 0$

2. $\textbf a \times \textbf b = - \textbf b \times \textbf a$

3. $(c \textbf a) \times \textbf b = c(\textbf a \times \textbf b) = \textbf a \times (c\textbf b)$

4. $\textbf a \times (\textbf b + \textbf c) = \textbf a \times \textbf b + \textbf a \times \textbf c$

5. $(\textbf a + \textbf b) \times \textbf c = \textbf a \times \textbf c + \textbf b \times \textbf c$

6. $\textbf a \cdot (\textbf b \times \textbf c) = (\textbf a \times \textbf b) \cdot \textbf c$

7. $\textbf a \times (\textbf b \times \textbf c) =
   (\textbf a \cdot \textbf c)\textbf b - (\textbf a \cdot \textbf b)\textbf c$

Pela aplicação da propriedade 2 sobre as bases canônicas $\textbf i$, $\textbf j$ e $\textbf k$, obtemos

$$
\begin{matrix}
\textbf i \times \textbf j = \textbf k &
\textbf j \times \textbf k = \textbf i &
\textbf k \times \textbf i = \textbf j \\
\textbf j \times \textbf i = - \textbf k &
\textbf k \times \textbf j = - \textbf i &
\textbf i \times \textbf k = - \textbf j
\end{matrix}
$$

Resultado este que pode ser verificado pela aplicação da **regra da mão direita**.

### Exemplo

Encontre um vetor perpendicular ao plano que passa pelos pontos

$$
P(1, 4, 6), Q(-2, 5, -1), R(1, -1, 1)
$$

#### Resolução

O vetor $\overrightarrow{PQ} \times \overrightarrow{PR}$ é perpendicular a ambos $\overrightarrow{PQ}$ e $\overrightarrow{PR}$ e, portanto, perpendicular ao plano que passa por $P$, $Q$ e $R$. Tem-se que:

$\overrightarrow{PQ} = (-2 - 1)\textbf i + (5 - 4)\textbf j + (-1 - 6)\textbf k = - 3\textbf i + \textbf j - 7\textbf k \\ \overrightarrow{PR} = (1 - 1)\textbf i + (-1 -4)\textbf j + (1 - 6)\textbf k = -5 \textbf j - 5 \textbf k \\ 
\overrightarrow{PQ} \times \overrightarrow{PR} = \lang 1(-5) + 7(-5), -7(0) + 3(-5), -3(-5) - 1(0) \rang\\ = \lang-40,-15,15\rang = -5\lang 8,3,-3 \rang$

Assim, temos que $\lang-40,-15,15\rang$ é perpendicular ao plano e, no mais, todo múltiplo não nulo de $\lang 8,3,-3 \rang$ também o é.

## Teorema

Se $\theta$ é o ângulo entre **a** e **b**, $0 \le \theta \le \pi$, então

$$
|\textbf a \times \textbf b| = |\textbf a||\textbf b| \sin \theta = A
$$

Onde $A$ é a área descrita pelo paralelogramo formado entre os vetores. Assim, dois vetores são paralelos entre si se $\theta = k\pi$, $k \in \Z$. 

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-19-18-56-45-image.png" title="" alt="" data-align="center">

### Caso específico

A ideia de produto vetorial aparece muito frequentemente em física. Por exemplo, ao apertarmos um parafuso aplicando uma força a uma chave de boca iremos girar o parafuso). O torque $\tau$ (em relação à origem) é definido
como sendo o produto cruzado dos vetores posição e força:

$$
\tau = \textbf r \times \textbf F
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-21-11-25-21-image.png" title="" alt="" data-align="center">

Posto em termos da definição de produto vetorial, isso seria equivalente à

$$
|\tau| = |\textbf r \times \textbf F| = |\textbf r||\textbf F| \sin \theta
$$

## Produtos Triplos

O produto $\textbf a \cdot (\textbf b \times \textbf c)$ que ocorre na Propriedade 5 da definição de produto vetorial é chamado **produto misto ou produto triplo escalar** dos vetores **a**, **b** e **c**. O significado geométrico do produto misto pode ser visto considerando-se o paralelepípedo determinado pelos vetores **a**, **b** e **c**.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-21-11-14-02-image.png" title="" alt="" data-align="center">

Assim sendo, o volume do paralelepípedo determinado pelos vetores a, b e c é o módulo do produto misto:

$$
V = | \textbf a \cdot (\textbf b \times \textbf c)|
$$

### Caso específico

Se usarmos a fórmula anterior e descobrirmos que o volume do paralelepípedo determinado por **a**, **b** e **c** é 0, então os três vetores precisam pertencer ao mesmo plano; ou seja eles são **coplanares**.

**Exemplo**

$a = <1,5,-2>, b = <3,-1,0>, c = <5,9,-4> \\
\therefore V = | \textbf a \cdot (\textbf b \times \textbf c)| = \left| \begin{matrix} 1 & 5 & -2 \\ 3 & -1 & 0 \\ 5 &  9 & -4 \end{matrix} \right| = 1 \left|\begin{matrix} -1 & 0 \\ 9 & -4 \end{matrix} \right| - 5 \left| \begin{matrix} 3 & 0 \\ 5 & -4 \end{matrix} \right| - 2 \left| \begin{matrix} 3 & -1 \\ 5 & 9 \end{matrix} \right|\\ = 1(4) - 5(-12) - 2(27 + 5) = 0$