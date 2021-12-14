# Enumeração e Combinatória

Técnicas de contagem de objetos com determinadas propriedades.

## Princípios básicos

Dados dois eventos $A$ e $B$ disjuntos, se

- o evento $A$ pode ocorrer de $n$ maneiras diferentes e

- o evento $B$ pode ocorrer de $m$ maneiras diferentes,

**Regra da soma:** então o evento $A\ ou\ B$ pode ocorrer de $n + m$ maneiras diferentes ($|A \cup B| = |A| + |B|$).

**Regra do produto:** então o evento $A\ e\ B$ pode ocorrer de $nm$ maneiras diferentes ($|A \times B| = |A||B|$).

## Permutações

Arranjos de objetos em que a ordem destes é significativa.

### r-permutações

Dado um conjunto de elementos de tamanho $n$, denomina-se $r$-permutação de $n$ objetos o conjunto de combinações possíveis com um subconjunto de $r \le n$ objetos.

Por exemplo, duas possíveis 3-permutações das 4 letras A, B, C, D são ACB e DBC.

### Teorema

O número de $r$-permutações de $n$ objetos é dado por

$$
P(n,r) = n(n - 1)\dots (n - r+ 1) = \dfrac{n!}{(n - r)!}
$$

### Corolário

O número de permutações de $n$ objetos é dado por $P(n,n) = n!$ . Neste caso escreve-se simplesmente $P(n)$ ou $P_n$.

### Permutações com repetições

Quando alguns dos objetos a serem permutados são idênticos, temos de considerar uma redução no número de permutações distintas.

#### Teorema

O número $P(\alpha_1, \dots, \alpha_k, \beta_1,\dots, \beta_l, \theta_1,\dots,\theta_m, \dots)$ de permutações de $n$ objetos onde todos $\alpha$, $\beta$, e $\theta$ são idênticos com quaisquer outros $\alpha$, $\beta$ e $\theta$ respectivamente, é:

$$
P^{\alpha_1, \dots, \alpha_k, \beta_1,\dots, \beta_l, \theta_1,\dots,\theta_m, \dots}_{\alpha_1 + \dots + \alpha_k + \beta_1 + \dots + \beta_l + \theta_1 + \dots + \theta_m + \dots} = \dfrac{(\alpha + \beta + \theta + \dots )!}{\alpha!\beta!\theta!\dots!}
$$

Também denotado enquanto número **multinomial**:

$$
\left(\begin{matrix} & & n! & & \\ n_1! & n_2! & n_3! & n_4! & n_5!\end{matrix}\right)
$$

### Permutações com reposição

O número de $r$-permutações de $n$ objetos diferentes que podem ser repostos ou, equivalentemente, que existem em quantidade ilimitada é dado, pela regra do produto, por

$$
U(n,r) = n^r
$$

## Combinações

Seleção de objetos de um arranjo no qual a ordem não é significativa.

### Teorema

O número de combinações de $r$ objetos de um arranjo de $n$ objetos é dado por

$$
C(n,r) = \dfrac{n(n-1)\dots (n - r + 1)}{r!} = \dfrac{n!}{r!(n-r)!}
$$

### Coeficientes binomiais

O número $C_{(n,r)}$ possui um símbolo especial para ele que é

$$
C_{(n,r)} = \frac{n!}{r!(n - r)!} = \binom nr
$$

denominado "coeficiente binomial". Onde

- $C_{(n,0)} = \binom n0 = 1$;

- $C_{(n,r)} = \binom nr = 0$ se $r < 0$ ou $r > n$;

- $C_{(n,r)} = \binom{-n}r = (-1)^r \binom{n + r - 1}r$;

- $C_{(-n,-r)} = \binom{-n}{-r} = (-1)^{n + r}\binom{r - 1}{n - 1}$[^1]

- $C_{(n,r)} = \binom nr = \binom n{n - r} = C_{(n, n - r)}$

- $C_{(n + 1,r)} = \binom {n + 1}r = \binom nr + \binom n{r - 1} = C_{(n,r)} +  C_{(n, r - 1)}$

### Combinações com repetições

O conjunto $R(n,k)$ de $k$ combinações de $n$ objetos distintos os quais podem ocorrer cada qual até $k$ vezes e somados totalizam $k$ itens.

#### Método de Euler

Trata-se de um método para calcular o número de combinações distintas com repetições mapeando-as a elementos de um arranjo sem repetições.

Considere uma sequência de 4 elementos numerados de 1 à 4, onde busca-se compor uma combinação de 5 elementos. Ordenada em ordem crescente, uma combinação possível com repetição seria $C = \{1,2,2,2,4\}$. Criemos um arranjo $A$ de igual tamanho à partir deste conjunto, aplicando a regra de transformação $a_i = c_i + i - 1$. Teremos como resultado $A= \{1,2,4,5,8\}$, um arranjo sem repetição de elementos, mais correspondente a uma combinação onde há repetições.

À partir dai, podemos calcular pelo binômio de Newton o número de arranjos distintos:

$$
R(n,k) = \binom {n + k -1}k
$$

Como a regra de transformação é bijetora (produz valores $a_i$ distintos para cada valor $c_i$ também distinto), tem-se que este binômio é representativo da variedade de combinações possíveis. 

#### Método "bolas e barras"

Em uma $k$-combinação de $n$ itens com repetição, temos $x_1$ elementos do tipo 1, $x_2$ elementos do tipo 2, etc. Tal que

$$
x_1 + x_2 + \dots + x_n = k
$$

O número de $k$-combinações de $n$ itens com repetição é dado, portanto, pelo número de soluções de soluções para a equação acima, sendo que $x_i \ge 0$.

O método de bolas e barras consiste em uma ilustração que representa unidades enquanto bolas e a distinção entre elementos enquanto barras:

$$
\underbrace{\circ \circ \circ}_{x_1} | \underbrace \circ_{x_2} || 
\underbrace{\circ \circ}_{x_3} | \dots | \underbrace \circ_{x_n}
$$

Pelo desenho observa-se que existem $k$ bolas e $n - 1$ barras cujas posições são transponíveis entre si. Assim, cada solução para a equação $x_1 + \dots x_n = k$ pode corresponder a uma configuração das bolas e barras. Ou seja, temos de escolher onde colocar $n - 1$ barras dentre $n - 1 + k$ posições possíveis. Esse número nada mais é que o número de seleções de $n - 1$ itens de um total de $n - 1 + k$ itens sem repetição:

$$
R(n,k) = \binom{n - 1 + k}{n - 1} = \binom{n + k - 1}k
$$

[^1]: Verificar este resultado. "Livro do Knauf"