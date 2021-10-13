# Integração por partes

Cada regra de derivação tem outra correspondente de integração. Por exemplo,

- a **Regra de Substituição** para a integração corresponde à **Regra da Cadeia** para a derivação e

- a **Regra do Produto** para a derivação é chamada **Integração por Partes** para a integração.

$\displaystyle \frac d{dx}[f(x)g(x)] = f(x)g'(x) + g(x)f'(x)\\\ \\ \implies f(x)g(x) = \int[f(x)g'(x) + g(x)f'(x)] \\\ \\ \implies f(x)g(x) = \int f(x)g'(x) + \int g(x)f'(x)$

Finalmente podemos rearranjar essa equação como

$$
\int f(x)g'(x) = f(x)g(x) - \int g(x)f'(x)
$$

Formulação esta conhecida como **fórmula da integração por partes**. Sejam $u = f(x)$ e $v = g(x)$. Então as diferenciais são $du = f'(x)\ dx$ e
$dv = g'(x)\ dx$ e, assim, pela Regra da Substituição, a fórmula para a integração por partes torna-se

$$
\int u\ dv = uv - \int v\ du
$$

Para integrais definidas, esta fórmula fica:

$$
\int_a^b u\ dv = uv\Big |^b_a - \int^b_av\ du
$$
