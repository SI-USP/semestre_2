# Definição de sub-espaço vetorial

Seja $V$ um espaço vetorial sobre  $\R$. Um **sub-espaço vetorial** $W$ de $V$ é um subconjunto $W \subset V$ tal que possui as mesmas propriedades de espaço vetorial (possui um elemento neutro, possui adição e multiplicação) restritas a um alguns dos elementos presentes no espaço $V$ (senão todos).

## Combinações Lineares

Tomemos um subconjunto $S = {u_1, \dots , u_n} \subset V$. Indiquemos por $[S]$ o seguinte subconjunto:

$$
[S] = \{a_1u_1 + \dots + a_nu_n \mid a_1, \dots a_n \in \R\}
$$

O sub-espaço $[S]$ recebe o nome de *sub-espaço gerado por $S$*. Cada elemento de $[S]$ é uma combinação linear de $S$.

Por enquanto um conjunto $S$ seja finito, o conjunto $[S]$, exemplificado acima, abarca o produto de todos os valores de $S$ por todos os valores em $\R$ e é, portanto, **infinito**.

## Espaços vetoriais finitamente gerados

Um espaço vetorial $V$ é finitamente gerado se existe $S \subset V$, $S$ finito, tal que $V = [S]$. Por exemplo, observemos, em $\R^3$, o conjunto:

$$
S = \{(1,0,0), (0,1,0), (0,0,1)\}
$$

Onde

$$
a = (1,0,0);\ b = (0,1,0);\ c = (0,0,1)
$$

Podemos dizer que os vetores em $S$ correspondem à, ou geram um, espaço $\R^3$, e $[S]$ abarca a todos os valores contidos neste.