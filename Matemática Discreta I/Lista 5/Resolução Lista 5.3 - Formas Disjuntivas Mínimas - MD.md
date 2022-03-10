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

Logo, $\alpha = ab' + bc' \therefore \pi \not \subset \alpha$

**b.** $\{ \alpha = ab + ab'c' + a'b'c', \pi = ab' \\\therefore \alpha = abc + abc' + ab'c' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **a'** |                         |                         |                         | :ballot_box_with_check: |

Logo, $\alpha = ab + ac' + a'b'c \therefore \pi \not \subset \alpha$

**c.** $\{ \alpha = c + abc + abc', \pi = ab \\\therefore \alpha = ab'c + a'bc + a'b'c + abc + abc'$

| ⟍      | bc                      | bc'                     | b'c' | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:----:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |      | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |                         |      | :ballot_box_with_check: |

Logo, $\alpha = c + ab = c + \pi \therefore \pi \subset \alpha$

**d.** $\{ \alpha = a'bc + ab'c + abc, \pi = abc \therefore \pi \subset \alpha$

### 2.

**a.** $\alpha = abc + abc' + a'c' + a'b'c + a'bc'\\ = abc + abc' + a'b'c' + a'b'c + a'bc'$

São **duas** as possíveis formas disjuntivas mínimas:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-17-59-06-image.png)

$\alpha = b'c' + a'b' + ab$

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-17-59-20-image.png)

$\alpha = ab + ac' + a'b'$

**b.** $\beta = ab + a'(b' + c') + bc' = \underline{ab + a'b' + a'c' + bc'} =\\ abc + abc' + a'b'c + a'b'c' + a'bc'$

São **duas** as possíveis formas disjuntivas mínimas:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-16-01-35-image.png)

$\beta = a'b' + ac + ab$

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-16-02-53-image.png)

$\beta = a'b' + b'c + ab$

**c.** $\gamma = a + bc + a'b'c' = abc + abc' + ab'c + ab'c' + a'bc + a'b'c'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |                         | :ballot_box_with_check: |                         |

Existe apenas **uma** forma disjuntiva mínima possível:

$\gamma = a + bc + b'c'$

**d.** $\delta = abc' + ab'c + ab'c' + a'bc' + a'b'c$

Existem **duas** formas disjuntivas mínimas possíveis:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-03-51-image.png)

$\delta = ab' + bc' + b'c$

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-04-14-image.png)

$\delta = ac' + bc' + b'c$

**e.** $\eta = abc + abc' + ab'c' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **a'** |                         |                         |                         | :ballot_box_with_check: |

Existe apenas **uma** forma disjuntiva mínima possível:

$\eta = ab + ac' + a'b'c$

**f.** $\mu = abc + abc' + ab'c + ab'c' + a'bc + a'bc' + a'b'c + a'b'c'$

| ⟍      | bc                      | bc'                     | b'c'                    | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |

Existe apenas **uma** forma disjuntiva mínima possível:

$\mu = 1$

**g.** $\nu = ab + a'bc' + a'b'c = abc + abc' + a'bc' + a'b'c$

| ⟍      | bc                      | bc'                     | b'c' | b'c                     |
|:------:|:-----------------------:|:-----------------------:|:----:|:-----------------------:|
| **a**  | :ballot_box_with_check: | :ballot_box_with_check: |      |                         |
| **a'** |                         | :ballot_box_with_check: |      | :ballot_box_with_check: |

Existe apenas **uma** forma disjuntiva mínima possível:

$\therefore \nu = ab + bc' + a'b'c$

**h.** $\rho = ac + abc' + a'bc + a'b'c = abc + ab'c + abc' + a'bc + a'b'c$

| ⟍      | bc                      | bc' | b'c'                    | b'c                     |
|:------:|:-----------------------:|:---:|:-----------------------:|:-----------------------:|
| **a**  | :ballot_box_with_check: |     | :ballot_box_with_check: | :ballot_box_with_check: |
| **a'** | :ballot_box_with_check: |     |                         | :ballot_box_with_check: |

Existe apenas **uma** forma disjuntiva mínima possível:

$\rho = ab' + c$

### 3.

**a.** $\alpha = \sum m(3,5,7,13,14,15) = 0011, 0101, 0111, 1101, 1110, 1111$  

| ⟍             | **00 (z'w') ** | **01 (z'w)**            | **11 (zw)**             | **10 (zw')**            |
|:------------- |:--------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **00 (x'y')** |                |                         | :ballot_box_with_check: |                         |
| **01(x'y)**   |                | :ballot_box_with_check: | :ballot_box_with_check: |                         |
| **11 (xy)**   |                | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **10 (xy')**  |                |                         |                         |                         |

Existe apenas **uma** forma disjuntiva mínima possível:

$\alpha(x,y,z,w) = yw + x'zw + xyz$

**b.** $\beta = \sum m(3,4,5,6,7,8,12) = 0011, 0100, 0101, 0110, 0111, 1000, 1100$

| ⟍             | **00 (z'w')**           | **01 (z'w)**            | **11 (zw)**             | **10 (zw')**            |
|:------------- |:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **00 (x'y')** |                         |                         | :ballot_box_with_check: |                         |
| **01 (x'y)**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **11 (xy)**   | :ballot_box_with_check: |                         |                         |                         |
| **10 (xy')**  | :ballot_box_with_check: |                         |                         |                         |

Existe apenas **uma** forma disjuntiva mínima possível:

$\beta (x,y,z,w) = xz'w' + x'y + x'zw$

**c.** $\gamma = \sum m(0, 1,2, 3, 4, 5, 6, 7) = 000, 001, 010, 011, 100, 10 1, 110, 111$

| ⟍          | **00 (y'z')**           | **01 (y'z)**            | **11 (yz)**             | **10 (yz')**            |
|:----------:|:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **0 (x')** | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **1 (x)**  | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |

Existe apenas **uma** forma disjuntiva mínima possível:

$\gamma(x,y,z,w) = 1$

**d.** $\delta = \sum m(4,6,8,10,13,14) = 0100, 0110, 1000, 1010, 1101, 1110$

| ⟍             | **00 (z'w')**           | **01 (z'w)**            | **11 (zw)** | **10 (zw')**            |
|:------------- |:-----------------------:|:-----------------------:|:-----------:|:-----------------------:|
| **00 (x'y')** |                         |                         |             |                         |
| **01 (x'y)**  | :ballot_box_with_check: |                         |             | :ballot_box_with_check: |
| **11 (xy)**   |                         | :ballot_box_with_check: |             | :ballot_box_with_check: |
| **10 (x'y)**  | :ballot_box_with_check: |                         |             | :ballot_box_with_check: |

Existem **duas** formas disjuntivas mínimas possíveis:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-20-38-image.png)

$\delta(x,y,z,w) = xyz'w + xy'w' + x'yw' + yzw'$

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-22-06-image.png)

$\delta (x,y,z,w) = xyz'w + xy'w' + x'yw' + xzw'$

**e.** $\eta = \sum m(1,2,3,4,6,9) = 0001, 0010, 0011, 0100, 0110, 1001$

| ⟍             | **00 (z'w')**           | **01 (z'w)**            | **11 (zw)**             | **10 (zw')**            |
|:------------- |:-----------------------:|:-----------------------:|:-----------------------:|:-----------------------:|
| **00 (x'y')** |                         | :ballot_box_with_check: | :ballot_box_with_check: | :ballot_box_with_check: |
| **01 (x'y)**  | :ballot_box_with_check: |                         |                         | :ballot_box_with_check: |
| **11 (xy)**   |                         |                         |                         |                         |
| **10 (xy')**  |                         | :ballot_box_with_check: |                         |                         |

Existem **duas** formas disjuntivas mínimas possíveis:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-27-39-image.png)

$\eta (x,y,z,w) = x'yw' + x'y'z + y'z'w$

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%205/Imagens/2021-12-20-22-30-08-image.png)

$\eta (x,y,z,w) = x'yw' + x'y'w + x'zw' + y'z'w$

**f.** $\mu = \sum m(0,1,2,4,8) = 0000, 0001, 0010, 0100, 1000$

| ⟍             | **00 (z'w')**           | **01 (z'w)**            | **11 (zw)** | **10 (zw')**            |
|:------------- |:-----------------------:|:-----------------------:|:-----------:|:-----------------------:|
| **00 (x'y')** | :ballot_box_with_check: | :ballot_box_with_check: |             | :ballot_box_with_check: |
| **01 (x'y)**  | :ballot_box_with_check: |                         |             |                         |
| **11 (xy)**   |                         |                         |             |                         |
| **10 (xy')**  | :ballot_box_with_check: |                         |             |                         |

Existe apenas **uma** forma disjuntiva mínima possível:

$\mu(x,y,z,w) = y'z'w' + x'y'w' + x'y'z' + x'z'w'$

### 4.

**a.** $ab' + c$

**b.** $ab + b'c' + a'b'$

**c.** $bc + a'b + ab'$

**d.** $a' + c$

### 5.

**a.** $a'c + abc + ac'd' + a'b'$

**b.** $a'cd + b'cd' + ab'd' + abc'd$

**c.** $a'c + a'd' + cd' + ab'c'$

**d.** $bc + ab' + b'c'$

# 

[^1]: nUSP: 12543033; Turma 04