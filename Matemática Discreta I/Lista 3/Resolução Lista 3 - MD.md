# Resolução da [Lista 3](https://drive.google.com/file/d/11EVnUCFLDsAWBr3CKzHrrxE9ZWtppUSw/view?usp=drive_web&authuser=0) da disciplina de Matemática Discreta

> Feita por Guilherme de Abreu Barreto[^1]

## Teoria dos Conjuntos

### Exercício 1

**(a)** O conjunto dos planetas no Sistema Solar;

**(b)** O conjunto dos Estados Federativos da República do Brasil.

**(c)** O conjunto dos números naturais pares;

**(d)** O conjunto de potências de 2 para qualquer expoente ${x \in \N : x \ge 1}$;

**(e)** O conjunto dos números primos.

### Exercício 2

$A \cap B \cap C$: o conjunto das argentinas residentes no Brasil;

$B \backslash A$: o conjunto dos residentes no Brasil que não são argentinos;

$C \backslash A$: o conjunto das mulheres no mundo que não são argentinas;

$C \backslash B$: o conjunto das mulheres no mundo que não residem no Brasil;

$B \backslash C$: o conjunto de residentes homens no Brasil.

### Exercício 3

$$
\begin{matrix}
\{\}      & \{a\}     & \{b\}     & \{c\} \\
\{d\}     & \{a,b\}   & \{a,c\}   & \{a,d\} \\
\{b,c\}   & \{b,d\}   & \{c,d\}   & \{a,b,c\} \\
\{a,b,d\} & \{a,c,d\} & \{b,c,d\} & \{a,b,c,d\}
\end{matrix}
$$

### Exercício 4

$$
\binom 52 = \frac{5!}{2!(5 - 2)!} = 10
$$

### Exercício 5

A relação de contingência é transitiva. Então se A está contido em B, e B está contido em C, A está contido em C. Tal qual ilustra a seguinte imagem (em ordem reversa):

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-27-18-24-07-image.png" title="" alt="" data-align="center">

### Exercício 6

Se $A$ está contido em $B$, então a união de $A$ com $C$ está contida pela união de $B$ com $C$. De fato, o seguinte diagrama de Venn demonstra esta proposição:

| A, B, C                                                                                                                                                      | B ∪ C                                                                                                                                                        | B ∪ C ⊆ A ∪ C                                                                                                                                                |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/0666956f5b22720e81a8b19e0123d0bbb181e628.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/5bafa135117158e2f35d20cd8722390c445cb0db.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/79a22d36358fc370cc73cc65d857f9927d7e6fa8.png) |

### Exercício 7

Um dado conjunto A é subconjunto de um conjunto B se A está **contido** em B, isto é, todos os elementos de A também são elementos de B. Os elementos de A e B podendo mesmo coincidir.

Segue desta definição de subconjunto que o conjunto vazio é contido por todos os conjuntos, pois todos os conjuntos existentes contém os elementos que compõem o conjunto vazio, isto é, nenhum (todos tem nada e mais algo). Ainda, mesmo o conjunto vazio contém todos os elementos que constituem... o conjunto vazio, e portanto também o contém.

### Exercício 8

Uma vez que $A\backslash B = A \cap \overline B$, temos:

$(A \backslash B) \cup (B \backslash A) 
= (A \cap \overline B) \cup (B \cap \overline A) = \underbrace{[(A \cap \overline B) \cup B] \cap [(A \cap \overline B) \cup \overline A]}_{\text{Distributiva}} \\ = [(A \cup B) \cap (\overline B \cup B)] \cap [(A \cup \overline A) \cap (\overline B \cup \overline A)] = [(A \cup B) \cap \Omega] \cap [\Omega \cap (\overline B \cup \overline A)]\\ = (A \cup B) \cap (\overline B \cup \overline A) = (A \cup B) \cap \underbrace{(\overline{A \cap B})}_{\text{De Morgan}} = (A \cup B) \backslash (A \cap B)\,\blacksquare$

### Exercício 9

#### Associatividade na intersecção

| $B \cap C$                                                                                                                                                   | $A \cap (B \cap C)$                                                                                                                                                 |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/f6718e43f7bfc4d96bf626cbfeaef9a5a00f1257.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/5d43aa55b225aa01a83f79681161cddf4d3ee3fe.png)        |
| $A \cap B$                                                                                                                                                   | $(A \cap B) \cap C$                                                                                                                                                 |
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/ad71acd12cdaba338848679d7b7f76154e757687.png) | ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/5d43aa55b225aa01a83f79681161cddf4d3ee3fe.png) |

#### Associatividade na união

| $B \cup C$                                                                                                                                                   | $A \cup (B \cup C)$                                                                                                                                          |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/19640c8af4dfea52049f762f52e639a479e36313.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/1d66ddcd5609c366f062eff22f73812fb8282708.png) |
| $A \cup B$                                                                                                                                                   | $(A \cup B) \cup C$                                                                                                                                          |
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/8f848a759ab6843f845632e171fef607836d22b2.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/1d66ddcd5609c366f062eff22f73812fb8282708.png) |

### Exercício 10

#### Distributividade da intersecção na união

| $B \cup C$                                                                                                                                                          | $A \cap (B \cup C)$                                                                                                                                          |
|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/19640c8af4dfea52049f762f52e639a479e36313.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/99652ebfc205887cb033d4e3d1cbcaee520c9650.png) |

| $A \cap B$                                                                                                                                                   | $A \cap C$                                                                                                                                                   | $(A \cap B) \cup (A \cap C)$                                                                                                                                        |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/ad71acd12cdaba338848679d7b7f76154e757687.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/8dc7516caa67a0946b53c8951a9a9c8ac2d47268.png) | ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/99652ebfc205887cb033d4e3d1cbcaee520c9650.png) |

| $A \cup B$                                                                                                                                                          | $A \cup C$                                                                                                                                                   | $(A \cup B) \cap (A \cup C)$                                                                                                                                 |
|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/8f848a759ab6843f845632e171fef607836d22b2.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/0eb7d5b2aaea2eeec7c705ecabcdd4b00db40016.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/38c95bfe63bf5c57d9a87ee53ca75547674b9e99.png) |

### Exercício 11

#### Complemento da intersecção

| $A \cap B$                                                                                                                                           | $\overline{A \cap B}$                                                                                                                                                                                  |
|:----------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-27-23-10-23-image.png) | <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/6a0ef6868c5af59f3618ee4e6d3999b1f751901a.png" title="" alt="" width="212"> |

| $\overline A$                                                                                                                                 | $\overline B$                                                                                                                                                | $\overline A \cup \overline B$                                                                                                                                                                         |
|:---------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-28-13-05-14-image.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/57d9f887a8685e25de0394759eccc5808736a5bf.png) | <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/6a0ef6868c5af59f3618ee4e6d3999b1f751901a.png" title="" alt="" width="208"> |

#### Complemento da união

| $A \cup B$                                                                                                                                           | $\overline{A \cup B}$                                                                                                                                                                                  |
|:----------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-27-23-10-06-image.png) | <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/ddf5127e24e7bac0516564851879785171dbe2a5.png" title="" alt="" width="212"> |

| $\overline A$                                                                                                                                        | $\overline B$                                                                                                                                                       | $\overline A \cap \overline B$                                                                                                                                                                         |
|:----------------------------------------------------------------------------------------------------------------------------------------------------:|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-28-13-05-14-image.png) | ![](file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/57d9f887a8685e25de0394759eccc5808736a5bf.png) | <img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/ddf5127e24e7bac0516564851879785171dbe2a5.png" title="" alt="" width="206"> |

### Exercício 12

**a.** $A\Delta B = \{0,1,2,3,7,8,9\}$;

**b.** $B \Delta C = \{1, 3, 4, 6, 8\}$;

**c.** $B \Delta D = \{2,3,4,6,9\}; A \cap (B \Delta D) = \{2,3,4,6\}$

**d.** $A \cap B = \{4,5,6\}; A \cap D = \{2,3,5\}; (A \cap B) \Delta (A\cap D) = \{2,3,4,6\}$

### Exercício 13

| $A \Delta B$                                                                                                                                                 | $C$                                                                                                                                                          | $A \Delta B \Delta C$                                                                                                                                        |
|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------------------------------------------------------------------------------:|
| ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/87ff6311a217e1d31b0034614160ba72bc5bbe40.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/1d5ad7dfaf727a225c5b849048ad08571bdbd011.png) | ![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/18801add5f21f8833e5f651b295331072fde9731.png) |

### Exercício 14

**a.** $A \oplus B = (A\backslash B) \cup (B \backslash A) = (B \backslash A) \cup (A\backslash B) = B \oplus A$

**b.** $A \oplus B = (A\backslash B) \cup (B \backslash A) = (\overline B\backslash \overline A) \cup (\overline A \backslash \overline B) = (\overline A \backslash \overline B) \cup (\overline B\backslash \overline A) = \overline A \oplus \overline B$

**c.** $A \oplus \varnothing  = (A \backslash \varnothing) \cup (\varnothing \backslash A) = A \cup \varnothing = A$

**d.** $A \oplus A = (A\backslash A) \cup (A\backslash A) = \varnothing \cup \varnothing = \varnothing$

**e.** $A * A = A \cap A = A$

**f.** $A \oplus (B \oplus C) = A \oplus B \oplus C = (A \oplus B) \oplus C$

**g.** $A \oplus B = A \oplus C \implies (A \oplus B) \cap \overline A = (A \oplus C) \cap \overline A \implies (B \backslash A) = (C \backslash A)$

Pela definição de diferença, tem-se que $B\backslash A = \{x : (x \in B) \land (x \not \in A) \}$, e $C\backslash A = {x : (x \in C) \land (x \not \in A) }$. Ora, se $B\backslash A$ equivale a dizer que um elemento está em $C$ mas não em $A$ ($C\backslash A$), então $B = C$.

**h.** $A * (B \oplus C) = A \cap (B \oplus C) = \underbrace{(A \cap B) \oplus (A \cap C)}_{\text{Distributividade na intersecção}} = (A * B) \oplus (A * C)$

Propriedade esta da distributividade demonstrada no exercício 10.

### Exercício 15

**a.** Cada subconjunto a integrar o produto fundamental pode assumir 2 formas distintas: $A_i$ ou $\overline A_i$. Assim sendo, conforme a análise combinatória, para  $n$ subconjuntos existem $2_1 \times 2_2 \times \dots \times 2_n = 2^n$ possibilidades distintas de produto fundamental.

**b.** Segue da formulação anterior que, para cada par $J$ e $K$ de produto fundamental existe pelo menos um conjunto $\overline A_i$  ($1 \le i \le n$) em $J$ que é complementar ao conjunto $A_i$ em $K$. Isto é, dado um elemento $x$ qualquer tem-se:

$$
\{x : (x \in A_i)\ \underline \lor\ (x \in \overline A_i)\}
$$

Onde $\underline \lor$ é o "ou exclusivo". Como $J = \{x : x \in (A_1 \cap \dots \cap A_i \cap \dots \cap A_n)\}$, $K = \{x : x \in (A_1 \cap \dots \cap \overline A_i \cap \dots \cap A_n)\}$ e a definição de intersecção para quaisquer conjuntos $A$ e $B$ é $A \cap B = \{x : (x \in A) \land (x \in B)\}$, não à elemento em $J$ que também pertença à $K$. Estes conjuntos são, portanto, **disjuntos**  entre si.

**c.** O conjunto Universo $\Omega$ é aquele que engloba a todos os elementos que pertencem à qualquer conjunto. Consideremos o par de conjuntos $J$ e $K$ anterior. Um elemento $x$ que pertence a $J$ não pertence a $K$ e vice-versa, não obstante este pertence a algum conjunto e portanto pertence também ao conjunto Universo. Pela definição de produto fundamental, podemos extrapolar essa relação para qualquer número $n$ de conjuntos de produto fundamental. Assim, qualquer elemento $x$ é tal que pertence a um produto fundamental, não pertence aos $(n - 1)$ demais, e pertence ao conjunto Universo.

Como todos os elementos $x$ são assim compreendidos pelo conjunto Universo, pela definição de subconjunto dada no exercício 6, todo produto fundamental é subconjunto do conjunto Universo e, por conseguinte, o conjunto Universo unifica todos os produtos fundamentais.

## Exercício 16

Um subconjunto $X$ de $S$ é tal que possui $i$ elementos, $0 \le i \le n$, deste último. Ou seja, para cada elemento de $S$ existem 2 possibilidades: estar ou não em $X$. Assim sendo, conforme a análise combinatória, para $n$ elementos existem $2_1 \times 2_2 \times \dots \times 2_n = 2^n$ possíveis subconjuntos.

Tal qual fizemos no exercício 4, podemos quantificar o número de subconjuntos a conter $m$ elementos pela seguinte relação binominal:

$$
\binom nm = \frac{n!}{m!(n - m)!}
$$

### Exercício 17

<img src="file:///home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Matemática%20Discreta%20I/Lista%203/Imagens/2021-10-29-12-49-06-image.png" title="" alt="" data-align="center">

A relação dada pelo enunciado trata-se do *Princípio de Inclusão e Exclusão*.

$$
|A \cup B| = |A| + |B| - |A \cap B|
$$

De fato, ao contarmos o número de elementos em $|A \cup B|$ pela soma dos elementos em $|A| + |B|$, necessitamos também subtrair o número de elementos em $|A \cap B|$ de forma a evitar que estes sejam contabilizados duas vezes.

### Exercício 18

Uma forma mais geral do Princípio de Inclusão Exclusão pode ser expressa como:

$$
\left | \bigcup^n_{i = 1} A_i \right | = \sum^n_{i = 1} |A_i|
- \sum^{n - 1}_{i = 1}\sum^n_{j = i + 1} | A_i \cap A_j |
+ (-1)^{n - 1} \left | \bigcap^n_{i  = 1} A_i \right |
$$

Assim, temos que

$|A \cup B \cup C| = (|A| + |B| + |C|) - (|A \cap B| + |A \cap C| + |B \cap C|) + |A \cap B \cap C|$

Enquanto

$|A \cup B \cup C \cup D| = (|A| + |B| + |C| + |D|) - (|A \cap B| + |A \cap C| +  |A \cap D| \\ + |B \cap C| + |B \cap D| + |C \cap D|) - |A \cap B \cap C \cap D|$

### Exercício 19

Para qualquer elemento $x$, se $x$ está contido em $A$ este

- está contido em um subconjunto de $P(A)$

- não está contido em $B$ ou um subconjunto de $P(B)$

e vice-versa. Isso pois $A$ e $B$ tratam-se de conjuntos **disjuntos**. Assim sendo,

- $P(A) \cap P(B) = A \cap B = \varnothing$

- $P(A) \cup P(B) \subseteq A \cup B$

### Exercício 20

Observe o seguinte gráfico:

```vega-lite
{
  "$schema": "https://vega.github.io/schema/vega/v5.json",
  "description": "A basic stacked bar chart example.",
  "width": 500,
  "height": 200,
  "padding": 5,

  "data": [
    {
      "name": "table",
      "values": [
        {"x": "São religiosos", "y": 79, "c": 0}, {"x": "São religiosos", "y": 21, "c": 1},
        {"x": "Fizeram compras online", "y": 26, "c": 0}, {"x": "Fizeram compras online", "y": 74, "c": 1}
      ],
      "transform": [
        {
          "type": "stack",
          "groupby": ["x"],
          "sort": {"field": "c"},
          "field": "y"
        }
      ]
    }
  ],

  "scales": [
    {
      "name": "x",
      "type": "band",
      "range": "width",
      "domain": {"data": "table", "field": "x"}
    },
    {
      "name": "y",
      "type": "linear",
      "range": "height",
      "nice": true, "zero": true,
      "domain": {"data": "table", "field": "y1"}
    },
    {
      "name": "color",
      "type": "ordinal",
      "range": "category",
      "domain": {"data": "table", "field": "c"}
    }
  ],

  "axes": [
    {"orient": "bottom", "scale": "x", "zindex": 1},
    {"orient": "left", "scale": "y", "zindex": 1}
  ],

  "marks": [
    {
      "type": "rect",
      "from": {"data": "table"},
      "encode": {
        "enter": {
          "x": {"scale": "x", "field": "x"},
          "width": {"scale": "x", "band": 1, "offset": -1},
          "y": {"scale": "y", "field": "y0"},
          "y2": {"scale": "y", "field": "y1"},
          "fill": {"scale": "color", "field": "c"}
        },
        "update": {
          "fillOpacity": {"value": 1}
        },
        "hover": {
          "fillOpacity": {"value": 0.5}
        }
      }
    }
  ]
}
```

Se admitirmos que o maior número possível de pessoas não religiosas e que nunca fizeram uma compra online, temos que no mínimo o número de pessoas religiosas que nunca fizeram compras é $[100 - (26 + 21)]\% = 53\%$ da população. Por outro lado,

```vega-lite
{
  "$schema": "https://vega.github.io/schema/vega/v5.json",
  "description": "A basic stacked bar chart example.",
  "width": 500,
  "height": 200,
  "padding": 5,

  "data": [
    {
      "name": "table",
      "values": [
        {"x": "São religiosos", "y": 79, "c": 0}, {"x": "São religiosos", "y": 21, "c": 1},
        {"x": "Não fizeram compras online", "y": 74, "c": 0}, {"x": "Não fizeram compras online", "y":26, "c": 1}
      ],
      "transform": [
        {
          "type": "stack",
          "groupby": ["x"],
         "sort": {"field": "c"},
          "field": "y"
        }
      ]
    }
  ],

  "scales": [
    {
      "name": "x",
      "type": "band",
      "range": "width",
      "domain": {"data": "table", "field": "x"}
    },
    {
      "name": "y",
      "type": "linear",
      "range": "height",
      "nice": true, "zero": true,
      "domain": {"data": "table", "field": "y1"}
    },
    {
      "name": "color",
      "type": "ordinal",
      "range": "category",
      "domain": {"data": "table", "field": "c"}
    }
  ],

  "axes": [
    {"orient": "bottom", "scale": "x", "zindex": 1},
    {"orient": "left", "scale": "y", "zindex": 1}
  ],

  "marks": [
    {
      "type": "rect",
      "from": {"data": "table"},
      "encode": {
        "enter": {
          "x": {"scale": "x", "field": "x"},
          "width": {"scale": "x", "band": 1, "offset": -1},
          "y": {"scale": "y", "field": "y0"},
          "y2": {"scale": "y", "field": "y1"},
          "fill": {"scale": "color", "field": "c"}
        },
        "update": {
          "fillOpacity": {"value": 1}
        },
        "hover": {
          "fillOpacity": {"value": 0.5}
        }
      }
    }
  ]
}
```

Se admitirmos que a correspondência entre pessoas religiosas e que não fizeram compras online é máxima, teremos que todos que não fizeram compras online, $74\%$ da população, são religiosos.

Por isso esse índice nunca é igual ou inferior à 50% da população.

### Exercício 21

Todos aqueles múltiplos de $2 \times 3 = 6$ e $2 \times 5 = 10$, descontados aqueles múltiplos de $2 \times 3 \times 5 = 30$. Ou seja, o quociente de $100 / 6$ mais o quociente de $100 / 10$ menos o quociente de $100 / 30$, o que resulta em $16 + 10 - 3 = 23$.

[^1]: nUSP: 12543033; Turma 04