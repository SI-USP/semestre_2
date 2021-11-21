# Limites e continuidade

Seja $f$ uma função de duas variáveis cujo domínio $D$ contém pontos arbitrariamente próximos de $(a,b)$. Dizemos que o limite de $f(x,y)$ quando $(x,y)$ tende a $(a,b)$ é $L$ e escrevemos

$$
\lim_{(x,y) \to (a,b)} f(x,y) = L
$$

se para todo número $\varepsilon > 0$ houver um número correspondente de $\delta > 0$ tal que se $(x,y) \in D$ e $0 < \sqrt{(x - a)^2 + (y - b)^2} < \delta$ então $|f(x,y) - L| < \varepsilon$[^1].

Se $f (x, y) \to L_1$ quando $(x, y) \to (a, b)$ ao longo do caminho $C_1$ e $f (x, y) \to L_2$ quando $(x, y) \to (a, b)$ ao longo do caminho $C_2$, com $L_1 \not = L_2$, então $\lim_{(x, y) \to (a, b)} f (x, y)$ não existe.

[^1]: Observe que $|f(x,y) - L |$ corresponde à distância entre os números $f (x, y)$ e $L$, e $\sqrt{(x - a)^2 + (y - b)^2}$ é a distância entre o ponto $(x, y)$ e o ponto $(a, b)$. Noutras palavras, a definição diz que a distância entre $f (x, y)$ e $L$ pode ser feita arbitrariamente pequena se tornarmos a distância de $(x, y)$ a $(a, b)$ suficientemente pequena (mas não nula).