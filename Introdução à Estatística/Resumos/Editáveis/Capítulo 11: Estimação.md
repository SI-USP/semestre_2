# Estimação

Consideremos uma amostra $(X_1, X_2, \dots, X_n)$ de uma v.a. que descreve uma característica de interesse de uma  população. Seja $\theta$ um parâmetro que desejamos estimar, como por exemplo a média $\mu = E(X)$ ou a variância $\sigma^2 = Var(X)$. Um **estimador** $T$ do parâmetro $\theta$ é qualquer função das observações da amostra, ou seja, $T = g(X_1, \dots, X_n)$, que seja "próxima" de $\theta$ segundo algum *critério*. **Estimativa** é o valor assumido pelo estimador em uma particular amostra.

Notemos que, segundo essa definição, um estimador é o que chamamos antes de *estatística*, porém aqui associado a um parâmetro *populacional*.

## Viés

O estimador $T$ é *não-viesado* para $\theta$ se $E(T) = \theta$ para todo $\theta$. Por exemplo, vimos, pelo Teorema do Limite Central, que dada uma amostra aleatória simples (AAS), em média, $E(\overline X) = \mu$. Ou seja, $T = E(\overline X)$, dada uma ASS, é um estimador não enviesado de $\mu$. Senão, $T$ diz-se *viesado* e a diferença $V(T) = E(T) - \theta$ é chamado o *viés* de $T$.

Uma notação comumente utilizada é para indicar um estimador para o parâmetro $\theta$ qualquer é $\hat\theta$.

### Exemplo

Vejamos um exemplo de estimador enviesado: seja $N$ a quantidade de elementos em uma população, a variância populacional pode ser descrita por

$$
\sigma^2 = \dfrac 1N \sum^N_{i = 1}(X_i - \mu)^2
$$

Fosse tão simples um estimador não enviesado para a variância quanto o é para a média, um possível estimador $\hat \sigma^2$ para uma amostra de tamanho $n$ seria

$$
\hat \sigma^2 = \frac 1n \sum^n_{i = 1}(X_i - \overline X)^2
$$

Entretanto, este é um estimador enviesado. Mostremos que este é o caso. Pela fórmula descrita no exemplo 3.11 da página 40 temos que 

$$
\hat \sigma ^2 =
\frac 1n \sum^n_{i = 1}(X_i - \overline X)^2 =
\frac 1n \sum^n_{i = 1}X_i^2 - \overline X^2
$$

Logo,

$$
E(\hat \sigma) =
\dfrac 1n \sum^n_{i = 1}E(X_i^2) - E(\overline X^2)
$$

Pela definição de variância de uma variável aleatória, temos que

$$
Var(X_i) = E(X_i^2) + [E(X_i)]^2 \implies
E(X_i^2) = Var(X_i) - [E(X_i)]^2 =\\
\sigma^2 + \mu^2
$$

Enquanto

$$
E(\overline X^2) = Var(\overline X) + [E(\overline X)]^2 =
\dfrac{\sigma^2}n + \mu^2
$$

Segue-se que

$$
E(\hat \sigma^2) =
\frac 1n \sum^n_{i = 1} (\sigma^2 + \mu^2) -
\left(\frac{\sigma^2}n + \mu^2\right) = 
\frac 1n[n(\sigma^2 + \mu^2)] - \dfrac{\sigma^2}n - \mu^2 =\\
\sigma^2 - \dfrac{\sigma^2}n = \sigma^2\left(1 - \frac 1n\right) =
\left(\frac{n - 1}n\right)\sigma^2
$$

Logo, temos que $\hat \sigma^2$ é viesado para $\sigma^2$ e seu viés é dado por

$$
V(\hat\sigma^2) = E(\hat\sigma^2) - \sigma^2 = - \frac{\sigma^2}n
$$

Como esse viés é negativo, o estimador $\sigma^2$ em geral subestima o verdadeiro parâmetro $\sigma^2$. Por outro lado este viés se reduz conforme $n$ aumenta e, formalmente, para $n \to \infty$ tende a zero.

Para corrigir-se o viés, o estimador de $\sigma^2$ à partir de $\hat \sigma^2$ necessita ser acrecido de um valor $\gamma$ tal que $E(\gamma\hat\sigma^2) = \sigma^2$. Ou seja:

$$
E(\gamma\hat\sigma^2) = \sigma^2 \implies
\gamma E(\hat \sigma^2) = \sigma^2 \implies
\gamma = \frac{\sigma^2}{E(\hat\sigma^2)} =
\frac{\sigma^2}{\left(\frac {n - 1}n\right)\sigma^2} 
= \frac n{n - 1}
$$

Ou seja, a fórmula não enviesada de um estimador $S^2$ para $\sigma^2$ seria:

$$
S^2 = \frac n{n - 1} \cdot \frac 1 n
\sum^n_{i = 1}(X_i - \overline X)^2 =
\frac 1{n - 1} \sum^n_{i = 1}(X_i - \overline X)^2
$$

## Consistência

Uma sequência $\{T_n\}$ de estimadores de um parâmetro $\theta$ é **consistente** se para todo $\varepsilon > 0$,

$$
\lim_{n \to \infty} E(T_n) = \theta
$$

e 

$$
\lim_{n \to \infty} Var(T_n) = 0
$$