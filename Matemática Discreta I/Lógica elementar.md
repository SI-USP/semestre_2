# Lógica elementar

Respostas à [1ª lista de exercícios](https://classroom.google.com/u/0/c/MzgyMTU0Njc2MjQ1/m/MzgyMTYxMjEwMzg2/details)

## 1.

**(a)** $(q \land \lnot r) \to p$

"*Se o céu está estrelado e não está fazendo frio então Eva vai sair para uma caminhada*"

**(b)**  $q \to (\lnot r \to p)$

A proposição acima equivale à $q \to (r \lor p)$, conforme demonstra a seguinte **tabela verdade**:

| $r$ | $p$ | $\lnot r \to p$ | $r \lor p $ |
|:---:|:---:|:---------------:|:-----------:|
| F   | F   | F               | F           |
| F   | V   | V               | V           |
| V   | F   | V               | V           |
| V   | V   | V               | V           |

Logo, a oração fica: "*Se o céu está estrelado então está fazendo frio ou Eva vai sair para uma caminhada.*"

**(c)** $\lnot(p \iff (q \lor r))$

Abordemos a proposição em partes:

- $p \iff (q \lor r)$: Eva vai sair para uma caminhada se, e somente se, o céu está estrelado ou está fazendo frio. 

- $\lnot(p \iff (q \lor r))$ (a negação da proposta anterior): Eva **não** vai sair para uma caminhada se, e somente se, o céu está estrelado ou está fazendo frio.

**(d)**  $p \iff q$

**(e)** $(r \land \lnot q) \to \lnot p$

**(f)** $r \land p$

## 2.

| $p$ | $q$ | $p \to q$ | $\lnot p \lor q $ |
|:---:|:---:|:---------:|:-----------------:|
| F   | F   | V         | V                 |
| F   | V   | V         | V                 |
| V   | F   | F         | F                 |
| V   | V   | V         | V                 |

## 3.

Se q é uma tautologia, $q \equiv V$ sempre. Enquanto, se r é uma contradição, $r \equiv F$ sempre. Logo,

| $p$ | $q$ | $r$ | $p \lor q$ | $p \land r$ |
|:---:|:---:|:---:|:----------:|:-----------:|
| V   | V   | F   | V          | F           |
| F   | V   | F   | V          | F           |

## 4.

**(a)** Nota-se que o valor verdade de tais proposições são equivalentes na tabela verdade:

| $p$ | $q$ | $r$ | $p \land (q \lor r)$ | $(p \land q) \lor (p \land r)$ |
|:---:|:---:|:---:|:--------------------:|:------------------------------:|
| F   | F   | F   | F                    | F                              |
| F   | V   | F   | F                    | F                              |
| F   | F   | V   | F                    | F                              |
| F   | V   | V   | F                    | F                              |
| V   | V   | V   | V                    | V                              |
| V   | V   | F   | V                    | V                              |
| V   | F   | V   | V                    | V                              |
| V   | F   | F   | F                    | F                              |

**(b)** Tal qual anterioremente,

| $p$ | $q$ | $r$ | $p \lor (q \land r)$ | $(p\lor q) \land (p \lor r)$ |
|:---:|:---:|:---:|:--------------------:|:----------------------------:|
| F   | F   | F   | F                    | F                            |
| F   | V   | F   | F                    | F                            |
| F   | F   | V   | F                    | F                            |
| F   | V   | V   | V                    | V                            |
| V   | V   | V   | V                    | V                            |
| V   | V   | F   | V                    | V                            |
| V   | F   | V   | V                    | V                            |
| V   | F   | F   | V                    | V                            |

## 5.

Demonstração da segunda lei de Morgan:

| $p$ | $q$ | $\lnot (p \lor q)$ | $\lnot p \land \lnot q$ |
|:---:|:---:|:------------------:|:-----------------------:|
| V   | V   | F                  | F                       |
| V   | F   | F                  | F                       |
| F   | V   | F                  | F                       |
| F   | F   | V                  | V                       |

## 6.

A Lei de Morgan aplica-se de maneira equivalente na teoria dos conjuntos e na lógica proposicional. Veja que o complemento à intercessão entre dois conjuntos $A$ e $B$ é a união dos complementos de $A$ e $B$:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Imagens/0369ea5b86b01fc8aeb895c8cb044b3f13f05215.png)

Assim o sendo, para $n$ conjuntos $P$ tem-se que:

$$
\left(\bigcap^n_{i = 1}P_i\right)^c = \bigcup^n_{i = 1} P_i^{\ c}
$$

e também:

$$
\left(\bigcup^n_{i = 1} P_i\right)^c = \bigcap^n_{i = 1} P_i^{\ c}
$$

## 7.

**(a)** Tautologia

| $p$ | $q$ | $(p \to q) \lor p$ |
|:---:|:---:|:------------------:|
| V   | V   | V                  |
| V   | F   | V                  |
| F   | V   | V                  |
| F   | F   | V                  |

**(b)**  Reescrevendo a equação em termos de $\land$ e $\lor$:

$(p \to (q \to r)) \to ((p \to q) \to (p \to r)) \equiv \\
\lnot (\lnot p \lor (\lnot q \lor r)) \lor (\lnot(\lnot p \lor q) \lor (\lnot p \lor r)) \equiv \\
(p \land \lnot (\lnot q \lor r)) \lor ((p\land q) \lor (\lnot p \lor r)) \equiv \\
(p \land (q \land \lnot r)) \lor ((p \land q) \lor (\lnot p \lor r)) \equiv \\
((p \land q) \land (p \land \lnot r)) \lor ((p \land q) \lor (\lnot p \lor r))
$

| $p$ | $q$ | $r$ | $((p \land q) \land (p \land \lnot r)) \lor ((p \land q) \lor (\lnot p \lor r))$ |
|:---:|:---:|:---:|:--------------------------------------------------------------------------------:|
| F   | F   | F   | $(F \land F) \lor (F \lor V) \equiv V$                                           |
| F   | V   | F   | $(F \land F) \lor (F \lor V) \equiv V$                                           |
| F   | F   | V   | $(F \land F) \lor (F \lor V) \equiv V$                                           |
| F   | V   | V   | $(F \land F) \lor (F \lor V) \equiv V$                                           |
| V   | V   | V   | $(V \land F) \lor (V \lor V) \equiv V$                                           |
| V   | V   | F   | $(V \land V) \lor (V \lor F) \equiv V$                                           |
| V   | F   | V   | $(F \land F) \lor (F \lor V) \equiv V$                                           |
| V   | F   | F   | $(F \land V) \lor (F \lor V) \equiv V$                                           |

## 8.

| $p$ | $p \lor \lnot p$    | $p \land \lnot p$    |
|:---:|:-------------------:|:--------------------:|
| F   | $F \lor V \equiv V$ | $F \land V \equiv F$ |
| V   | $V \lor F \equiv V$ | $V \land F \equiv F$ |

## 9.

$p \to (q \to r) \equiv \lnot p \lor (\lnot q \lor r) \equiv \lnot (p \land q) \lor (\lnot p \lor r) \\
(p \to q)\to r \equiv \lnot(\lnot p \lor q) \lor r \equiv (p \land \lnot q) \lor r \equiv (p \lor r) \land (r \lor \lnot q)
$

| $p$ | $q$ | $r$ | $\lnot (p \land q) \lor (\lnot p \lor r)$ | $(p \lor r) \land (r \lor \lnot q)$ |
|:---:|:---:|:---:|:-----------------------------------------:|:-----------------------------------:|
| F   | F   | F   | $V \lor V \equiv V$                       | $F \land V \equiv F$                |
| F   | V   | F   | $V \lor V \equiv V$                       | $F \land F \equiv F$                |
| F   | F   | V   | $V \lor V \equiv V$                       | $V \land V \equiv V$                |
| F   | V   | V   | $V \lor V \equiv V$                       | $V \land V \equiv V$                |
| V   | V   | V   | $F \lor V \equiv V$                       | $V \land V \equiv V$                |
| V   | V   | F   | $F \lor F \equiv F$                       | $V \land F \equiv F$                |
| V   | F   | V   | $V \lor V \equiv V$                       | $V \land V \equiv V$                |
| V   | F   | F   | $V \lor F \equiv V$                       | $V \land V \equiv V$                |

## 10.

Conforme a seguinte tabela verdade, isso pode ser feito de duas formas: reunindo-se apenas com o representante turco ou, senão, apenas com os representantes turco e russo.

| $a$ | $t$ | $r$ | $(a \land \lnot t) \lor (\lnot a \land t)$ | $(r \lor t)$ | $\lnot (a \land r)$ |
|:---:|:---:|:---:|:------------------------------------------:|:------------:|:-------------------:|
| F   | F   | F   | F                                          | F            | V                   |
| F   | V   | F   | V                                          | V            | V                   |
| F   | F   | V   | F                                          | V            | V                   |
| F   | V   | V   | V                                          | V            | V                   |
| V   | V   | V   | F                                          | V            | F                   |
| V   | V   | F   | F                                          | V            | V                   |
| V   | F   | V   | V                                          | V            | F                   |
| V   | F   | F   | V                                          | F            | V                   |

## 11.

O **princípio da equivalência** descreve que para quaisquer proposições $p$ e $q$ equivalentes entre si que contenham os conectivos $\lnot$, $\land$ ou $\lor$, mas não necessariamente todos, as proposições **duais** destas (proposições obtidas pela substituição de cada $\land$ por $\lor$ e vice-versa; e de cada constante $V$ por $F$ e vice versa) também são equivalentes entre si.

Por exemplo,

$p \land (p \lor p) \iff p$

Como, por hipótese, temos que $p \equiv q$, então

$p \land (p \lor q) \iff p$

Podemos ainda adicionar à formulação anterior o elemento neutro $\lor\ F$:

$(p \lor F) \land (p \lor q) \iff p$

E então simplificá-la:

$\underbrace{p \lor \underbrace{(F \land q)}_{\text{Identidade}}}_{\text{Distributiva}} \iff p \\\ \\
p \lor F \iff p \\
p \iff p
$

Consideremos agora a formulação dual deste mesmo teorema:
$p \lor (p \land q) \iff p \\
(p \land V) \lor (p \land q) \iff p \\
p \land (V \lor q) \iff p \\
p \land V \iff p \\
p \iff p
$

Fica demonstrado que realizando as substituições propostas, "duais", alcançamos resultados equivalentes.

## 12.

Podemos descrever o XOR em termos de conjunção e disjunção da seguinte forma:

$$
p\ \underline \lor\ q \equiv (p \land \lnot q) \lor (\lnot p \land q)
$$

Assim, para este temos a seguinte tabela verdade:

| $p$ | $q$ | $(p \land \lnot q) \lor (\lnot p \land q)$ |
|:---:|:---:|:------------------------------------------:|
| F   | V   | V                                          |
| F   | F   | F                                          |
| V   | V   | F                                          |
| V   | F   | V                                          |

## 13.

**(a)** Vamos simplificar a proposição e admitir que esta seja falsa:

$$
(p \iff (\neg q \lor r)) \to (\neg p \to q) \equiv
(p \iff (\neg q \lor r)) \to (p \lor q) \equiv F
$$

Analizemos a tabela verdade para identificar os valores de $(p \iff (\neg q \lor r))$ e $(p \lor q)$ que levam a este resultado:

| $(p \iff (\neg q \lor r))$ | $(p \lor q)$ | $(p \iff (\neg q \lor r)) \to (p \lor q)$ |
|:--------------------------:|:------------:|:-----------------------------------------:|
| V                          | V            | V                                         |
| V                          | F            | F                                         |
| F                          | V            | V                                         |
| F                          | F            | V                                         |

Apenas quando $(p \iff (\neg q \lor r)) \equiv V$ e $(p \lor q) \equiv F$ obtêm-se tal resultado. Para $(p \lor q) \equiv F$, $p \equiv q \equiv F$. Substituindo estes valores, temos:

$(F \iff (\neg F \lor r)) \equiv V \\
(F \iff (V \lor r)) \equiv V \\
F \iff V \equiv V
$

Chegamos a um absurdo. Assim o sendo, não é possível que esta expressão seja falsa: trata-se de uma **tautologia**.

**(b)** $(p \to (q \lor r)) \lor (p \lor q) \equiv (p \to q) \lor (p \to r)\ \cancel{\lor\ (p \to q)}\ \equiv p \to (q \lor r) \equiv F$

Para produzir esse resultado bastaria que $p \equiv V$ e $q \equiv r \equiv F$. Qualquer outra configuração não produziria resultado verdadeiro. Não se reduziu ao absurdo, esta não se trata de uma tautologia ou contradição.

## 14.

**(a)** $p \land q \equiv \neg(\neg p \lor \neg q)$

**(b)** $p \to q \equiv \neg p \lor q$

**(c)** $p \to q \equiv \neg(p \land \neg q)$

**(d)** $p \land q \equiv \neg (p \to \neg q)$

**(e)** $p \lor q \equiv \neg p \to q$

## 15.

**(a)**

| $p$ | $q$ | $p \uparrow q$ | $\neg p \uparrow \neg q$ |
|:---:|:---:|:--------------:|:------------------------:|
| V   | V   | F              | V                        |
| V   | F   | V              | V                        |
| F   | V   | V              | V                        |
| F   | F   | V              | F                        |

**(b)**

$\neg p \iff p \uparrow p$

$p \land q \iff (p \uparrow q) \uparrow (p \uparrow q)$

$p \lor q \iff (p \uparrow p) \uparrow (q \uparrow q)$

**(c)**

$(p \to q) \iff p \uparrow (q \uparrow q) \iff p \uparrow (p \uparrow q)$

$(p \iff q) \iff (p \uparrow q) \uparrow ((p \uparrow p) \uparrow (q \uparrow q))$

## 16.

**(a)** $(p \iff (((\neg q) \lor r) \to p)) \equiv \\
p \iff ((\neg q \lor r) \to p) \equiv \\
(p \iff \neg q \lor r) \to (p \iff p) \equiv \\
p \iff \neg q \lor r\ \underbrace{\to p}_{\text{redundante}} \equiv \\
p \iff \neg q \lor r
$

**(b)** Como assim? O próprio enunciado demonstrou.