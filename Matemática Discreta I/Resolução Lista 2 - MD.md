# Resolução da [Lista 2](https://drive.google.com/file/d/1M3v_yk-E8G9nd8onq83WIpr3zsTuq_iJ/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## Funções proposicionais e quantificadores

### Exercício 1

**a)** "Existe pelo menos um elemento no conjunto $A$ tal que somado com 3 fica igual à 10". *Falso*, não há tal elemento.

**b)** "Todo elemento no conjunto $A$ é tal que somado com 3 fica menor que 10". *Verdadeiro*.

**c)** "Existe pelo menos um elemento no conjunto $A$ tal que somado com 3 fica menor ou igual a 5". *Verdadeiro*, os elementos 1 e 2.

**d)** "Existe pelo menos um elemento no conjunto $A$ tal que somado com 3 fica menor que 7". *Verdadeiro*, elementos 1 à 3.

### Exercício 2

**a)** "Existe pelo menos um elemento em $A$ que, para todo elemento em $A$, quando elevado ao cubo possui valor menor que a soma doutro ou do mesmo elemento com 1". *Verdadeiro*, o elemento 1, no caso.

**b)** "Para todo elemento em $A$ existe um elemento em $A$ cuja soma dos cubos destes elementos é menor que 12". *Verdadeiro*.

**c)** "Para todo par de elementos em $A$ a soma dos cubos destes é menor que 12". *Falso*.

### Exercício 3

**a)** $(\forall x \in \R)(\exists y \in \R)(\neg P(x,y));$

**b)** $(\exists x \in \R)(\exists y \in \R)(\neg P(x,y));$

**c)** $(\forall y \in \R) (\forall x \in \R) (\exists z \in \R)(\neg P(x,y)\lor \neg Q(x,z))$

### Exercício 4

**a)** Existe pelo menos um estudante de SI da EACH que não é do sexo masculino;

**b)** Nenhum dos estudantes de GPP da EACH tem 25 anos ou mais;

**c)** Existe pelo menos um estudante da EACH que não mora na ZL.

### Exercício 5

**a)** "Para qualquer número inteiro existe um número inteiro maior que este". *Verdadeiro*. Negação: "Existe um numero inteiro para o qual nenhum número inteiro é maior que este." $(\exist a \in \Z)(\forall b \in \Z)(\neg(a < b))$.

**b)** "Existe um número inteiro para o qual qualquer número inteiro é menor que ele". *Falso*. Negação: "Para qualquer número inteiro existe pelo menos um número inteiro que não seja menor que ele". $(\forall b \in \Z)(\exists a \in \Z)(\neg(a < b))$.

### Exercício 6

**a)** $(\exists x, y, z \in \Z)P(x,y,z)$

**b)** $(n \in \Z^+ : n \le 3)(x_1, \dots , x_n \in \Z)P(x,y,z)$

### Exercício 7[^2]

$$
(\forall \epsilon \in \R^+)(\exists n \in \N)(\forall n > N)(|x_n - x| < \epsilon)
$$

### Exercício 8

Proposição:

$$
(f, g : \R \to \R) (\forall s \in \R)(\exists r \in \R)(f(r) > 0 \implies g(s) > 0)
$$

Negação:

$$
(f, g: \R \to \R)(\exists s \in \R)(\forall r \in \R)(\neg(f(r) > 0 \implies g(s) > 0))
$$

A proposição implica que a função $g$ contém $f$, pois esta última influencia o valor da primeira, enquanto o contrário não ocorre.

## Estratégias de demonstração

### Exercício 1

**Proposição**

Sejam $n$ e $k$ dois números naturais onde $n > k$. Se tentarmos distribuir $n$ objetos em $k$ urnas ($P$), então pelo menos uma das urnas conterá mais de um objeto ($Q$). $P\implies Q$.

**Contrapositiva**

Sejam $n$ e $k$ dois números naturais onde $n > k$. Pelo menos uma urna restará vazia ($\neg Q$) se tentarmos distribuir $k$ objetos em $n$ urnas ($\neg P$). $\neg Q \implies \neg P$.

### Exercício 2

Consideremos $N$ um número de $n$ dígitos $\{a_1, a_2, \dots, a_n\}$ cuja soma  $a_1 + a_2 + \dots + a_n = \sum^n_{i = 1} a_i =  k$. Sabemos que o critério de divisibilidade de $N$ por 9 é $N | 9 \iff N = 9q$, $\forall N, n, a, k, q \in \N$. Podemos descrever $N$ da seguinte maneira:

$$
N = a_1 \cdot 10^{n - 1} + a_2 \cdot 10^{n - 2} + \dots + a_n \cdot 10^{n - n}
= \sum^n_{i = 1}a_i10^{n - i}
$$

Por vez, $10^{n}$ pode ser escrito da seguinte forma:

$$
10^n = 99\dots9 (\text{n - 1 vezes}) + 1 = \underbrace{\sum^{n - 1}_{i = 1}9\cdot 10^i}_{\equiv\ 9q} + 1
$$

Logo, para cada dígito de $N$ teremos:

$$
N = a_1(10^{n - 1} + 1) + a_2(10^{n - 2} + 1) + \dots + a_n (10^{n - n} + 1) =
\\ \sum^n_{i = 1}a_i(9q + 1) = k9q + k
$$

Finalmente, $9kq | 9$ e, se $k | 9$ o for, então também é $N | 9$. $\blacksquare$

### Exercício 3

**Prova direta**

Se um número n é par, então $n|2 \implies n = 2k$ para qualquer $k \in \R$.

$$
n^2 = 2k = \pm \sqrt{2k} \cdot \frac{\sqrt 2}{\sqrt 2}
= 2 \cdot \underbrace{\left(\pm \frac{\sqrt k}{\sqrt 2}\right)}_{k_2}
= 2k_2\ \blacksquare
$$

**Prova por contrapositiva**

Retomemos o enunciado:

> Se $n^2$ é par ($P$), então $n$ é par ($Q$, $P \implies Q$).

A contrapositiva disso seria:

> Se $n$ é ímpar ($\neg Q$), $n^2$ é ímpar ($\neg P$, $\neg Q \implies \neg P$).

Se $n$ é ímpar, então $n \nmid 2 \implies n = 2k + 1$ para qualquer $k \in \R$.

$$
n^2 = n \cdot n = (2k + 1)(2k + 1) = 4k^2 + 2k + 2k + 1 =
2\underbrace{(2k^2 + 2k)}_{k_2} + 1 = 2k_2 + 1\ \blacksquare
$$

A primeira demonstração é mais objetiva: foram menores os números de passos requeridos. Mas em termos de compreensibilidade a alternativa possui seu valor.

### Exercício 4



[^1]: 12543033

[^2]: Resposta retirada diretamente das notas de aula do dia 03/09/2021