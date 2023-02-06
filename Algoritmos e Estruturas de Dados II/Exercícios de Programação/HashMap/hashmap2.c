#include <limits.h>
#include <stdio.h>

int main() {
    int i, digits = 0, key, tableSize, size = 8 * sizeof(unsigned int);
    unsigned int index, mask = 0;

    printf("Dê um número inteiro para ser a chave: ");
    scanf("%d", &key);

    printf("Dê o tamanho da tabela, que seja um múltiplo de 2: ");
    scanf("%d", &tableSize);
    for (i = 1; i < tableSize; i *= 2) {
        mask <<= 1;
        mask += 1;
        digits++;
    }

    for (i = index = 0; i < size; i += digits) {
        index ^= (key & mask) >> i;
        mask <<= digits;
    }

    printf("Resultado da função de hash: %u\n", index);
    return 0;
}
