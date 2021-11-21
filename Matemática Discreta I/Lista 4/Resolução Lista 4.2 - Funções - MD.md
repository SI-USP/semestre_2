# Resolução da [Lista 4](https://drive.google.com/file/d/1ls29hxpLdYCc-sF8LkKYiFCs1M79PUKb/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## Funções

### Exercício 1

**a.** Não pois, existem mulheres solteiras as quais, por definição, não são contempladas por esta relação.

**b.** Está bem definida.

### Exercício 2

Vamos admitir dois conjuntos quaisquer $X$, de tamanho $n$, e $Y$ de tamanho $m$, sendo $m \ge n$, e $n, m \in \N$. Estes estão relacionados entre si pela função injetora $f: X \to Y$. Então, pela definição de função injetora, para quaisquer elementos $x_i, x_j$, $1 \le i < j \le n$, em $X$ para os quais $x_i \not = x_j$ correspondem dois valores $f(x_i)$ e $f(x_j)$ em $Y$ os quais $f(x_i) \not = f(x_j)$. Logo, segue que a mesma função no sentido inverso $f^{-1} : Y \to X$ produz um pareamento de um para um tal que para quaisquer valores $f(x_i) \not = f(x_j)$ resultam valores $x_i \not = x_j$.

No mais, a função composta  $f^{-1} \circ f$ comporta-se tal qual uma função identidade $\text{id}_n$ para $X$ se e somente se $m \ge n$. Por um lado, esta mapeia um valor $x_i$ com ele próprio:

$$
f^{-1} \circ f (x_i) = f^{-1}(f(x_i)) = x_i
$$

Por outro, isso só é possível para valores de $i \le n$ pois $(x_{n+1},f(x_{n + 1})) \not \in f$.

### Exercício 3

Vamos admitir que os conjuntos $X$, $Y$ e $Z$ possuam tamanhos $r$, $s$ e $t$. Ainda, que os índices $i$, $j$, $k$ são tais que $1 \le k \le t \le j \le s \le i \le r$, sendo $i,j,k,r,s,t \in \N$. Assim, $X = \{x_1, \dots \, x_r\}$, $Y = \{y_1, \dots , y_s\}$, $Z = \{z_1, \dots , z_t\}$. Segue da definição de sobrejeção que

- $\exists x_i \in X$ tal que $f(x_i) = y_j$ sendo $y_j \in Y$. Ainda, $Y = \{f(x_1), \dots, f(x_r)\}$.

- $\exists y_j \in Y$ tal que $g(y_j) = z_k$ sendo $z_k \in Z$. Ainda, $Z = \{g(y_1), \dots, g(y_s)\}$.

Assim, se aplicarmos a função $g \circ f$ sobre $X$ teremos:

$\{g \circ f(x_1), \dots, g \circ f(x_r)\} =
\{g (f(x_1)), \dots, g (f(x_r))\} = 
\{g (y_1), \dots, g (y_s)\} = \\
\{z_1, \dots, z_t\} = Z$

Ou seja $g \circ f$ também é sobrejetora ao mapear $g \circ f: X \to Z$.

### Exercício 4

Quando dizemos que $(x + 1)^2 = x^2 + 2x + 1$ estamos indicando que **para qualquer** número $x$ tais expressões possuem o mesmo valor. Isso também pode ser interpretado dizendo que ambos os lados da igualdade representam **a mesma função**.

Retomando o problema em questão, temos que $g \circ f = h \circ f  \implies g(f(x)) = h(f(x)), f(x) \in Y$. Como $f$ é sobrejetora não existe elemento em $Y$, domínio tanto de $g$ e $h$, o qual não possa ser descrito na forma $f(x)$. Assim sendo, se $g(f(x)) = h(f(x))$ para qualquer valor $f(x)$, por definição estamos falando de funções iguais entre si.

### Exercício 5

Em concordância com a definição de função um grafo orientado é adequado a representação de função se e somente se este indica relações entre pares ordenados. Por exemplo:

| Representativo de uma função                                                                                                                                 | Não representativo de uma função                                                                                                                             |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/e665c17467939fa319f8cd06741fbab4109a1000.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%204/Imagens/0d0ace6839a652e2515cebb632b852b8ee4e0334.png) |

No primeiro gráfico vemos que para qualquer nó $x$ à uma relação com um único $f(x)$. No segundo gráfico, um **grafo acíclico dirigido**, isso não ocorre: podemos destacar a relação $f(11) = \{2, 9, 10\}$.

### Exercício 6

**a.** A função $f: \Z \to \Z$ pode ser definida como

$$
f = \{(x,y): x = 2k \to y = 1\ \underline \lor\ x = 2k + 1 \to y = -1, \forall k \in \Z\}
$$

Onde $\underline \lor$ é o sinal para a expressão "ou exclusivo"

**b.** Procederemos por exaustão.

- $z_1$ par e $z_2$ par implicam $z_1 + z_2$ par.
  
  $$
  2k + 2k_2 = 2(k + k_2) = 2k_3
  $$
  
  Logo,
  
  $$
  f(z_1 + z_2) = 1 = 1 \cdot 1 = f(z_1)f(z_2)
  $$

- $z_1$ par e $z_2$ ímpar, ou vice versa, implica $z_1 + z_2$ ímpar.
  
  $$
  2k + 2k_2 + 1 = 2(k + k_2) + 1 = 2k_3 + 1
  $$
  
  Logo,
  
  $$
  f(z_1 + z_2) = -1 = -1 \cdot 1 = f(z_1)f(z_2)
  $$

- $z_1$ e $z_2$ impares implicam, $z_1 + z_2$ par.
  
  $$
  2k + 1 + 2k_2 + 1 = 2(k + k_2 + 1) = 2k_3
  $$
  
  Logo,
  
  $$
  f(z_1 + z_2) = 1 = -1 \cdot -1 = f(z_1)f(z_2)
  $$

**c.** Procederemos por exaustão.

- $z_1$ par e $z_2$ par implicam $z_1z_2$ par.
  
  $$
  2k \cdot 2k_2 = 2(2kk_2) = 2k_3
  $$
  
  Logo,
  
  $$
  f(z_1z_2) = 1 = 1 \cdot 1 = f(z_1)f(z_2)
  $$

- $z_1$ par e $z_2$ ímpar, ou vice versa, implica $z_1z_2$ par.
  
  $$
  2k(2k_2 + 1) = 2[k(2k_2 + 1)] = 2k_3
  $$
  
  Logo,
  
  $$
  f(z_1z_2) = 1 \not = -1 \cdot 1 = f(z_1)f(z_2)
  $$

- $z_1$ e $z_2$ impares implicam, $z_1z_2$ ímpar.
  
  $$
  (2k + 1)(2k_2 + 1) = 4kk_2 + 2k + 2k_2 + 1 = 2(2kk_2 + k + k_2) + 1 = 2k_3 + 1
  $$
  
  Logo,
  
  $$
  f(z_1z_2) = - 1 \not = -1 \cdot -1 = f(z_1)f(z_2)
  $$
  
  **d.** $f(x) = 1$.
  
  ### Exercício 7
  
  **a.** $f_{c,d} \circ f_{a,b}(x) = f_{c,d}(f_{a,b}(x)) = c(ax + b) + d = \underbrace{(ca)}_{=\ p}x + \underbrace{(cb + d)}_{=\ q} = f_{p,q} (x)$
  
  **b.** $\big \{ f_{a,b} \circ f_{c,d}(x) = a(cx + d) + b = (ca)x + (ad + b) \\ \therefore f_{a,b} \circ f_{c,d}(x) = f_{c,d} \circ f_{a,b}(x) \implies \cancel{(ca)x} + (cb + d) = \cancel{(ca)x} + (ad + b)\\ \implies b(c - 1) = d(a - 1)$
  
  **c.** $f_{a,b} \circ f_{1,1} = f_{1,1} \circ f_{a,b} \implies a(x + 1) + b = 1(ax + b) + 1\\ \implies \cancel{ax} + \cancel b + 1 = \cancel{ax} + a + \cancel b \implies a = 1$
  
  Assim sendo, desde que $a = 1$ esta expressão é verdadeira $\forall b \in \R$.
  
  **d.** Sendo $y = f_{a,b}(x) = ax + b$, a função inversa pode ser expressa por:
  
  $$
  x = ay + b \implies f^{-1}_{a,b} (x) = \frac{b - x}a
  $$
  
  ### Exercício 8
  
  Para a função
  
  ```c
  long long unsigned int ackermann (unsigned int m, unsigned int n) {
      if (m == 0)
          return n + 1;
      if (n == 0)
          return ackermann (m - 1, 1);
      return ackermann (m - 1, ackermann(m, n - 1));
  }
  ```
  
  Os resultados foram, respectivamente:
  
  ```
  A(1,1) = 3
  A(1,2) = 4
  A(2,2) = 7
  A(3,2) = 29
  ```
  
  Para o valor $A(4,2)$ o algoritmo foi executado até que a memória a este alocada fosse esgotada (`segmentation fault`) . Não obstante, conforme constata o artigo referente ao algoritmo na Wikipédia, computadores otimizados para esta tarefa calcularam o resultado de 19,729 dígitos decimais: 2^65536^ − 3.
  
  ### Exercício 9 (*Divertissement*)
  
  Consideremos uma lista exaustiva dos infinitos números entre 0.0 e 1.0:
  
  | 0.       | 1        | 1        | 1        | 1        | 1        | 1        | 1        | $\dots$  |
  | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |
  | 0.       | 1        | 0        | 0        | 0        | 0        | 0        | 0        | $\dots$  |
  | 0.       | 3        | 3        | 3        | 3        | 3        | 3        | 3        | $\dots$  |
  | 0.       | 1        | 4        | 2        | 5        | 9        | 2        | 6        | $\dots$  |
  | 0.       | 9        | 9        | 9        | 9        | 8        | 9        | 7        | $\dots$  |
  | 0.       | 2        | 8        | 5        | 1        | 2        | 8        | 3        | $\dots$  |
  | 0.       | 4        | 2        | 8        | 5        | 1        | 5        | 2        | $\dots$  |
  | 0.       | 5        | 7        | 2        | 1        | 4        | 2        | 1        | $\dots$  |
  | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\ddots$ |

Em seguida aplicamos sobre esta lista uma função em uma diagonal que altera o valor da entrada em uma unidade, digamos, $f = \{(x,y) : x < 9 \to y = x + 1\ \underline \lor\ x = 9 \to y = 0\}$.

| 0.       | 1        | 1        | 1        | 1        | 1        | 1        | 1        | $\dots$  |
| -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |
| 0.       | **2**    | 0        | 0        | 0        | 0        | 0        | 0        | $\dots$  |
| 0.       | 3        | **4**    | 3        | 3        | 3        | 3        | 3        | $\dots$  |
| 0.       | 1        | 4        | **3**    | 5        | 9        | 2        | 6        | $\dots$  |
| 0.       | 9        | 9        | 9        | **0**    | 8        | 9        | 7        | $\dots$  |
| 0.       | 2        | 8        | 5        | 1        | **3**    | 8        | 3        | $\dots$  |
| 0.       | 4        | 2        | 8        | 5        | 1        | **6**    | 2        | $\dots$  |
| 0.       | 5        | 7        | 2        | 1        | 4        | 2        | **2**    | $\dots$  |
| $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\vdots$ | $\ddots$ |

O número resultante é de forma tal que encontra-se contido nos reais, mas é diferente de todos os infinitos números aqueles com que cruza na tabela, pois difere destes em pelo menos um dígito. Por isso, os números reais são de grandeza superior a uma infinidade contável: estes são incontáveis.

[^1]: nUSP: 12543033; Turma 04