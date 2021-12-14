# Resolução da [Lista 5](https://drive.google.com/file/d/1JX_Jk-oXc0ykWU80bwci9KUI99Dc6PRV/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## 3. Formas disjuntivas mínimas

### 1.

**a.** $\{ \alpha = ab' + abc' + a'bc', \pi = ac' \\\therefore \alpha = abc + ab'c' + abc' + a'bc'$

Mapa de Karnaugh:

| ⟍      | bc  | bc'                     | b'c'                    | b'c                     |
|:------:|:---:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  |     | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** |     | :ballot_box_with_check: |                         |                         |

Logo, $\alpha = bc' + ac' + ab' = bc' + \pi + ab' \therefore \pi \subset \alpha$

**b.** $\{ \alpha = ab + ab'c' + a'b'c', \pi = ab' \\\therefore \alpha = abc + abc' + ab'c' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **a'** |                         |                         |                         | :ballot_box_with_check: |

Logo, $\alpha = ab + ac' + a'b'c \therefore \pi \not \subset \alpha$

**c.** $\{ \alpha = c + abc + abc' + \pi = ab \\\therefore \alpha = ab'c + a'bc + a'b'c + abc + abc'$

| ⟍      | bc                      | bc'                     | b'c' | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:----:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |      | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |                         |      | :ballot_box_with_check: |

Logo, $\alpha = c + ab = c + \pi \therefore \pi \subset \alpha$

**d.** $\{ \alpha = a'bc + ab'c + abc, \pi = abc \therefore \pi \subset \alpha$

### 2.

**a.** $\alpha = abc + abc' + a'c' + a'b'c + a'bc'\\ = abc + abc' + a'b'c' + a'b'c + a'bc'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |                         | :ballot_box_with_check: |
| **a'** |                         | :ballot_box_with_check: | :ballot_box_with_check: |                         |

$\therefore \alpha = ab + bc' + a'c' + ac$

**b.** $\beta = ab + a'(b' + c') + bc' = \underline{ab + a'b' + a'c' + bc'} =\\ abc + abc' + a'b'c + a'b'c' + a'bc'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |                         |                         |
| **a'** |                         | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |

$\therefore \beta = ab + a'b' + a'c' + bc'$

**c.** $\gamma = a + bc + a'b'c' = abc + abc' + ab'c + ab'c' + a'bc + a'b'c'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |                         | :ballot_box_with_check: |                         |

$\therefore \gamma = a + bc + b'c'$

**d.** $\delta = abc' + ab'c + ab'c' + a'bc' + a'b'c$

| ⟍      | bc  | bc'                     | b'c'                    | b'c                     |
|:------:|:---:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  |     | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** |     | :ballot_box_with_check: |                         | :ballot_box_with_check: |

$\therefore \delta = bc' + ac' + ab' + b'c$

**e.** $\eta = abc + abc' + ab'c' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **a'** |                         |                         |                         | :ballot_box_with_check: |

$\therefore \eta = ab + ac' + a'b'c$

**f.** $\mu = abc + abc' + ab'c + ab'c' + a'bc + a'bc' + a'b'c + a'b'c'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |

$\therefore \mu = 1$

**g.** $\nu = ab + a'bc' + a'b'c = abc + abc' + a'bc' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c' | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:----:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |      |                         |
| **a'** |                         | :ballot_box_with_check: |      | :ballot_box_with_check: |

$\therefore \nu = ab + bc' + a'b'c$

**h.** $\rho = ac + abc' + a'bc + a'b'c = abc + ab'c + abc' + a'bc + a'b'c$

| ⟍      | bc                      | bc' | b'c'                    | b'c                     |
|:------:|:-----------------------:|:---:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: |     | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |     |                         | :ballot_box_with_check: |

$\therefore \rho = ab' + c$

### 3.

**a.** $\alpha = \sum m(3,5,7,13,14,15) = 0011, 0101, 0111, 1101, 1110, 1111$  

| ⟍      | **00** | **01**                  | **11**                  | **10**                  |
|:------:|:------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **00** |        |                         | :ballot_box_with_check: |                         |
| **01** |        | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **11** |        | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **10** |        |                         |                         |                         |

$\therefore \alpha(x,y,z,w) = yw + x'zw + xyz = z + yw$

**b.** $\beta = \sum m(3,4,5,6,7,8,12) = 0011, 0100, 0101, 0110, 0111, 1000, 1100$

| ⟍      | **00**                  | **01**                  | **11**                  | **10** |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:------:|
| **00** |                         |                         | :ballot_box_with_check: |        |
| **01** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |        |
| **11** | :ballot_box_with_check: |                         |                         |        |
| **10** | :ballot_box_with_check: |                         |                         |        |

$\therefore \beta (x,y,z,w) = xz'w' + yz'w' + x'yz' + x'yw + x'zw$

**c.** $\gamma = \sum m(0, 1,2, 3, 4, 5, 6, 7) = 000, 001, 010, 011, 100, 10 1, 110, 111$

| ⟍     | **00**                  | **01**                  | **11**                  | **10**                  |
|:-----:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **0** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **1** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |

$\therefore \gamma = 1$

**d.** $\delta = \sum m(4,6,8,10,13,14) = 0100, 0110, 1000, 1010, 1011, 1100$

| ⟍      | **00**                  | **01** | **11**                  | **10**                  |
|:------:|:-----------------------:|:------:|:-----------------------:|:-----------------------:|
| **00** |                         |        |                         |                         |
| **01** | :ballot_box_with_check: |        |                         | :ballot_box_with_check: |
| **11** | :ballot_box_with_check: |        |                         |                         |
| **10** | :ballot_box_with_check: |        | :ballot_box_with_check: | :ballot_box_with_check: |

$\delta(x,y,z,w) = x'yw' + yz'w' + xz'w' + xy'w' + xy'z$

**e.** $\eta = \sum m(1,2,3,4,6,9) = 0001, 0010, 0011, 0100, 0110, 1001$

| ⟍      | **00**                  | **01**                  | **11**                  | **10**                  |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **00** |                         | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **01** | :ballot_box_with_check: | :ballot_box_with_check: |                         | :ballot_box_with_check: |
| **11** |                         |                         |                         |                         |
| **10** |                         |                         |                         |                         |

$\therefore  \eta(x,y,z,w) = xz'w' + yz'w' + xyz' + x'yw + x'zw$

**f.** $\mu = \sum m(0,1,2,4,8) = 0000, 0001, 0010, 0100, 1000$

| ⟍      | **00**                  | **01**                  | **11** | **10**                  |
|:------:|:-----------------------:|:-----------------------:|:------:|:-----------------------:|
| **00** | :ballot_box_with_check: | :ballot_box_with_check: |        | :ballot_box_with_check: |
| **01** | :ballot_box_with_check: |                         |        |                         |
| **11** |                         |                         |        |                         |
| **10** | :ballot_box_with_check: |                         |        |                         |

$\therefore \mu(x,y,z,w) = y'z'w' + x'y'w' + x'y'z' + x'z'w'$

### 4.

**a.** $ab' + c$

**b.** $ab + ac' + b'c' + a'b'$

**c.** $ab' + ac + a'b + bc$

**d.** $a' + c$

### 5.

**a.** $abc + abd' + ac'd' + b'c'd' + a'b' + a'c$

**b.** $a'cd + a'b'c + b'cd' + ab'd' + abc'd$

**c.** $cd' + a'c + a'd' + b'd' + ab'c'$

**d.** $ac + ab' + b'c' + a'bc$

# 

[^1]: nUSP: 12543033; Turma 04