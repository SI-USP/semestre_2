# Integrais Indefinidas e o Teorema da Variação Total

A notação $\int f(x)\ dx$ é tradicionalmente usada para denotar a primitiva de $f$ e é chamada **integral indefinida**.

$$
\int f(x)\ dx = F(x) \implies F'(x) = f(x)
$$

Por exemplo,

$$
\int x^2\ dx = \dfrac{x^3}3 + C \implies \frac d{dx} \left( \frac{x^3}3 + C\right) = x^2
$$

**Obs.:** A integral **indefinida**, de forma $\int f(x)\ dx$, representa toda uma *família* de funções (uma primitiva para cada valor constante $C$), enquanto uma integral **definida**, de forma $\int_a^b f(x)\ dx$ representa um *número*. A relação entre estas é dada por:

$$
\int f(x)\ dx \Big |^b_a =  \int_a^b f(x)\ dx
$$

## Variação total

Sabemos que $F'(x)$ representa a taxa de variação de $y = F(x)$. Portanto, a integral

$$
\int_a^b F'(x)\ dx = F(b) - F(a)
$$

Representa a taxa de variação total. Esse princípio pode ser aplicado para todas as taxas de variação nas ciências naturais e sociais.

### Exemplo

Se $V(t)$ for o volume de água em um reservatório no instante $t$, então sua derivada $V'(t)$ é a taxa segundo a qual a água flui para dentro do reservatório no instante $t$. Logo,

$$
\int_a^b V'(x)\ dx = V(b) - V(a)
$$

é a variação na quantidade de água no reservatório entre os instantes de tempo $t_1$ e $t_2$ .