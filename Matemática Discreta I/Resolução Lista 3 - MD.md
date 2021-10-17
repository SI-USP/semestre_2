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

### Exercício 7

$$
(\forall \epsilon \in \R^+)(\exists n \in \N)(\forall n > N)(|x_n - x| < \epsilon)
$$

### Exercício 8

Proposição:

$$
(f, g : \R \to \R) (\forall s \in \R)(\exists r \in \R)(f(r) > 0 \implies g(s) > 0)
$$

## Estratégias de demonstração

[^1]: 12543033