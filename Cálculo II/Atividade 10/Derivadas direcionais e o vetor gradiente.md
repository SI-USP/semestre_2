# Derivadas direcionais e o vetor gradiente

## Derivadas direcionais

A **derivada direcionada** de $f$ em $(x_0,y_0)$ na direção do vetor unitário $\textbf u = \lang a,b \rang$ é

$$
D_\textbf uf(x_0,y_0) = \lim_{h \to 0} \dfrac{f(x_0 + ha, y_0 + hb) - f(x_0,y_0)}h
$$

Onde $x = x_0 + ha$ e $y = y_0 + hb$.

A seguinte imagem ilustra a representação espacial da equação:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-23-12-42-31-image.png" title="" alt="" data-align="center">

Podemos reescrever este limite em termos das derivadas parciais de $x$ e $y$ e, pela Regra da Cadeia, das derivadas de $x$ e $y$ com relação à $h$:

$$
D_\textbf u f = \frac{\partial f}{\partial x} \frac{dx}{dh} +
\frac{\partial f}{\partial y} \frac{dy}{dh} = f_x(x,y)a + f_y(x,y)b
$$

Ainda, se o vetor unitário $\textbf u$[^1] faz um ângulo $\theta$ com o eixo $x$ positivo (como na figura anterior), então podemos escrever $\textbf u = \lang \cos \theta, \sin \theta \rang$ e a fórmula do Teorema anterior fica

$$
D_\textbf u f (x,y) = f_x(x,y)\cos \theta + f_y(x,y)\sin \theta
$$

## Vetor gradiente

Outra maneira de se escrever a função anterior é como o produto escalar de dois vetores:

$$
D_\textbf{u} f(x,y) = f_x(x,y)a + f_y(x,y)b =
\lang f_x(x,y), f_y(x,y) \rang \cdot \lang a,b \rang =\\\ \\
\lang f_x(x,y), f_y(x,y) \rang \cdot \textbf u
$$

Onde $\textbf u$ é o vetor unitário, ou **versor**. O primeiro vetor deste produto escalar ocorre em diversas situações e por isso recebe o nome especial de **vetor gradiente** de $f$. Este pode ser denotado por:

$$
\nabla f(x,y) = \lang f_x(x,y), f_y(x,y) \rang =
\frac{\partial f}{\partial x}\textbf i +
\frac{\partial f}{\partial y}\textbf j
$$

Ou seja,

$$
D_\textbf u f(x,y) = \nabla f(x,y) \cdot \textbf u
$$

## Maximizando a Derivada Direcional

Suponha $f$ uma função diferenciável de duas ou três variáveis. O valor máximo da derivada direcional $D_ \textbf u f(\textbf v)$ é $|\nabla f(\textbf v)|$. O que ocorre quando o vetor unitário $\textbf u$ tem a mesma direção do vetor gradiente $\nabla f(\textbf v)$.

A variação de direção entre dois vetores pode ser dada pelo cosseno de um dado ângulo $\theta$. Assim, o valor máximo de $\cos \theta$ é $1$ quando $\theta = 0$.

$$
D_\textbf u = \nabla f \cdot \textbf u =
|\nabla f||\textbf u| \cos \theta = |\nabla f| \cos \theta
$$

## Planos Tangente às Superfícies de Nível

Tal qual visto anteriormente, o plano tangente a uma superfície $S$ descrita por $f(x,y)$ em um ponto $P$ é descrito pela formula da sua **diferenciação total**: 

$$
f'(x,y) = f_x(x,y)\ dx + f_y(x,y)\ dy
= \frac{\partial z}{\partial x}\ dx + \frac{\partial z}{\partial y}\ dy
$$

Podemos reescrever essa equação em termos de produto notável:

$$
f'(x,y) = f_x(x,y)\ dx + f_y(x,y)\ dy =
\lang f_x,f_y \rang \cdot \lang dx, dy \rang = \nabla f \cdot \textbf r'
$$

Onde $\textbf r'$ é a reta tangente à superfície e portanto paralela ao plano tangente. Tal qual ilustra a seguinte representação:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%2010/Imagens/2021-11-24-13-17-40-image.png" title="" alt="" data-align="center">

O que esta equação nos diz, portanto, é que o vetor gradiente é perpendicular ao vetor tangente para qualquer curva $C$ em $S$ que passe em $P(x_0,y_0)$.

> Não entendi o resto

[^1]: Para encontrar o vetor unitário $\textbf u$, ou versor, de um dado vetor $\textbf v$, aplique a fórmula: $\textbf u = \frac{\textbf v}{| \textbf v |}$