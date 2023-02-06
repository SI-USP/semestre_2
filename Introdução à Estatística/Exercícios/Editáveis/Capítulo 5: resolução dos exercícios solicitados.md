# Capítulo 5: resolução dos exercícios solicitados

> Do livro-texto "Estatística básica", 5ª edição por Bussab e Morettin.

## Exercício 23

Uma companhia produz circuitos em três fábricas, $I$, $II$ e $III$. A fábrica $I$ produz 40% dos circuitos, enquanto a $II$ e a $III$ produzem 30% cada uma. As probabilidades de que um circuito integrado produzido por essas fábricas não funcione são 0,01, 0,04 e 0,03, respectivamente. Escolhido um circuito da produção conjunta das três fábricas, qual a probabilidade de o mesmo não funcionar?

### Resolução

Sumarizemos os dados descritos acima.

A probabilidade de uma dada peça ter origem em cada uma das três fábricas:

- $P(I) = \dfrac 4{10}$

- $P(II) = P(III) = \dfrac 3{10}$

A probabilidade da peça apresentar falha $(F)$ quando originada de cada uma destas fabricas:

- $P(F \mid I) = \dfrac 1{100}$

- $P(F \mid II) = \dfrac 4{100}$

- $P(F \mid III) = \dfrac 3{100}$

Estamos aqui buscando encontrar a probabilidade de uma peça apresentar falha tendo sido originada *nalguma* destas três fabricas que, juntas, constituem a *totalidade* do espaço amostral. Ou seja, buscamos $P(F)$. Como as diferentes fabricas constituem origens mutualmente exclusivas para a peça em questão, estas constituem **partições** do espaço amostral e portanto devemos calcular a soma do produto das intersecções "chance de ter se originado naquela fabrica" vezes "de apresentar falha por consequência disto":

$P(F) = P(I) \cdot P(F \mid I) + P(II) \cdot P(F \mid II) +
P(III) \cdot P(F \mid III) =\\\ \\ \dfrac 4{10} \cdot \dfrac 1{100} + \dfrac 3{10} \cdot \dfrac 4{100} + \dfrac 3{10} \cdot \dfrac 3{100}= \dfrac{4 + 12 + 9}{1000} = \dfrac 1{40}\ \blacksquare$

## Exercício 38

Um fabricante afirma que apenas 5% de todas as válvulas que produz têm duração inferior a 20 horas. Uma indústria compra semanalmente um grande lote de válvulas desse fabricante, mas sob a seguinte condição: ela aceita o lote se, em dez válvulas escolhidas ao acaso, no máximo uma tiver duração inferior a 20 horas; caso contrário, o lote todo é rejeitado.

**a)** Se o fabricante de fato tem razão, qual a probabilidade de um lote ser rejeitado?

São as possibilidades em que o lote **não** é rejeitado:

- Nenhuma válvula apresenta duração inferior à 20 horas. A probabilidade disto ocorrer é

$$
\dfrac{19^9}{20^{10}}
$$

- Apenas uma das dez válvulas apresenta duração inferior à 20 horas. A probabilidade disto ocorrer é

$$
10 \cdot \dfrac1{20} \cdot \left(\dfrac{19}{20}\right)^9
$$

Assim sendo, descontadas estas possibilidades do universo de possibilidades, temos:

$1 - \left[\left(\dfrac{19}{20}\right)^{10} + \dfrac{10}{20} \cdot \left(\dfrac{19}{20}\right)^9\right] = 1 - \dfrac{19^9}{20^{10}} (19 + 10) = 1 - \dfrac{19^9}{20^{10}} \cdot  29\\ \approx 0,086 = 8,6\%\ \blacksquare$

**b)** Suponha agora que o fabricante esteja mentindo, isto é, na verdade a proporção de válvulas com duração inferior a 20 horas é de 10%. Qual a probabilidade de um lote ser aceito, segundo o critério acima?

São as possibilidades em que o lote é aceito:

- Nenhuma válvula apresenta duração inferior à 20 horas. A probabilidade disto ocorrer é

$$
\left(\dfrac 9{10}\right)^{10}
$$

- Apenas uma das dez válvulas apresenta duração inferior à 20 horas. A probabilidade disto ocorrer é

$$
10 \cdot \dfrac 1{10} \cdot \left(\dfrac 9{10}\right)^9
$$

Logo, somadas estas duas possibilidades, temos:

$\left(\dfrac 9{10}\right)^{10} + 10 \cdot \dfrac 1{10} \cdot \left(\dfrac 9{10}\right)^9 = \dfrac{9^9}{10^{10}}(9 + 10) = 19 \cdot \dfrac{9^9}{10^{10}} \approx 0,736 = 73,6\%\ \blacksquare$

## Exercício 40

A empresa M & B tem 15.800 empregados, classificados de acordo com a tabela abaixo.

| Idade            | Homens (M) | Mulheres (F) | Total  |
| ---------------- | ---------- | ------------ | ------ |
| < 25 anos (A)    | 2.000      | 800          | 2.800  |
| 25 - 40 anos (B) | 4.500      | 2.500        | 7.000  |
| > 40 anos (C)    | 1.800      | 4.200        | 6.000  |
| Total            | 8.300      | 7.500        | 15.800 |

Se um empregado é selecionado ao acaso, calcular a probabilidade de ser ele:

**a.** um empregado com 40 anos de idade ou menos;

$$
P(A \cup B) = \dfrac{2\ 800 + 7\ 000}{15\ 800} =
\dfrac{98}{158} \approx 0,62
$$

**b.** um empregado com 40 anos de idade ou menos, e mulher;

$$
P((A \cap F) \cup (B \cap F)) = \dfrac{800 + 2\ 500}{15\ 800}
= \dfrac{33}{158} \approx 0,20
$$

**c.** um empregado com mais de 40 anos de idade e que seja homem;

$$
P(M \cap C) = \dfrac{1\ 800}{15\ 800} \approx 0,11
$$

**d.** uma mulher, dado que é um empregado com menos de 25 anos.

$$
P(F \mid A) = \dfrac{800}{2\ 800} = \dfrac 8{28} \approx 0,28
$$