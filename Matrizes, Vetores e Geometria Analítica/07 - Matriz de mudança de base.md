# Matriz de mudança de base

## Problema 1

Se a matriz de mudança da base $B$ para a base $C$ é $P = (a_{ij})$ e a matriz de mudança de base $C$ para outra base $D$ (do mesmo espaço) é $Q = (b_{ij})$, qual é a matriz de mudança de $B$ para $D$?

### Resolução

$P \cdot Q$. Suponhamos $B = \{u_1, \cdots, u_n\}$, $C = \{v_1, \cdots, v_n\}$ e $D = \{w_1, \cdots, w_n\}$. A definição de matriz de mudança nos garante então que:

$$
v_j = \sum^n_{i = 1} a_{ij}u_i\ (\text{onde } j = 1, \dots, n) \text{ e
} w_k = \sum^n_{j = 1} b_{ik}u_j\ (\text{onde } k = 1, \dots, n)
$$

Daí

$$
\displaystyle w_k = \sum^n_{j = 1} b_{jk} \left(\sum^n_{i = 1} a_{ij}u_i\right)
= \sum^n_{i = 1} \left(\sum^n_{j = 1} a_{ij}b_{jk}\right) u_i\ (\text{onde }k = 1, \dots , n)
$$

#### Nota

Uma consequência do que acabamos de ver é que uma matriz de mudança de bases é sempre inversível[^1].

Sejam  $P$ a matriz de mudança de base de $B$ para $C$ e $Q$ a matriz de mudança de $C$ para $B$.

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matrizes,%20Vetores%20e%20Geometria%20Analítica/Imagens/2021-10-03-16-41-22-image.png" title="" alt="" data-align="center">Do diagrama acima decorre que $PQ = QP = I_n$. Logo $P$ é inversível e $P^{-1}$ é simplesmente a matriz de mudança de $C$ para $B$.

## Problema 2

X

## Problema 3

Se $\{u_1, \dots, u_n\}$ é uma base de $V$ e $P = (a_{ij})$ é uma matriz inversível, então os n vetores $v_j = \sum^n_{i = 1} a_{ij}u_i$ onde $(j = 1, \dots, n)$ também formam uma base de $V$?

### Resolução

Suponhamos $\sum^n_{j = 1}x_jv_j = e$. Sendo $x_j$ escalares quaisquer. Então

$$
\sum^n_{j = 1} x_j\left(\sum^n_{i = 1} \alpha_{ij}u_i\right) =
\sum^n_{j = 1} \left(\sum^n_{i = 1} \alpha_{ij}x_j\right) u_i = e
$$

Como este sistema é homogêneo e a matriz dos seus coeficientes é $P$ (inversível) então $x_1 = \dots = x_n = 0$. Logo $\{v_1, \dots, v_n\}$ é L.I. e também é base de $V$.

Com isso concluímos que **qualquer** matriz inversível pode ser utilizada enquanto uma matriz de mudança de base e **qualquer** matriz de mudança de base também é uma matriz inversível.

[^1]: A matriz inversa é obtida quando a multiplicação da matriz original por esta resulta na matriz identidade.