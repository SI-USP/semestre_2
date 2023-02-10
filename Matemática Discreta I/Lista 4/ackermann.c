#include <stdio.h>

long long unsigned int ackermann (unsigned int m, unsigned int n) {
    if (m == 0)
        return n + 1;
    if (n == 0)
        return ackermann (m - 1, 1);
    return ackermann (m - 1, ackermann(m, n - 1));
}

int main () {
    int m, n;

    printf("Este programa calcula o resultado da função de Ackermann.\nDigite pares de valores inteiros e positivos separados entre si por espaço ou quebra de linha para tê-los calculados, escreva um caractere inválido e pressione ENTER para encerrar:\n");

    while (scanf(" %d %d", &m, &n) && m >= 0 && n >= 0)
        printf("A(%d,%d) = %llu\n", m, n, ackermann(m,n));

    return 0;
}
