# Resolução da [Lista 5](https://drive.google.com/file/d/1JX_Jk-oXc0ykWU80bwci9KUI99Dc6PRV/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## 2. Expressões booleanas

### 1.

**a.** $\alpha(a,b) = (ab + ab')(a' + b) = a(a' + b) = aa' + b = 0 + b = b \\ \therefore \alpha(0,0) = 0,\ \alpha(0,1) = 1,\ \alpha (1,0) = 0,\ \alpha(1,1) = 1$

**b.** $\beta(a,b) = (a + ab + b)(a + b') = (a + b)(a + b') = a + (b + b')\\ = a + 1 = 1 \therefore \beta(0,0) = 1,\ \beta(0,1) = 1,\ \beta(1,0) = 1,\ \beta(1,1) = 1$

**c.** $\gamma(a,b,c) = (a + b + c)(a' + b' + c') = \cancel{aa'} + ab' + ac' + ba' + \cancel{bb'}\\ + bc' + ca' + cb' + \cancel{cc'}$

Sempre que algum elemento igualar a 1 e outro a 0, esta expressão será equivalente à 1 e, senão, à 0.

**d.** $\delta (a,b,c) = (a + b'c)(b + c') = ab + ac' + \cancel{b'ab + b'cc'} = a\\ \therefore \delta(0,0,0) = 0,\ \delta(0,0,1) = 0,\ \delta(0,1,0) = 0,\ \delta(0,1,1) = 0,\\  \delta(1,0,0) = 1,\ \delta(1,0,1) = 1, \delta(1,1,0) = 1, \delta(1,1,1) = 1$

### 2.

**a.** e, b, 1

**b.** 1, 1, 1

**c.** 1, ae + ad + bf + b + ef + e , 1

**d.** e, 1, f

**e.** 1, b(a + e)

### 3.

**a.** $a(ab' + a'b) = ab' + \cancel{aa'b} = ab'$

**b.** $a(a' + b') = ab'$

**c.** $(a + b)(b + c)(c + a) = (\cancel{ab} + ac + b + bc)(c + a) =\\ ac + bc + \cancel{bc} + \cancel{ac} + ab + abc = ab + bc + ca$

**d.** $abc(a + b) = abc + abc = abc$

**e.** $(a + b)'(a'b)' = a'b'(a + b') = a'b'$

### 4.

**a.** $(a' + b)' + bc' = ab' + bc' = ab'c + ab'c' + abc' + a'bc'$

**b.** $(a + b + c)(a' + b + c) =\\ \cancel{aa'} + ab + ac + ba' + b + bc + a'c + \cancel{bc} + c =\\  ab + ac + b + c + a'c =\\ac + b + c= \\ abc + ab'c + abc' + a'bc + a'bc' + a'b'c$

**c.** $(a + b' + c)(a' + b + c) =\\ \cancel{aa'} + ab + ac + b'a' + b'c + a'c + bc + c =\\ ab + b'a' + c =\\ abc + abc' + ab'c + a'b'c' + a'bc + ab'c$

**d.** $b(a + bc') = ab + bc' = abc + abc' + a'bc'$

**e.** $(a' + b)' (a + b') + ac' =\\ ab'(a + b') + ac' = ab' + ac' =\\ ab'c + ab'c' + abc'$

### 5.

**a.** $(\overline{A \cup B}) \cap (B \cup \overline C) \equiv (ab)'(b + c') = (a' + b')(b + c')\\ = a'b + ac' + b'c' \equiv (\overline A \cap B) \cup (A \cap \overline C) \cup (\overline B \cap \overline C)$

**b.** $(\overline{B \cap C}) \cap (\overline{\overline A \cap C}) = (bc)'(a'c)' = (b' + c')(a + c') =\\ ab' +b'c' + ac' + c' = ab' + c' \equiv (A \cap \overline B) \cup C$

### 6.

**a.** $ab + a'b' \equiv (a \equiv b)$

Mapa de Karnaugh:

|        | b                       | b'                      |
|:------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: |                         |
| **a'** |                         | :ballot_box_with_check: |

Repare que este constitui uma **matriz identidade**. $\therefore a \equiv b$.

**b.** $abc + a'bc + ab'c + abc' \equiv (ab + bc + ca)$

| ⟍      | b'c                     | bc                      | bc'                     | b'c' |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:----:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |      |
| **a'** |                         | :ballot_box_with_check: |                         |      |

A partir desta visualização percebemos que podemos formar três pares de intersecções, justamente $(ab + bc + ca)$.

[^1]: nUSP: 12543033; Turma 04