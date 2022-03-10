# Resolução da [Lista 5](https://drive.google.com/file/d/1JX_Jk-oXc0ykWU80bwci9KUI99Dc6PRV/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## 2. Expressões booleanas

### 1.

**a.** $\alpha(a,b) = (ab + ab')(a' + b) = \cancel{aba'} + abb + \cancel{ab'a'} + \cancel{ab'b} = ab \\ \therefore \alpha(0,0) = 0,\ \alpha(0,1) = 0,\ \alpha (1,0) = 0,\ \alpha(1,1) = 1$

**b.** $\beta(a,b) = (a + ab + b)(a + b') = (a + b)(a + b') = a + ab + ab + ab'\\ = a \therefore \beta(0,0) = 0,\ \beta(0,1) = 0,\ \beta(1,0) = 1,\ \beta(1,1) = 1$

**c.** $\gamma(a,b,c) = (a + b + c)(a' + b' + c') = \cancel{aa'} + ab' + ac' + ba' + \cancel{bb'}\\ + bc' + ca' + cb' + \cancel{cc'}$

Sempre que algum elemento igualar a 1 e outro a 0, esta expressão será equivalente à 1 e, senão, à 0.

**d.** $\delta (a,b,c) = (a + b'c)(b + c') = ab + ac' + \cancel{b'ab + b'cc'} = a(b + c')\\ \therefore \delta(0,0,0) = 0,\ \delta(0,0,1) = 0,\ \delta(0,1,0) = 0,\ \delta(0,1,1) = 0,\\  \delta(1,0,0) = 1,\ \delta(1,0,1) = 0, \delta(1,1,0) = 1, \delta(1,1,1) = 1$

### 2.

**a.** e, ab, f

**b.** d, a, b

**c.**

- $\gamma (1,e,a) = 1b + \cancel{0e} + ef + ba + \cancel{a0} + f1 = b + f$

- $\gamma(a,b,e) = ae + fb + bb + ee + ef + ba = b + e = 1$

- $\gamma(1, f, 0) = 1a + \cancel{0f} + f1 + \cancel{a0} + \cancel{00} + 11 = a + f = 1$

**d.**

- $\delta (e,c,1) = e(c + 0) = ec$;

- $\delta(1, a, b) = 1(a + e) = a + e$

- $\delta (f, d, d) = f (d + c) = f1 = f$

**e.** ae, $e(a + 0)(\cancel{be} + \cancel{eb} + bd + ec + ce + db) = ea(bd + ce) = \cancel{abde} + ac = ac$

### 3.

**a.** $a(ab' + a'b) = ab' + \cancel{aa'b} = ab'$

**b.** $a(a' + b')' = a(ab) =aab = ab$

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

**a.** $(\overline{A \cup B}) \cap (B \cup \overline C) \equiv (a + b)'(b + c') = (a'b')(b + c')\\ = 0 + a'b'c' \equiv \overline A \cap \overline B \cap \overline C$

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