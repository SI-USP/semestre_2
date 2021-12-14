# Algebra booleana

## Relação com outras algebras

É possível constatar uma semelhança entre as operações encontradas nas algebras de proposição e de conjuntos, de tal forma a encontrarmos as seguintes equivalências:

- $V \equiv \Omega$

- $\varnothing \equiv F$

- $\cup \equiv \lor$

- $\cap \equiv \land$

Isso se deve ao fato destas serem instâncias de um mesmo tipo de algebra: a **algebra booleana**.

## Definição de algebra booleana

A algebra booleana está definida para os seguintes termos:

- Existe um conjunto $S$ contendo pelo menos dois elementos ditos **especiais**, aqui denominados 0 e 1, onde
  
  - 0 é o elemento nulo aditivo;
  
  - e 1 é o elemento nulo multiplicativo.

- Existem duas operações binárias (que relacionam dois elementos):
  
  - Adição ($+$) e
  
  - Multiplicação ($\cdot$)[^1];

- Existe uma operação unária que associa cada elemento $x \in S$ a um elemento $x' \in S$, o complemento de $x$ em $S$.

### Axiomas

A sêxtupla $B$ de elementos $B = \lang S, 0, 1, + , \cdot, ' \rang$ é uma algebra booleana se esta exibe as seguintes propriedades:

**P1.** Comutatividade

- $x + y = y + x$

- $x \cdot y = y \cdot x$

**P2.** Associatividade

- $(x + y) + z = x + (y + z)$

- $(x \cdot y)\cdot z = x \cdot (y \cdot z)$

**P3.** Distributividade

- $x + (y \cdot z) = (x + y) \cdot (x + z)$[^2]

- $x \cdot (y + z) = (x \cdot y) + (x \cdot z)$

**P4.** Identidade

- $x + 0 = x$

- $x \cdot 1 = x$

**P5.** Complementariedade

- $x + x' = 1$

- $x \cdot x' = 0$

**P6.** Precedência: $' > \cdot > +$. Exemplo:

- $x \cdot y + z = (x \cdot y) + z$

- $x \cdot y' = x \cdot(y')$

Por isso a relação com as algebras de proposição e de conjuntos: estas respeitam esses axiomas e podem ser descritas em termos das sêxtuplas

- $B = \lang P(A), \varnothing, A, \cup, \cap,' \rang$ (Algebra de conjuntos);

- $B = \lang \mathfrak L, F, V, \lor, \land, \neg \rang$ (Algebra de proposição);

- $B = \lang \{0,1\}, 0, 1, ||, \&\&, ! \rang$ (Algebra binária).

### Dualidade

Tal qual demonstrado nos axiomas, cada propriedade **dual** obtida pelas substituições $+ \leftrightarrow \cdot$, $0 \leftrightarrow 1$ também é válida. Assim como a reflexividade das relações de igualdade como, por exemplo,

$$
x \cdot (y + z) = (x \cdot y) + (x \cdot z) \leftrightarrow
(x \cdot y) + (x \cdot z) = x \cdot (y + z)
$$

### Resultados

**R1.** Em qualquer algebra booleana todo elemento $x$ satisfaz:

- $x + x = x$
  **Prova:**
  $x = x + 0 = x + xx' = (x + x)(x + x') = (x + x)\cdot 1 = x + x$

- $xx = x$
  **Prova:** é a expressão dual de $x + x = x$

**R2. Lei da absorção:** em qualquer algebra booleana quaisquer elementos $x,y$ satisfazem

- $x + xy = x$
  **Prova:** faremos uma analogia com a algebra proposicional e analisaremos a tabela verdade destas proposições:
  
  | x   | y   | xy  | x + xy |
  |:---:|:---:|:---:|:------:|
  | F   | F   | F   | F      |
  | F   | V   | F   | F      |
  | V   | F   | F   | V      |
  | V   | V   | V   | V      |

- $x (x + y) = x$
  **Prova:** é a expressão dual de $x + xy = x$.

**R3. Lei da nulidade:** em qualquer algebra booleana todo elemento $x$ satisfaz

- $x + 1 = 1$
  
  **Prova:**
  $x + 1 = x + \underbrace{(x + x')}_{\textbf{P5}} = \underbrace{(x + x)}_{\textbf{P2}} + x' = \underbrace{x}_{\textbf{R1}} + x' = \underbrace{1}_{\textbf{P5}}$

- $0x = 0$
  **Prova:** é a expressão dual de $x + 1 = 1$.

**R4.** Em qualquer algebra booleana quaisquer elementos $x, y$ tais que $x + y = 1$ e $xy = 0$, então $x = y'$.

**Prova:** Conforme a propriedade **P5**, $y + y' = 1$ e $yy' = 0$. Então se $x = y'$, tem-se que $x + y = 1$ e $xy = 0$.

**R5.** Em qualquer algebra booleana todo elemento $x$ satisfaz $x'' = (x')' = x$. Também temos que $0' = 1$ e portanto $1' = 0$.

**R6. Leis de DeMorgan:** Em qualquer algebra booleana quaisquer elementos $x$, $y$ satisfazem:

- $(x + y)' = x'y'$

- $(xy)' = x' + y'$

## Expressões Booleanas

Uma **expressão booleana** nas variáveis $x, y, \dots$ em uma algebra booleana $B$ é uma expressão bem formada pelas **variáveis** muitas vezes em conjunção com **operadores** e, por vezes, **parênteses**. Por exemplo:

$$
\alpha(x,y,z) = xyz' + x(y + z) + (x + z)'
$$

é uma expressão booleana pois podemos calcular seu valor nos elementos 0 e 1 (que pertencem a toda álgebra booleana):

$$
\alpha(0,1,0) = 0\cdot1 \cdot 0' + 0(1 + 0) + (0 + 0)' = 0 + 0 + 1 = 1
$$

**Teorema:** Toda expressão booleana pode ser colocada na forma de uma **soma de produtos fundamentais**, expressões que não contêm variáveis repetidas ou valem 0. Exemplos:

- $xy'z$ é um produto fundamental;

- $0 \cdot0\cdot\dots\cdot0$ é um produto fundamental;

- $xytx'$ não é (x está repetido). Posto em forma de produto fundamental, $xytx' = 0$.

### Variáveis e literais

Variáveis são os valores aqueles denominados por incógnitas $x, y, z$, etc. literais são instâncias destas variáveis na expressão. Por exemplo, em $xytx'$ temos duas literais, $x$ e $x'$, da variável $x$.

### Inclusão

Se $\alpha$ e $\beta$ são duas expressões booleanas, dizemos que $\beta$ inclui $\alpha$, denotado por $\alpha \le \beta$, se todo literal de $\alpha$ também aparece em $\beta$. Por exemplo: $xz' \le xyz't$, mas $xz \not \le xyz't$.

**Teorema:** pela lei da absorção, se $\alpha \le \beta$, então $\alpha + \beta = \alpha$. Exemplo:

$\begin{cases}
\alpha(x,z) = xz \\
\beta(x,y,z) = xyz
\end{cases}\\
\therefore \alpha + \beta = xz + xyz = xz + (xz)y = xz$

### Formas disjuntivas

Denominação dada às expressões booleanas aquelas nas quais

1. são compostas por uma soma de produtos fundamentais;

2. e nenhum destes produtos fundamentais inclui algum dos demais.

Exemplo:

- $xy + yz + xz$ é uma forma disjuntiva;

- $xy + xz + (xy)z$ não é.

**Teorema:** Toda expressão booleana pode ser representada em uma forma disjuntiva. É possível reduzir uma dada expressão à sua forma disjuntiva pela aplicação, por vezes sucessiva das leis de DeMorgan, da involução ($x'' = x$), e da absorção, para simplificar a expressão.

Exemplo:

$$
(x'y)'(x' + xyz') = (x + y') (x' + xyz') =
\cancel{xx'} + xyz' + x'y' + \cancel{x'yy'z'} = \\\ \\ x'y' + xyz'\ \blacksquare
$$

### Formas mínimas e implicantes primos

Sejam $\alpha$ e $\beta$ duas formas disjuntivas cada qual com $t$ termos e $l$ literais. Dizemos que $\alpha$ é **mais simples** que $\beta$ se

- $t_{\alpha} < t_{\beta}$ e $l_\alpha \le l_\beta$, ou

- $t_\alpha \le t_\beta$ e $l_\alpha < l_\beta$.

#### Forma disjuntiva mínima

Dizemos que $\alpha$ é uma **forma disjuntiva mínima** se nenhuma outra forma disjuntiva equivalente a $\alpha$ é mais simples que $\alpha$.

#### Implicante primo

Qualquer termo $\pi$ que

- para uma forma disjuntiva $\alpha$ tem a adição $\pi + \alpha = \alpha$;

- qualquer outra combinação de literais $x_1, \dots, x_n$ contidos em $\pi$ não produz o mesmo resultado.

Por exemplo, se $\pi = xy$ e $\alpha = xy + xy'z + x'yz$, então

$\pi + \alpha = \underbrace{xy + xy}_{Absorção} + xy'z + x'yz = xy + xy'z + x'yz = \alpha$

**Teorema:** Se $\alpha$ é uma forma disjuntiva mínima, então os termos de $\alpha$ são todos seus respectivos implicantes primos. Dai o nome "primo", pois refere-se um componente primordial.

### Formas Disjuntivas Normais (DNF)

Dado um conjunto $S$ de variáveis booleanas quaisquer dizemos que a expressão booleana $\alpha$ está na forma disjuntiva normal se todos os termos de $\alpha$ contêm todas as variáveis de $S$.

**Exemplo:** para $S = \{xy\}$, $\alpha = x'y + x'y$ está na forma disjuntiva normal, enquanto $\beta = x + x'y$ não está.

Toda expressão booleana pode ser colocada na forma normal pelo uso da lei do complemento ($x + x' = 1$).

**Exemplo:** $\alpha = x'y + x = x'y + x(y + y') = x'y + xy + xy'$

## Mapa de Karnaugh (K-Map)[^2]

Diagrama no qual cada produto fundamental possível é representado por uma "célula". Células adjacentes devem **diferir somente por um literal**. Um mapa de Karnaugh para $n$ variáveis possui $2^n$ células.

**Exemplo:** A seguinte tabela representa um mapa de Karnaugh para um conjunto $S = \{x,y\}$:

| ⟍      | y   | y'   |
|:------:|:---:|:----:|
| **x**  | xy  | xy'  |
| **x'** | x'y | x'y' |

Uma expressão booleana em sua forma mínima então pode então ser representada por células assinaladas na tabela.

**Exemplo:** $\alpha = xy + x'y + xy'$

| $\alpha$ | y                       | y'                      |
|:--------:|:-----------------------:|:-----------------------:|
| **x**    | :ballot_box_with_check: | :ballot_box_with_check: |
| **x'**   | :ballot_box_with_check: |                         |

Feito o diagrama, identificamos expressões descritas pelas regiões retangulares de maior comprimento que são potência de 2.

- Primeira coluna: $xy + x'y = y$;

- Primeira linha: $xy + xy' = x$

Assim, obtemos a forma disjuntiva mínima $\alpha = x + y$. Vemos que esta é representativa da expressão anterior fazendo uso da lei do complemento:

$$
\alpha = x + y = x(y + y') + y(x + x') = xy + xy' + \cancel{xy}\ + x'y = \alpha
$$

**Atenção:** O mapa de Karnaugh é contínuo em suas extremidades, como mostra esta imagem:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Imagens/0dc257375f0158494200599e14ac7a05a141f349.gif" title="" alt="" data-align="center">

## Mintermos

Denominação dada aos produtos fundamentais aqueles que contém todas as variáveis presentes no conjunto em questão.

- Para $n$ variáveis existem $2^n$ mintermos;

- Cada célula de um mapa de Karnaugh representa um mintermo;

- Cada mintermo assume valor 1 somente para uma combinação de valores para suas variáveis.

### Indexação

Mintermos podem ser indexados em código binário, tal que:

- $xyz = 111 = 2^2 + 2^1 + 2^0 = 7$;

- $xy'z = 101 = 2^2 + 2^0 = 5$;

- $x'yz' = 010 = 2^1 = 2$;

Segue que toda expressão booleana na forma disjuntiva normal corresponde à uma soma de mintermos

$\alpha = xyz + xyz' + x'yz = 111 + 110 + 011 = \sum m(3,6,7)$

[^1]: Usualmente este sinal é omitido.

[^2]: Note a distinção com a algebra artimética e a semelhança com a algebra de conjuntos.

[^3]: [Vídeo explicando o mapa.](https://yt.didw.to/watch?v=RO5alU6PpSU) [Mais outro bom](https://yt.didw.to/watch?v=Enb3C4yZ5rw).