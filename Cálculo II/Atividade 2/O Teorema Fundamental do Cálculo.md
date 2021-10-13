# O Teorema Fundamental do Cálculo

## Parte 1

Se a função $f$ for contínua em $[a, b]$, então a função

$$
g(x) = \int^x_af(t)\ dt \text{ (na qual }a \le x \le b)
$$

é contínua em $[a,b]$, derivável em em $(a, b)$ e $g'(x) = f(x)$. Grosseiramente falando: *se primeiro integramos $f$ e então derivamos o resultado, retornamos à função original $f$.*

### Exemplos

**1.** Encontre a derivada da função $g(x) = \int_0^x \sqrt{1 + t^2}\ dt$

---

Uma vez que no período descrito $f(t) = \sqrt{1 + t^2}$ é contínua, a Parte 1 do Teorema Fundamental do Cálculo fornece que 

$$
g'(x) = \sqrt{1 + x^2}
$$

---

**2.** Derive:

$$
\frac d{dx} \int_1^{x^4} \sec t\ dt
$$

---

$\displaystyle \frac d{dx} \underbrace{\int_1^{x^4} \sec t\ dt}_{u\ =\ x^4} = \frac d{du} \left[\int^u_1 \sec t\ dt\right] \frac{du}{dx} = \sec x^4 \cdot 4x^3$

> **Obs:** A aplicação deste teorema exige que a incógnita esteja no limite superior. Inverta a integral se necessário for.

## Parte 2

Se a função $f$ for contínua em $[a, b]$, então

$$
\int^b_a f(x)\ dx = F(b) - F(a)
$$

onde $F$ é qualquer primitiva de $f$, isto é, uma função tal que $F' = f$.

Frequentemente utiliza-se a seguinte notação equivalente:

$$
F(b) - F(a) = F(x) |^b_a
$$