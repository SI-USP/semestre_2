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

Por isso a relação com as algebras de proposição e de conjuntos: estas respeitam esses axiomas e podem ser descritas em termos das sextuplas

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

[^1]: Usualmente este sinal é omitido.

[^2]: Note a distinção com a algebra artimética e a semelhança com a algebra de conjuntos.