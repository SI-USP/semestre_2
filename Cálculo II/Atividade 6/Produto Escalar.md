# Produto Escalar

## Definição

Se $\textbf a = \langle a_1,\dots, a_n\rangle$ e $\textbf b = \langle b_1, \dots, b_n \rangle$, então o **produto escalar** de $\textbf a$ e $\textbf b$ é o número $\textbf a \cdot \textbf b$ dado por

$$
\textbf a \cdot \textbf b = a_1b_1 + \cdots + a_nb_n
$$

Assim, para achar o produto escalar de a e b, multiplicamos as componentes correspondentes e somamos. O resultado não é um vetor. É um número real, isto é, um escalar, por isso o nome.

### Exemplos

1. $\langle 2, 4 \rangle \cdot \langle 3, -1 \rangle = 2 \cdot 3 + 4 \cdot -1 = 2$

2. $(\textbf i + 2 \textbf j - 3 \textbf k) \cdot (2 \textbf j - \textbf k) = 1 \cdot 0 + 2 \cdot 2 -3 \cdot -1 = 7$

### Propriedades

Se $\textbf a$, $\textbf b$ e $\textbf c$ são vetores de $V_3$, $\textbf e$ o vetor nulo, e $c$ um escalar, então:

1. $\textbf a \cdot \textbf a = |\textbf a |^2$

2. $\textbf a \cdot \textbf b = \textbf b \cdot \textbf a$

3. $\textbf a \cdot (\textbf b + \textbf c) = \textbf a \cdot \textbf b + \textbf a \cdot \textbf c$

4. $(c \textbf a) \cdot \textbf b = c(\textbf a \cdot \textbf b) = \textbf a \cdot (c \textbf b)$

5. $\textbf e \cdot \textbf a = 0$

## Teorema

O produto escalar $\textbf a \cdot \textbf b$ tem uma interpretação geométrica em termos do **ângulo** $\theta$ **entre** $\textbf a$ e $\textbf b$:

$$
\textbf a \cdot \textbf b = |\textbf a| |\textbf b| \cos \theta
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-17-18-37-42-image.png" title="" alt="" data-align="center">

> Figura 1

### Demonstração

Se aplicarmos a Lei dos Cossenos no triânglo $OAB$ da Figura 1, obteremos

$$
|AB|^2 = |OA|^2 + |OB|^2 - 2 |OA||OB| \cos \theta
$$

Onde $|OA| = |\textbf a|$, $|OB| = |\textbf b|$ e $|AB| = |\textbf a - \textbf b|$. Ou seja,

$|\textbf a - \textbf b|^2 = |\textbf a|^2 + |\textbf b|^2 - 2|\textbf a||\textbf b| \cos \theta = \\
|\textbf a|^2 - 2 \textbf a \cdot \textbf b + |\textbf b|^2 = |\textbf a|^2 + |\textbf b|^2 - 2|\textbf a||\textbf b| \cos \theta= \\ - 2 \textbf a \cdot \textbf b = - 2|\textbf a||\textbf b| \cos \theta = \\ \textbf a \cdot \textbf b = |\textbf a||\textbf b| \cos \theta$

### Exemplo

Determine o ângulo entre dois vetores $\textbf a = \lang 2, 2, -1\rang$ e $\textbf b \lang 5, -3, 2 \rang$.

$\textbf a \cdot \textbf b = |\textbf a| |\textbf b| \cos \theta \implies \cos \theta = \dfrac{\textbf a \cdot \textbf b}{|\textbf a| |\textbf b|} = \dfrac{2(5) + 2(-3) + 2(-1)}{\sqrt{2^2 + 2^2 + (-1)^2} \cdot \sqrt{5^2 + (-3)^2 + 2^2}} = \dfrac 2{3\sqrt{38}}$

### Casos específicos

Dois vetores $\textbf a$ e $\textbf b$ formam um ângulo

- ortogonal se $\textbf a \cdot \textbf b = 0 \implies \theta = \frac 12 \pi$;

- agudo se $\textbf a \cdot \textbf b > 0$;

- obtuso se $\textbf a \cdot \textbf b < 0$.

## Ângulos Diretores

Os ângulos $\alpha$, $\beta$ e $\gamma$ (no intervalo $[0, \pi]$) que $\textbf a$ faz com os eixos coordenados positivos $x$, $y$ e $z$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-18-14-46-40-image.png" title="" alt="" data-align="center">

Os cossenos desses ângulos diretores são chamados **cossenos diretores** do vetor $\textbf a$.

$$
\cos \alpha = \dfrac{a_1}{|\textbf a|};\,
\cos \beta = \dfrac{a_2}{|\textbf a|};\,
\cos \gamma = \dfrac{a_3}{|\textbf a|}.
$$

Onde

$$
\cos^2 \alpha + \cos^2 \beta + \cos^2 \gamma = 1
$$

Por isso

$$
\textbf a = \lang a_1, a_2, a_3 \rang =
\lang|\textbf a| \cos \alpha,|\textbf a| \cos \beta, |\textbf a| \cos \gamma\rang =
|\textbf a|\lang \cos \alpha, \cos \beta, \cos \gamma\rang
$$

Disso implica que

$$
\dfrac 1{|\textbf a|} \textbf a = \lang \cos \alpha, \cos \beta, \cos \gamma\rang
$$

## Projeções

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-18-16-19-30-image.png" title="" alt="" data-align="center">

A figura acima mostra as representações $\overrightarrow{PQ}$ e $\overrightarrow{PR}$ de dois vetores $\textbf a$ e $\textbf b$ com a mesma origem $P$. Se $S$ é o pé do perpendicular a partir de $R$ à reta contendo $\overrightarrow{PQ}$ , então o vetor coam representação $\overrightarrow{PS}$ é chamado **vetor projeção** de $\textbf b$ sobre $\textbf a$ e é denotado por $\text{proj}_\textbf a \textbf b$.

$$
\text{proj}_\textbf a \textbf b =
\left(\frac{\textbf a \cdot \textbf b}{|\textbf a|}\right) \frac{\textbf a }{|\textbf a|}
$$

> Onde $\frac{\textbf a }{|\textbf a|}$ é o *versor* (vetor unitário) de $\textbf a$.

A projeção escalar de $\textbf b$ sobre $\textbf a$ (também chamada componente de $\textbf b$ ao longo de $\textbf a$) $\text{comp}_\textbf a \textbf b$ é definida como o módulo com sinal do vetor projeção, cujo valor é dado pelo número $|\textbf b| \cos \theta$, onde $\theta$ é o ângulo entre $\textbf a$ e $\textbf b$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%206/Imagens/2021-10-18-16-55-55-image.png" title="" alt="" data-align="center">

$$
\text{comp}_\textbf a \textbf b = |\textbf b| \cos \theta =
\frac{\textbf a \cdot \textbf b}{|\textbf a|}
$$

> Observe que o vetor projeção é a projeção escalar vezes o versor de $\textbf a$:
> 
> $$
> \text{proj}_\textbf a \textbf b = \frac{\textbf a }{|\textbf a|}\text{comp}_\textbf a \textbf b
> $$