# Resolução de Exercícios

> Capítulo 10

**1.**

**a)** A amostra em questão possui vício de consentimento pois entrevista somente os operários aqueles mais afetados pela mudança. No mais, se considerarmos que a mudança de horário de início das atividades também impacte o horário de término destas, teremos um grupo de operários no último turno também significativamente afetados pela medida os quais não seriam considerados.

**b)** Não apresenta vício, já que não existe correlação entre o horário de entrada e a altura dos operários.

**c)** Apresenta-se vício, já que as prefeituras aquelas que não fizeram investimentos significativos nesta área podem optar por omitir esta informação e aparentarem realizar maiores investimentos dado o resultado da pesquisa.

**d)** Não apresenta vício *se os supermercados apresentarem, inicialmente, uma quantidade homogênea de vendas*. Já que lojas com e sem brindes só são comparadas com as demais da mesma categoria.

**3.**

**a)** Listam-se as famílias e o número de filhos, cada qual em uma cédula colocada em uma mesma urna. Mistura-se o conteúdo da urna e retira-se uma cédula.

**b)** Considerando uma amostra AAS, ou uma amostra tão vasta que a remoção de duas famílias desta não impactaria significativamente nos percentuais descritos pelas probabilidades, teríamos:

|           | 0    | 1   | 2    | 3      | 4      | Total  |
| ---------:| ----:| ---:| ----:| ------:| ------:| ------:|
| **0**     | 1%   | 2%  | 3%   | 2,5%   | 1,5%   | 10%    |
| **1**     | 2%   | 4%  | 6%   | 5%     | 3%     | 20%    |
| **2**     | 3%   | 6%  | 9%   | 7,5%   | 4,5%   | 30%    |
| **3**     | 2,5% | 5%  | 7,5% | 6,25%  | 3,5%   | 24,75% |
| **4**     | 1,5% | 3%  | 4,5% | 3,5%   | 2,25%  | 14,25% |
| **Total** | 10%  | 20% | 30%  | 24,75% | 14,25% | 99%    |

> Esqueci 1% nalgum lugar. :sweat:

**c)** A probabilidade de se obter a quadrupla (2, 3, 3, 1) em *qualquer ordem* é

$$
\frac 3{10} \cdot \frac 14 \cdot \frac 14 \cdot \frac15 
$$

Obtido este resultado, este pode vir ordenado em $4!$ maneiras diferentes, das quais apenas 2 nos interessam (o par de três pode figurar em qualquer ordem). Logo, a probabilidade deste evento é

$$
p = \frac {\cancel 3}{10} \cdot \frac 14 \cdot \frac 14 \cdot \frac15
\cdot \frac{\cancel 2}{4 \cdot \cancel 3 \cdot \cancel 2} =
\dfrac 1{160} \cdot \frac 1{20} = \frac 1{32} =
3,125\%\ \blacksquare
$$

**4.**

| x~1~ | x~2~ | P(X~1~ = x~1~, X~2~ = x~2~) | $\bm{\hat\sigma^2}$                  |
| ---- | ---- | --------------------------- | ------------------------------------ |
| 1    | 1    | 1/25                        | $\dfrac{(1 - 1)^2 + (1 - 1)^2}2 = 0$ |
| 1    | 3    | 1/25                        | 1                                    |
| 1    | 5    | 2 · 1/25 = 2/25             | 4                                    |
| 1    | 7    | 1/25                        | 9                                    |
| 3    | 1    | 1/25                        | 1                                    |
| 3    | 3    | 1/25                        | 0                                    |
| 3    | 5    | 2/25                        | 1                                    |
| 3    | 7    | 1/25                        | 4                                    |
| 5    | 1    | 2/25                        | 4                                    |
| 5    | 3    | 2/25                        | 1                                    |
| 5    | 5    | 4/25                        | 0                                    |
| 5    | 7    | 2/25                        | 1                                    |
| 7    | 1    | 1/25                        | 9                                    |
| 7    | 3    | 1/25                        | 4                                    |
| 7    | 5    | 2/25                        | 1                                    |
| 7    | 7    | 1/25                        | 0                                    |

Compilando estes resultados em uma tabela, tem-se:

| v                 | 0    | 1     | 4    | 9    |
|:-----------------:|:----:|:-----:|:----:|:----:|
| $P(\sigma^2 = v)$ | 7/25 | 10/25 | 6/25 | 2/25 |
