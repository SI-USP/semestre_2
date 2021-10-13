# Resolução da [Lista 1](https://edisciplinas.usp.br/mod/resource/view.php?id=3889801) da disciplina "Matrizes, Vetores e Geometria Analítica"

## Exercício 1

Sejam $u$, $v$ e $w$ vetores de um espaço vetorial qualquer. Mostre que se $u + v = u + w$, então $v = w$.

### Resolução

São propriedades da adição em espaços vetoriais:

1. Existe um elemento neutro, aqui indicado por e, que não altera o resultado de uma adição ao ser acrescentado nesta.

$$
\exist\ e \in V \mid u + e = u\ \ \ \ \ \  \forall u \in V
$$

2. Para todo elemento $u$ existe um *oposto* $(-u)$ tal que:

$$
\exist\ (-u) \in V \mid u + (-u) = e\ \ \ \ \ \  \forall u \in V
$$

Assim o sendo,

$u + v = u + w \implies u + v + e = u + w \implies u + v + u + (-u) = u + w \implies u + (-u) + v = u + (-u) + w \implies e + v = e + w \implies v = w\ \blacksquare$

## Exercício 2

Mostre que, para todo espaço vetorial $V$, o vetor nulo $e$ é único.

### Resolução

Vamos admitir, por absurdo, que existe um elemento $g \not= e$ que, sendo um elemento nulo, satisfaz a propriedade de não alterar o resultado de uma adição.

$$
\exist\ g \in V, g \not = e \mid u + g = u\ \ \ \ \ \  \forall u \in V
$$

Assim,

$$
u + e  = u + g \implies u + e +e  = u + g
\implies u + u + (-u) + e = u + g \implies u + (-u) + e = u + (-u) + g \implies e + e = e + g \implies e = g
$$

Chegamos a uma contradição. Logo, pela definição de elemento nulo, só é possível a existência de um elemento deste tipo. $\blacksquare$

## Exercício 3

Para cada vetor u de um espaço vetorial V existe um único vetor $(-u)$ oposto de $u$.

### Resolução

Novamente, procederemos por absurdo ao afirmar que existe um elemento $g \not = (-u)$ tal que satisfaz a condição de *oposto* de $u$:

$$
\exist\ g \in V \mid u + g = e \ \ \ \ \ \  \forall u \in V
$$

Lembrando que adições entre vetores possuem a propriedade de serem associativas:

$$
u + (v + w) = (u + v) + w \ \ \ \ \ \  \forall u,v,w \in V
$$

Logo,

$$
- u = - u + e = -u + (u + g) = (-u + u) + g = e + g = g
$$

Chegamos a uma contradição. Logo, pela definição de oposto, para cada $u$ existe apenas um único elemento oposto $-u$. $\blacksquare$

## Exercício 4

Seja $V = \R^2$. Se $u = (x1, x2) \in V$ e$ v = (y1, y2) \in V $, então $V$ , com as
operações de adição:

$$
u + v = (x1 + y1, x2 + y2)
$$

e multiplicação por escalar

$$
\alpha u = (\alpha^2x1, \alpha^2x2)
$$

é um espaço vetorial sobre $\R$?

## Exercício 5

Seja $V = \R^2$. Se $u = (x1, x2) \in V e v = (y1, y2) \in V$ , então $V$ , com as
operações de adição:

$$
u + v = (x1 + y1, x2 + y2)
$$

e multiplicação por escalar

$$
\alpha u = (-\alpha x1, -\alpha x2)
$$

é um espaço vetorial sobre $\R$?

### Resolução (exercícios 4 e 5)

O $\R^2$ pode ser visto como um espaço vetorial sobre $\R$ quando definidas a adição e multiplicação por um número real.

Verificação dos axiomas relativos à **adição**:

- **Comutação:** *((x~1~, y~1~) + (x~2~, y~2~)) + (x~3~, y~3~) = (x~1~ + x~2~, y~1~ + y~2~) + (x~3~, y~3~) = ((x~1~ + x~2~) + x~3~, (y~1~ + y~2~) + y~3~) = (x~1~ + (x~2~ + x~3~), y~1~ + (y~2~ + y~3~)) = (x~1~, y~1~,) + (x~2~ + x~3~, y~2~ + y~3~) = ((x~1~, y~1~) + (x~2~, y~2~) + (x~3~, y~3~))*

- **Associação:** *(x~1~, y~1~) + (x~2~, y~2~) = (x~1~ + x~2~, y~1~ + y~2~) = (x~2~ + x~1~, y~2~ + y~1~) = (x~2~, y~2~) + (x~1~, y~1~)*

- **Elemento nulo:** no caso, *(0, 0)*

- **Oposto:** Para cada *w = (x, y) ∈ ℝ^2^*, -*w = (-x, -y)*

Verificação dos axiomas relativos à **multiplicação**:

- *(ab)(x, y) = ((ab)x, (ab)y) = (a(bx), a(by)) = a(bx, by) = a(b(x,y))*

- *(a + b)(x, y) = ((a + b)x, (a + b)y) = (ax + bx, ay + by) = (ax, ay) + (bx, by) = a(x,y) + b(x, y)*

- *a((x~1~, y~1~) + (x~2~, y~2~)) = a(x~1~ + x~2~, y~1~ + y~2~) = (a(x~1~ + x~2~), a(y~1~ + y~2~)) = (ax~1~ + ax~2~, ay~1~ + ay~2~) = (ax~1~, ay~1~) + (ax~2~, ay~2~) = a(x~1~, y~1~) + a(x~2~, y~2~)*

- *1(x,y) = (1x, 1y) = (x, y)*

Em ambos os casos (exercícios 4 e 5) a soma corresponde com aquilo que aqui foi exposto, mas a multiplicação diverge: $\alpha u = \alpha^2u$ e $\alpha u = -\alpha u$ só seriam possíveis se $v = \empty$, e assim $\alpha e = \alpha^2 e$ e $\alpha e = -\alpha e$. $\blacksquare$

## Exercício 6

Seja $V = \R^3$. Verifique quais dos subconjuntos abaixo são subespaços de
$V$.

### Resolução

Um conjunto $W$ é subespaço se, e somente se,

- $W \not = 0$

- É possível a adição: $(u, v) \in W \mapsto u + v \in W$

- É possível a multiplicação escalar: $(a, u), a \in \R, u \in V \mapsto au \in V$

Venhamos a conferir estas propriedades em cada caso:

- [x] $W = \{(x, y, z) \in V : x + y + z = 0\}$

$x + y + z = 0 \implies z = -(x + y)$. Então, se $u = (a, b, -(a + b))$ e $v = (c, d, - (c + d))$:

**Adição:** *u + v = (a, b, - (a + b)) + (c, d, - (c + d)) = (a + c, a + d, -((a + c) + (a + d)))*;

**Multiplicação:** *αu = (αa, αb, - (αa + αb))*.

- [x] $W = \{(x, y, z) \in V : x \ge y \ge z\}$

**Adição:** u + v = *(x~1~, y~1~, z~1~) + (x~2~, y~2~, z~2~) = (x~1~ + x~2~, y~1~ + y~2~, z~1~ + z~2~), onde x~1~ + x~2~ ≥ y~1~ + y~2~ ≥ z~1~ + z~2~*;

**Multiplicação:** *αu = (αx~1~, αy~1~, αz~1~)* onde *αx~1~ ≥ αy~1~ ≥ αz~1~*

- [x] $W = \{(x, y, z) \in V : x − 3z = 0\}$

**Adição:** u + v = *(3z~1~, y~1~, z~1~) + (3z~2~, y~2~, z~2~) = (3(z~1~ + z~2~), (y~1~ + y~2~), z~1~ + z~2~)*

**Multiplicação:** αu = (3αz~1~, αy~1~, αz~1~)

- [ ] $W = \{(x, y, z) \in V : x \in \Z\}$

**Adição:** u + v = $\Z + \Z \mapsto \Z$

**Multiplicação:** αu = $\R \times \Z \mapsto \R$

- [ ] $W = \{(x, y, z) ∈ V : x^2 + y^2 + z^2 ≤ 1\}$

$x^2 + y^2 + z^2 ≤ 1 \implies x = \pm \sqrt{1 - y^2 - z^2}$.

**Soma:** $u + v  = \left(\pm \sqrt{1 - y_1^2 - z_1^2}, y_1, z_1\right) + \left(\pm \sqrt{1 - y_2^2 - z_2^2}, y_2, z_2 \right) = \left(\pm \sqrt{1 - y_1^2 - z_1^2} \pm \sqrt{1 - y_2^2 - z_2^2}, y_1 + y_2, z_1 + z_2 \right)$

Assim o sendo, $W$ não é espaço vetorial pois:

$$
\pm \sqrt{1 - y_1^2 - z_1^2} \pm \sqrt{1 - y_2^2 - z_2^2} \not = \pm \sqrt{1- (y_1 + y_2)^2 - (z_1 + z_2)^2}
$$

- [ ] $W = \{(x, y, z) \in V : x \ge 0\}$

Uma multiplicação $\alpha x \mapsto \R, \alpha \in \R, x \in \R^+_*$

- [x] $W = \{(x, y, z) \in V : xy = 0\}$

Sim, tá valendo. Ex.: Bases Canônias

- [ ] $W = \{(x, y, z) ∈ V : x = z^2\}$

**Adição:** *u + v = (z~1~^2^, y~1~, z~1~) + (z~2~^2^, y~2~, z~2~) = (z~1~^2^ + z~2~^2^, y~1~ + y~2~, z~1~ + z~2~)*. Como *z~1~^2^ + z~2~^2^* ≠ (z~1~ + z~2~)^2^, $W$ não é subespaço vetorial.

## Exercício 7

Sejam $V$ um espaço vetorial sobre $\R$ e $W_1$, $W_2$ subespaços de $V$ . Mostre
que $W_1 \cup W_2$ é um subespaço de $V$ se, e somente se, $W_1 ⊆ W_2$ ou
$W_2 ⊆ W_1$.

### Resolução

Procederemos nesta demonstração com uma prova por absurdo. Consideremos que existe $W_1 \cup W_2$ tal que $W_1 \not ⊆ W_2$ e $W_2 \not ⊆ W_1$. Logo, existem dados elementos elemento $u$ e $v$ tais que

$$
\begin{matrix}
u \in W_1, & u \not \in W_2 & u \in W_1 \cup W_2 \\
v \in W_2, & v \not \in W_1 & v \in W_1 \cup W_2 
\end{matrix}
$$

Sendo $W_1 \cup W_2$ espaço vetorial, a soma dos vetores $v$ e $u$ necessita também estar contida neste. Ainda, por ser uma união, esta necessita estar presente em $W_1$ ou $W_2$. Consideremos que $u + v$ está presente em $W_1$. Assim o sendo, a seguinte soma é possível:

$$
(u + v) + (-u)
$$

Pois por hipótese $W_1$ é espaço vetorial, e o oposto do vetor $u$ também necessita estar contido neste pois é produto da multiplicação de $u$ pelo escalar $-1$. Assim sendo,

$$
(u + v) + (-u) = (u + (-u)) + v = e + v = v
$$

Chegamos à um absurdo. Pois assumimos que $v$ não estava contido em $W_1$. E de maneira análoga, chegaríamos ao mesmo absurdo com relação à $u$ em $W_2$.  Assim sendo, $W_1 ⊆ W_2$ e $W_2 ⊆ W_1$. Mas seria $W_1 \cup W_2$ subvetor de $V$? Vejamos:

$$
\begin{cases}
W_1 ⊆ W_2 \implies W_1 \cup W_2 = W_2 \therefore W_2 \subset V \implies (W_1 \cup W_2) \subset V \\
W_2 ⊆ W_1 \implies W_1 \cup W_2 = W_1 \therefore W_1 \subset V \implies (W_1 \cup W_2) \subset V \\
\end{cases}
$$

Fica demonstrado também que $W_1 \cup W_2 \subset V\ \blacksquare$ 