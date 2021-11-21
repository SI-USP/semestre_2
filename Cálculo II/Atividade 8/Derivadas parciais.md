# Derivadas Parciais

Se $f$ é uma função de duas variáveis ($x$, $y$), suas derivadas parciais são as funções $f_x$ e $f_y$ definidas por

$$
f_x (x, y) = \lim_{h \to 0} \frac{f[(x + h),y] - f(x,y)}h \\\ \\
f_y (x, y) = \lim_{h \to 0} \frac{f[x,(y + h)] - f(x,y)}h
$$

Outras notações utilizadas para derivadas parciais:

$$
f_x(x,y) = f_x = \frac{\partial f}{\partial x}
= \frac{\partial}{\partial x} f(x,y) = \frac{\partial z}{\partial x} = 
f_1=D_1f = D_xf
$$

Onde $z = f(x,y)$ e o numerador $1$ é um índice que indica a primeira variável do par ordenado.

## Regra para determinar Derivadas Parciais de $\mathbf{z = f(x,y)}$

1. Para determinar $f_x$, trate $y$ como uma constante e derive $f(x,y)$ com relação a $x$.
2. Para determinar $f_y$, trate $x$ como uma constante e derive $f(x,y)$ com relação a $y$.

## Derivadas de Ordem Superior

Se $f$ é uma função de duas variáveis, suas derivadas parciais $f_x$ e $f_y$ são funções de duas variáveis, de modo que podemos considerar novamente suas derivadas parciais$ (f_x)_x$, $(f_x)_y$, $(f_y)_x$ e $(f_y)_y$, chamadas **derivadas parciais de segunda ordem** de $f$. Se $z = f(x, y)$, usamos a seguinte notação, por exemplo:

$$
(f_x)_x = f_{xx} = f_{11}
= \frac \partial{\partial x} \left( \frac {\partial f}{\partial x}\right)
= \frac {\partial^2f}{\partial x^2} = \frac {\partial^2z}{\partial x^2}
$$

### Teorema de Clairaut

Suponha que $f$ seja definida em uma bola aberta $D$ que contenha o ponto $(a, b)$. Se as funções $f_{xy}$ e $f_{yx}$ forem ambas contínuas em D, então

$$
f_{xy}(a,b) = f_{yx}(a,b)
$$