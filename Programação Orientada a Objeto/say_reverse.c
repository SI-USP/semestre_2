#include <stdio.h>

void reverseEcho() {
    int n;
    if (scanf(" %d", &n)) {
        reverseEcho();
        printf(" %d", n);
    } else
        printf("Sequência reversa:");
}

int main() {
    printf("Este programa lê uma sequência de números e os devolve em ordem rev"
           "ersa.\nDigite uma sequência de números separados entre si por espaç"
           "os e terminada por um caractere não numérico qualquer e pression"
           "e ENTER: ");
    reverseEcho();
    printf("\n");
    return 0;
}
