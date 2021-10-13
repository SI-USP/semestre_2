# Respostas à [Lista 1](https://drive.google.com/file/d/1bOWYihTvIgRx1qOnv2WR7uIQDZSzxZ7a/view?usp=drive_web&authuser=0) da disciplina de Introdução à Análise de Algoritmos

> Feita por Guilherme de Abreu Barreto[^1]

## Exercício 1

O algoritmo proposto é correto se

- havendo um ou mais valores $a_i + b_j + c_k = 0$, onde $a_i \in \{a_1, ..., a_n\}$, $b_j \in \{b_1, ..., b_n\}$ e $c_k \in \{a_1, ..., a_n\}$, este retorna um valor $m \ge 1$;

- senão este retorna um valor $m = 0$.

Ao longo de sua execução, é invariável que $m$ equivale ao número de somas possíveis iguais a 0 entre todos os números em  $\{a_1, ..., a_i\}$, com $\{b_1, ..., b_j\}$ e $\{c_1, ..., c_k\}$ desde a inicialização $(a_1,b_1,c_1)$ (base da hipótese), para cada valor $(a_i,b_j,c_k)$ (passo da indução), e ao ser alcançada a condição de término onde $(a_n,b_n,c_n)$. Assim, ao término deste programa todas as combinações possíveis foram avaliadas e este é, portanto, correto. $\blacksquare$

## Exercício 2

```c
m ← 0                                 // c_2
for i ← 1 até n                       // c_2 + (n - 1) c_1
    do for j ← 1 até n                // c_2 + (n - 1)² c_1
        do for k ← 1 até n            // c_2 + (n - 1)³ c_1
            if a_i + b_j + c_k = 0    // 2n³ c_3
                then m ← m + 1        // 0 c_1 até n³ c_1
return m                              // c_4
```

Assim o sendo, temos que este algoritmo, na ausência de valores capazes de satisfazer a condição de iteração da variável $m$ (melhor caso) tem um tempo de execução equivalente à:

$$
(n^3 + n^2 + n - 3)c_1 + 4c_2 + 2n^3c_3 + c_4
$$

Enquanto quando este encontra valores compatíveis, este tem um tempo de execução equivalente à:

$$
(n^3 + n^2 + n - 3)c_1 + 4c_2 + 2n^3c_3 + c_4\ \blacksquare
$$

## Exercício 3

Conforme descreve vossa apostila na página 32:

> [...] funções crescem de maneira similar uma vez que abstraímos as constantes.
> 
> A notação $\Theta$ formaliza matematicamente essa ideia. [...] $\Theta(g(n))$ é o conjunto de todas as funções que crescem de maneira parecida com $g$, que são *assintoticamente equivalentes* a $g$.

Assim, temos que:

$$
0 \le c_1g(n) \le f(n) \le c_2g(n)
$$

Onde $g(n) = n^3$, $f(n) = 4n^3 + n^2 + n + 2$ (a função equivalente ao pior caso, igualando as constantes à 1) Para qualquer $n \ge 1$. Assim sendo, tem-se:

$$
0 \le c_1n^3 \le 4n^3 + n^2 + n + 2 \le c_2n^3\\\ \\
0 \le c_1 \le 4 + \dfrac 1n + \dfrac 1{n^2} + \dfrac 2{n^3} \le c_2 \implies 0 \le c_1 \le 4\ e\ c_2 \ge 8
$$

De fato, vemos que este resultado se concretiza para valores de $n \ge 1$:

![](/home/user/Public/USP/Sistemas%20de%20Informação/2º%20semestre/Introdução%20à%20Análise%20de%20Algoritmos/Imagens/2021-10-01-22-55-58-image.png)

> Linha verde: $f(n)$; linha cinza: $c_1g(n)$; e linha rosa: $c_2g(n)$

Portanto, o tempo de processamento do algorítimo 3Soma é $\Theta(n^3)$ no pior caso. $\blacksquare$

## Exercício 4

```c
insertionSort (A, n)                     
    if (n <= 1)
        then return // c_4
    insertionSort (A, tam -1) // (n^2 - 3n + 2) c_1 + (n^2 + n - 6) c_2 + (n^2 + n - 5) c_3 + (n - 2) c_4
    tmp ← A[n - 1] // c_2 + c_3
    for i ← n - 2 to 0 e A[i] > tmp // c_2 + c_3 + (n - 1) c_1
        A[i + 1] ← A[i] // (n - 1) c_2 + (n - 1) c_3
    A[i + 1] ← tmp // c_2 + c_3 
end

binarySearch (A, n, key)
    lim_inf ← 0 // c_2
    lim_sup ← n - 1 // c_2 + c_3
    while lim_inf <= lim_sup 
        if (A[i] = key)
            then return true // c_4
        if (A[i] < key)
            then lim_inf ← i + 1 // (log_2 n) / 2 (c_2 + c3)
        else
            then lim_sup ← i - 1 // (log_2 n) / 2 (c_2 + c3)
    end
    return false // c4            
end

3Soma (A, B, C)
    m ← 0 // c_2
    insertionSort (C, sizeof(C)) // (n^2 - 3n + 2)c_1 + (n^2 + n - 6) c_2 + (n^2 + n - 5) c_3 (n - 2) c_4
    for i ← 1 to n // c_2 + (n - 1) c_1
        do for j ← 1 to n // c_2 + (n - 1)² c_1
            do if binarySearch (C, sizeof(C), -(a_i + b_j)) //(n² - 1)[(2 + log_2 n)c_2 + (1 + log_2 n) c_3 + c_4]
                then m ← m + 1 // **Pior caso: n²log_2 n c1**
    return m // c_4
end
```

Conforme o número de iterações no pior caso para a antepenúltima linha do código(`then m ← m + 1`), é possível afirmar que o tempo de execução deste para $n$ entradas $T(n)$ é tal que $T(n) \in \Theta(n^2\log n)$. $\blacksquare$

[^1]: nUSP: 12543033