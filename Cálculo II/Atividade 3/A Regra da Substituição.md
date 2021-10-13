# A Regra da Substituição

## Em integrais indefinidas

Se $u = g(x)$ for uma função derivável cuja imagem é um intervalo $I$ e $f$ for contínua em $I$ , então

$$
\int f(g(x))\ g'(x)\ dx = \int f(u)\ du = F(g(x)) + C
$$

## Em integrais definidas

Se $g'$ for contínua em $[a, b]$ e $f$ for contínua na imagem de $u = g(x)$, então

$$
\int^b_a f(g(x))\ g'(x)\ dx = \int^{g(b)}_{g(a)}f(u)\ du = F(u)\Big |^{g(b)}_{g(a)}
$$