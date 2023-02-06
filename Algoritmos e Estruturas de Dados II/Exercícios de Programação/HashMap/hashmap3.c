#include <stdio.h>

int bits(int n) { return (n) ? 1 + bits(n >> 1) : 1; }

int hash(int key, int mask, int bits) {
    int index = key & mask;
    key >>= bits;

    return (key) ? index ^ hash(key, mask, bits) : index;
}

int main() {
    int key, size, mask;

    printf("Dê um número inteiro para ser a chave: ");
    scanf("%d", &key);

    printf("Dê o tamanho da tabela, que seja um múltiplo de 2: ");
    scanf("%d", &size);
    mask = size - 1;

    printf("Resultado da função de hash: %u\n", hash(key, mask, bits(mask)));
    return 0;
}
