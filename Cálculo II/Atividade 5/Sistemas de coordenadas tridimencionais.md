# Sistemas de coordenadas tridimencionais

## Fórmula da distância em três dimensões

A fórmula familiar para a distância entre dois pontos em um plano é estendida facilmente para a seguinte fórmula tridimensional. A distância $|P_1P_2|$ entre os pontos $P_1(x_1, y_1, z_1)$ e $P_2(x_2, y_2, z_2)$ é

$$
|P_1P_2| = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2 + (z_2 - z_1)^2}
$$

## Equação da esfera

Para um esfera de centro em $C(h, k, y)$, um ponto $P(x,y,z)$ encontra-se na superfície da esfera se

$$
(x - h)^2 + (y - k)^2 + (z - l)^2 = r^2
$$

Em particular, se o centro da esfera encontra-se na origem, a equação pode ser descrita mais facilmente como:

$$
x^2 + y^2 + z^2 = r^2
$$

### Exemplo

Mostre que $x^2 + y^2 + z^2 + 4x - 6y + 2z + 6 = 0$ é a equação de uma esfera e encontre seu **centro** e **raio**.

#### Resolução

Podemos reescrever a equação dada na forma da equação de uma esfera se completarmos os quadrados:

$$
(x^2 + 4x + 4) + (y^2 - 6y + 9) + (z^2 + 2z + 1) = -6 + 4 + 9 + 1\\
\therefore (x + 2)^2 + (y - 3)^2 + (z + 1)^2 = (2\sqrt 2)^2
$$

Logo, as coordenadas $C(h, k, l)$ do centro da esfera são $(-2, 3, -1)$ e esta possui raio $2\sqrt 2$.
