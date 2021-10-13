# Propriedades do Espaço Vetorial

Admitindo $\forall a, b \in \R$ e $\forall u, v \in V$,

## P1

$ae = e$

**Prova:** Dados os axiomas I-3, I-4 e II-3 e da definição de espaço vetorial, têm-se:

$ae = a(e) = \overbrace{a\underbrace{(e + e)}_{\text{I-3}}}^{\text{II-3}} = ae +ae\\ \implies \underbrace{ae + e}_{\text{I-3}} = ae + ae\\ \implies ae + ae + (-ae ) = ae + ae\\ \implies ae + (-ae) = ae + ae + (-ae)\\ \implies \overbrace{e = \underbrace{ae + \cancel e}_{I-3}}^{I-4}$

## P2

$0u = e$

**Prova:** $0u = u(0 + 0) = 0u + 0u \implies 0u + (-0u) = 0u + 0u + (-0u) \implies e = 0u + \cancel e$

## P3

$au = e \iff a = 0 \lor u = e$.

**Prova:** Suponhamos que $a \not= 0$, daí existe o número real $a^{-1}$. Assim, temos:

$$
au = e \implies \dfrac{au}a = \dfrac ea
$$

Aplicando-se os axiomas II-1, II-4 e a propriedade 1:

$$
\underbrace{\dfrac{au}a = \left(\dfrac aa\right) u}_{\text{II-1}} =
\underbrace{1u = u}_{\text{II-4}} \\\ \\
\dfrac ea = \underbrace{a^{-1}e = e}_{\text{P1}}\\\ \\
\therefore u = e
$$

## P4

$(-a)u = a(-u) = -(au)$

**Prova:** Aplicando-se o axioma I-4 e a propriedade 2, temos:

$(au) + (-au) = e \\
\implies au + (-au) = au + (-a)u \\
\implies au + (-au) + (-au) = au + (-a)u + (-au) \\
\implies (-au) + e = (-a)u + e \\
\implies (-au) = (-a)u
$

E um raciocínio análogo demonstrará que $a(-u) = -(au)$.

## P5

$(a - b)u = au - bu$

**Prova:** $(a - b)u = (a + (-b))u = au + (-bu) = au - bu$

## P6

$b\left(\displaystyle \sum^n_{i = 1} a_iu_i\right) = \sum^n_{i = 1} (ba_i)u_i$

**Prova:** Faz-se por indução a partir dos axiomas II-1 e II-3.

## P7

O vetor nulo ($e$) de qualquer espaço vetorial $V$ é único.

**Prova:** digamos que, sei lá, existe $g$ que, tal qual $e$, satisfaz a propriedade I-3

$$
\exist\ e \in V \mid u + e = u
$$

Assim, $e = e + u = u + g = g \implies e = g$.

## P8

Para cada vetor $u$ de um espaço vetorial $V$ existe um único vetor $(-u)$  oposto de $u$.

**Prova:** Digamos que existe $g$ tal que $u + g = e$. Daí então,

$$
-u = -u + e = -u + (u + g) = (-u + u) + g = e + g = g
$$

## P9

Para cada $u \in V$ tem-se $-(-u) = u$.

**Prova:** $u + (-u) = e \implies u = -(-u) + e \implies u = -(-u)$

## P10

$u + v = u + w \iff v = w$

**Prova:**

$$
(-u) + (u + v) = (-u) + (u + w) \implies ((-u) + u) + v = (-u) + (u + w) \\
e + v = e + w \\
v = w
$$

## P11

Existe um único vetor $v$ tal que $u + v = w$.

**Prova:**

$(-u) + u + v = (-u) + w \implies e + v = w + (-u) \implies v = w + (-u)$