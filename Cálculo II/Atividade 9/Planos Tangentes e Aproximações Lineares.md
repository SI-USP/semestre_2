# Planos Tangentes e Aproximações Lineares

## Planos tangentes

Suponha que $f$ tenha derivadas parciais contínuas. Uma equação do plano tangente à superfície $z = f(x,y)$ no ponto $P(x_0,y_0, z_0)$ é dada por

$$
z - z_0 = f_x(x_0,y_0)(x - x_0) + f_y(x_0,y_0)(y - y_0)
$$

### Exemplo

Determine o plano tangente ao paraboloide elíptico $z = 2x^2 + y^2$ no ponto $(1, 1, 3)$.

#### Resolução

Seja $f(x,y) = 2x^2 + y^2$. Então

$f_x(x,y) = 4x \implies f_x(1,1) = 4 \\ f_y(x,y) = 2y \implies f_y(1,1) = 2$

Portanto, temos a equação do plano tangente em $(1,1,3)$ como

$$
z - 3 = 4(x - 1) + 2(y - 1) \implies z = 4x + 2y - 3\ \blacksquare
$$

## Aproximações lineares

### Para funções de uma única variável

Dada uma função $f(x)$ contínua e uma variável real $x$ cujo valor é próximo de uma constante $a$, temos:

$$
f(x) \approx f(a) + f'(a)(x-a)
$$

Tal qual ilustra o seguinte gráfico:

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-15-18-48-33-image.png" title="" alt="" data-align="center">

Ou seja para valores próximos de $a$, a curva descrita pela função $f(x)$ se aproxima de uma reta que contém o valor $a$. Desta forma, é possível utilizar uma função afim $L(x)$ de maneira a obter uma aproximação da função geral $f(x)$, tal que $L(x) = f(a) + f'(a)(x-a) \approx f(x)$. Onde $L(x)$ é denominada a **linearização** de $f$ no ponto $a$.

#### Exemplo

Calculemos o valor aproximado de $\sqrt[3]{25}$.

##### Resolução

1. Seja $f(x) = x^{\frac 13}$, o problema consiste em encontrar o valor de $f(25)$.

2. Precisamos de um valor próximo de 25, do qual saibamos qual é a raiz cúbica. Sabemos que $f(27) = 3$, então usemos $a = 27$.

3. Derivando $f(x)$ e encontrando o valor de $f'(a)$:

$$
f'(x) = \frac{x^{- \frac 23}}3 = \frac 1{3 \sqrt[3]{x^2}} \implies
f'(27) = \dfrac 1{3\sqrt[3]{27^2}} = \frac 1{27}
$$

4. Usando a aproximação linear:

$$
f(25) \approx f(27) + f'(27)(25 - 27) = 3 - \frac 2{27} \approx 2,926
$$

5. O resultado 2,926 é um valor bem próximo, e portanto uma boa aproximação, do valor real 2,924.

### Para funções com duas variáveis

O mesmo procedimento pode ser realizado uma função com duas variáveis $f(x,y)$ fazendo uso de suas derivadas parciais de $x$ e $y$: $f_x$ e $f_y$. Tal que chegamos na seguinte fórmula:

$$
L(x,y) = f(a,b) + f_x(a,b)(x - a) + f_y(a,b)(y - b) \approx f(x,y)
$$

Onde $a$ e $b$ são constantes tais que $x \approx a$ e $y \approx b$.

### Para funções com três ou mais variáveis

De forma análoga, temos:

$L(x,y,z) = f(a,b) + f_x(a,b,c)(x - a) + f_y(a,b,c)(y - b)\\ + f_z(a,b,c)(z - c) \approx f(x,y,z)$

E assim por diante.

## Diferenciabilidade

Se $z = f(x,y)$, então $f$ é **diferenciável** em $(a,b)$ de $\Delta z$ puder ser expresso na forma

$$
\Delta z = f_x(a,b)\Delta x + f_y(a,b)\Delta y + \varepsilon_1\Delta x + \varepsilon_2 \Delta y
$$

onde tanto $\varepsilon_1$ e $\varepsilon_2 \to 0$ quando $(\Delta x,\Delta y) \to (0,0)$

Ou seja, uma função é diferenciável se, e somente se, sua aproximação linear fornece uma boa aproximação para $f(x,y)$ para valores próximos de $f(a,b)$.

### Teorema

Se as derivadas parciais $f_x$ e $f_y$ existirem perto do ponto $(a, b)$ e forem contínuas em $(a, b)$, então $f$ é diferenciável em $(a, b)$.

## Diferenciais

### Para funções de uma única variável

Para uma função de uma única variável, $y = f (x)$, definimos a diferencial $dx$ como uma variável independente; ou seja, $dx$ pode valer qualquer número real. A diferencial de $y$ é definida como

$$
dy = f'(x)\ dx
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-16-10-55-02-image.png" title="" alt="" data-align="center">

### Para funções de duas variáveis

Para uma função de duas variáveis, $z = f (x, y)$, definimos as diferenciais $dx$ e $dy$ como variáveis independentes; ou seja, podem ter qualquer valor. Então a diferencial $dz$ também chamada de **diferenciação total**, é definida por

$$
dz = f_x(x,y)\ dx + f_y(x,y)\ dy
= \frac{\partial z}{\partial x}\ dx + \frac{\partial z}{\partial y}\ dy
$$

> Algumas vezes a notação utilizada para a diferenciação total é $df$.

E assim, com a notação diferencial, a aproximação linear pode ser escrita como

$$
f(x,y) \approx f(a,b) + dz
$$

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Cálculo%20II/Atividade%209/Imagens/2021-11-16-11-03-28-image.png" title="" alt="" data-align="center">

### Para funções de três variáveis

Analogamente,

$$
dw = yz\ dx + xz\ dy + xy\ dz
= \frac{\partial w}{\partial x}\ dx + \frac{\partial w}{\partial y}\ dy
+ \frac{\partial w}{\partial z}\ dz
$$