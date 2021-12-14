# Equações de Retas e Planos

## Equação vetorial no espaço tridimensional

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%207/Imagens/2021-11-02-11-25-13-image.png" title="" alt="" data-align="center">

$$
\textbf r = \textbf r_0 + t\textbf v
$$

Onde:

- $\textbf r_0 = \lang x_0, y_0, z_0 \rang$ é o vetor que parte da origem do sistemas de coordenadas $O$ e coincide com a origem do vetor $\textbf a$, $P_0$;

- $\textbf r = \lang x, y, z \rang$ é o vetor que parte da origem do sistema de coordenadas $O$ e coincide com a extremidade oposta do vetor $\textbf a$, $P$;

- $\textbf v = \lang a, b, c \rang$ é um vetor paralelo à $\textbf a$ partindo da origem do sistema de coordenadas, denominado **vetor diretor**;

- $t$ é o escalar que multiplica $\textbf v$ de tal forma que este assume a mesma magnitude e sentido que $\textbf a$.
  
  >  Assim, para diferentes valores de $t$ correspondem distintos pontos $P$ em $L$:
  > 
  > <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%207/Imagens/2021-11-02-11-36-15-image.png" title="" alt="" data-align="center">

Explicitando os componentes na fórmula anterior, tem-se:

$$
\lang x, y, z \rang = \lang x_0, y_0, z_0 \rang + \lang ta, tb, tc \rang
= \lang x_0 + ta, y_0 + tb, z_0 + tc \rang
$$

Desta equação derivamos as seguintes **equações paramétricas**:

$$
\begin{cases}x = x_0 + at \\ y = y_0 + bt \\ z = z_0 + ct\end{cases}
$$

Podemos observar que entre estas $t$ é um fator comum. Logo, para qualquer vetor $\textbf a$ na reta $L$ em que $a,b,c \in \R^*$a seguinte igualdade é verdadeira:

$$
\frac{x - x_0}a = \frac{y - y_0}b = \frac{z - z_0}c
$$

Este conjunto de equações são denominadas **equações simétricas** de $L$.

## Planos

Um plano no espaço fica determinado se conhecermos um ponto $P_0(x_0, y_0, z_0)$ no plano e um vetor $\textbf n$, denominado **vetor normal**, ortogonal ao plano.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%207/Imagens/2021-11-02-13-38-20-image.png" title="" alt="" data-align="center">

Assim, seja $P(x, y, z)$ um ponto qualquer contido no plano tem-se que o vetor que liga $P_0$ à $P$ é $\textbf r - \textbf r_0$ tal que o produto vetorial $\textbf n \cdot (\textbf r - \textbf r_0) = 0$. Ou seja

$$
\textbf n \cdot \textbf r = \textbf n \cdot \textbf r_0
$$

Escrito de maneira a explicitar os componentes dos vetores $\textbf n = \lang a,b,c \rang$, $\textbf r = \lang x,y,z \rang$ e $\textbf r_0 = \lang x_0,y_0,z_0 \rang$ temos

$$
\lang a,b,c \rang \cdot \lang x - x_0, y - y_0, z - z_0 \rang =
a(x - x_0) + b(y - y_0) + c(z - z_0) = 0
$$

a **equação escalar do plano** que passa por $P_0$ com vetor normal $\textbf n$.

No mais, a equação anterior pode ser simplificada como:

$$
ax + by + cz + d = 0
$$

onde $d = -(ax_0 + by_0 + cz_0)$. Fórmula essa conhecida como **equação linear** em $x$, $y$, $z$. Uma importante aplicação desta equação é o cálculo da distância $D$ de um ponto com relação a um plano. Seja $x, y, z$ as coordenadas deste ponto, tem-se:

$$
D = \frac{|ax + by + cz + d|}{\sqrt{a^2 + b^2 + c^2}}
$$

### Equações simétricas na representação de planos

Podemos pensar na reta como a intersecção de dois planos:

$$
\begin{matrix} \dfrac{x - x_0}a = \dfrac{y - y_0}b & e &\dfrac{y - y_0}b = \dfrac{z - z_0}c \end{matrix}
$$

Por exemplo, para uma reta $L$ descrita por

$$
\begin{matrix} \dfrac{x - 1}5
= \dfrac y{-2} & e & \dfrac y{-2} = \dfrac z{-3} \end{matrix}
$$

Tem-se o seguinte gráfico:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%207/Imagens/2021-11-02-18-27-36-image.png" title="" alt="" data-align="center">

## Exemplos

### Exemplo 1

Mostre que as retas $L_1$ e $L_2$ com equações paramétricas dadas por

$$
\begin{cases} \begin{matrix}
x_1 = 1 + t & y_1 = -2 + 3t & z_1 = 4 - t \\
x_2 = 2s & y_2 = 3 + s & z_2 = -3 + 4s
\end{matrix} \end{cases}
$$

são retas **reversas**, isto é, são retas que não se interceptam e não são paralelas (não pertencendo, portanto, a um mesmo plano).

#### Resolução

As retas não são paralelas, pois os componentes de seus vetores diretores $\lang 1, 3, 1 \rang$ e $\lang 2, 1, 4 \rang$ não são proporcionais entre si.

As retas também não se intersectam pois, se houvesse intersecção, o seguinte sistema haveria uma solução:

$$
\begin{cases}1 + t = 2s \\ -2 + 3t = 3 + s \\ 4- t = -3 + 4s\end{cases}
$$

O que não é o caso para qualquer valor de $t$ e $s$.

### Exemplo 2

Encontre uma equação do plano que passa pelos pontos $P(1, 3, 2)$, $Q(3, -1, 6)$ e $R(5, 2, 0)$. 

#### Resolução

Os vetores **a** e **b** correspondentes a $\overrightarrow{PQ}$ e $\overrightarrow{PR}$ são

$$
\begin{cases}
\textbf a = \lang 3 - 1, -1 - 3, 6 - 2 \rang = \lang 2, -4, 4 \rang \\
\textbf b = \lang 5 - 1, 2 - 3, 0 - 2 \rang = \lang 5, 2, 0 \rang
\end{cases}
$$

Como tanto **a** quanto **b** pertencem ao plano, o produto vetorial $\textbf a \times \textbf b$ é ortogonal ao plano e pode ser tomado como o vetor normal **n**. Assim,

$$
\textbf n = \textbf a \times \textbf b = \left|\begin{matrix}
\textbf i & \textbf j & \textbf k \\
2 & -4 & 4 \\
4 & -1 & -2
\end{matrix}\right| = \left|\begin{matrix}
-4 & 4 \\
-1 & -2
\end{matrix}\right| \textbf i - \left|\begin{matrix} 
2 & 4 \\
4 & -2 \end{matrix}\right| \textbf j + \left|\begin{matrix}
2 & -4 \\
4 & -1
\end{matrix}\right| \textbf k =\\
(8 + 4) \textbf i - (-4 - 16) \textbf j + (-2 + 16) \textbf k =
\lang 12, 20, 14 \rang \equiv \lang 6, 10, 7 \rang
$$

Com o ponto $P(1, 3, 2)$ e o vetor normal **n**, uma equação do plano é

$$
6(x - 1) + 10(y - 3) + 7(z - 2) = 0 \implies  6x + 10y + 7z = 50
$$

### Exemplo 3

**a.** Determine o ângulo entre os planos $x + y + z = 1$ e $x - 2y + 3z = 1$

Os vetores normais a esses planos são

$$
\begin{matrix}
\textbf n_1 = \lang 1, 1, 1
\rang & \textbf n_2 = \lang 1, -2, 3\rang
\end{matrix}
$$

Portanto, se $\theta$ é o ângulo entre os dois planos,

$$
\cos \theta = \frac{\textbf n_1 \cdot \textbf n_2}{|\textbf n_1||\textbf n_2|}
= \frac{1(1) + 1(-2) + 1(3)}{\sqrt{1 + 1 + 1} \sqrt{1 + 4 + 9}} =
\frac 2{\sqrt{42}}\\\ \\
\therefore \theta = \cos^{-1} \left(\frac 2{\sqrt{42}}\right) \approx 72\degree
$$

**b.** Determine as equações simétricas da reta intersecção $L$ desses dois planos.

Primeiro precisamos encontrar um ponto em $L$. Por exemplo, podemos achar o ponto onde a reta intercepta o plano $xy$ tomando $z = 0$ na equação dos dois planos. Isso fornece as equações $x + y = 1$ e $x - 2y = 1$, cuja solução é $x = 1$, $y = 0$. Portanto, o ponto $(1, 0, 0)$ encontra-se em $L$.

Observe que, como $L$ pertence a ambos os planos, é perpendicular ao vetor normal de ambos os planos. Então, um vetor **v** paralelo a $L$ é dado pelo produto vetorial

$$
\textbf v = \textbf n_1 \times \textbf n_2 = \left|\begin{matrix}
\textbf i & \textbf j & \textbf k \\
1 & 1 & 1 \\
1 & -2 & 3
\end{matrix} \right| = 5 \textbf i - 2 \textbf j - 3 \textbf k
$$

e assim as equações simétricas de $L$ podem ser escritas como

$$
\frac{x - 1}5 = \frac y{-2} = \frac z{-3}
$$