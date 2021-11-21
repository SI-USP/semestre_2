# Atividade 6

> Resolução dos exercícios obrigatórios, feita por Guilherme de Abreu Barreto[^1].

## Capítulo 12.3

### Exercício 39

Determine o vetor projeção e a projeção escalar de **b** sobre **a** onde

$$
\textbf a = \lang -5,12 \rang;\, \textbf b = \lang 4,6\rang
$$

### Resolução

$\text{comp}_\textbf a \textbf b = \dfrac{\textbf a \cdot \textbf b}{|\textbf a|} = \dfrac{-5 \cdot 4 + 12 \cdot 6}{\sqrt{(-5)^2 + 12^2}} = 4$

$\text{proj}_\textbf a \textbf b = \dfrac{\textbf a}{|\textbf a|}\text{comp}_\textbf a \textbf b = \dfrac 4{13}\lang-5,12\rang = \left\lang\dfrac{-20}{13}, \dfrac{48}{13} \right\rang\ \blacksquare$

### Exercício 63

A *Lei do Paralelogramo* afirma que

$$
|\textbf a + \textbf b|^2 + |\textbf a - \textbf b|^2 =
2 |\textbf a|^2 + 2|\textbf b|^2
$$

Dê uma interpretação geométrica da Lei do Paralelogramo e a demonstre

#### Resolução

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/8547e17775bc6c2b5c4708c0fc4e8a0575190eb4.png" title="" alt="" data-align="center">

Considere o paralelogramo acima. É possível aferir o comprimento de suas diagonais à partir do comprimento de seus lados. De fato, podemos aferi-las separadamente usando a *Lei dos Cossenos*:

$|\overline{BD}|^2 =
|\overline{AD}|^2 + |\overline{AB}|^2 - 2 |\overline{AD}||\overline{AB}|\cos \theta
$

e

$|\overline{AC}|^2 =
|\overline{AD}|^2 + |\overline{CD}|^2 - 2 |\overline{AD}||\overline{CD}|\cos(\pi - \theta)
= \\ |\overline{AD}|^2 + |\overline{CD}|^2 - 2 |\overline{AD}||\overline{CD}|[\cos \pi \cdot \cos \theta + \cancel{\sin \pi \cdot \sin \theta}] = \\
|\overline{AD}|^2 + |\overline{CD}|^2 + 2 |\overline{AD}||\overline{CD}|\cos\theta$

Substituindo o comprimento dos lados e diagonais por sua representação vetorial ($|\textbf a| = |\overline{AD}| = |\overline{BC}|$, $|\textbf b| = |\overline{AB}| = |\overline{CD}|$, $|\textbf{a + b}| = |\overline{AC}|$, $|\textbf a - \textbf b| = |\overline{BD}|$) e somando-se as equações anteriores, temos demonstrada a *Lei do Paralelogramo*:

$$
+ \begin{cases}
|\textbf a - \textbf b|^2 =
|\textbf a|^2 + |\textbf b|^2
- 2 |\textbf a||\textbf b|\cos \theta \\
|\textbf{a + b}|^2 =
|\textbf a|^2 + |\textbf b|^2
+ 2 |\textbf a||\textbf b|\cos \theta \\
\end{cases}\\\ \\ \therefore |\textbf a + \textbf b|^2 + |\textbf a - \textbf b|^2 =
2 |\textbf a|^2 + 2|\textbf b|^2\ \blacksquare
$$

## Capítulo 12.4

### Exercício 37

Utilize o produto misto para mostrar que os vetores $\textbf u = \textbf i + 5\textbf j - 2 \textbf k$, $\textbf v = 3 \textbf i - \textbf j$ e $\textbf w = 5 \textbf i + 9 \textbf j - 4 \textbf k$ são coplanares.

#### Resolução

Conforme a definição de produto misto, dados vetores são complanares se o produto misto destes for igual à 0. Avaliemos o presente caso.

$ \textbf u (\textbf v \times \textbf w) =
\left|\begin{matrix}
1 & \phantom{-}5 & -2 \\ 3 & -1 & \phantom{-}0 \\ 5 & \phantom{-}9 & -4
\end{matrix}\right| =
1 \left |\begin{matrix}
-1 & \phantom{-}0 \\ \phantom{-}9 & -4
\end{matrix}\right | - 5 \left |\begin{matrix}
3 & \phantom{-}0 \\ 5 & -4
\end{matrix}\right | +
(-2) \left |\begin{matrix}
3 & -1 \\ 5 & \phantom{-}9
\end{matrix}\right | = \\\ \\
4 - 5(-12) - 2(27 + 5) = 0\ \blacksquare $

### Exercício 49

Demonstre que $(\textbf a - \textbf b) \times (\textbf a + \textbf b) = 2(\textbf a \times \textbf b)$.

#### Resolução

Lembremos as seguintes propriedades:

**P1.** $|\textbf a \times \textbf b| = |\textbf a||\textbf b| \sin \theta$ onde $\theta$ é o ângulo entre **a** e **b**, $0 \le \theta \le \pi$;

**P2.** $\textbf a \times \textbf b = - \textbf b \times \textbf a$;

**P3.** $\textbf a \times (\textbf b + \textbf c) = \textbf a \times \textbf b + \textbf a \times \textbf c$;

Logo,

$(\textbf a - \textbf b) \times (\textbf a + \textbf b) = \underbrace{\textbf a \times (\textbf a + \textbf b) - \textbf b \times (\textbf a + \textbf b)}_{\textbf{P3}} = \\\ \\ \underbrace{\textbf a \times \textbf a}_{\textbf{P1}} + \textbf a \times \textbf b\ \underbrace{- \textbf b \times \textbf a}_{\textbf{P2}} - \underbrace{\textbf b \times \textbf b}_{\textbf{P1}} = \cancel{\textbf a^2\sin 0}\ + 2 (\textbf a \times \textbf b) - \cancel{\textbf b^2\sin 0}\ = 2 (\textbf a \times \textbf b)\ \blacksquare$

[^1]: nUSP 12543033; Turma 04