#include <stdio.h>

int main() {
	long long int nusp;
	printf("Digite seu número USP: ");
	scanf("%lld", &nusp);
	
	printf("Imprimindo inteiro: %lli\n", nusp);
	printf("Imprimindo numero: %lld\n", nusp);
	printf("Imprimindo float (com cast): %f\n", (float) nusp);
	printf("Imprimindo quociente: %lli\n", nusp/2);
	printf("Imprimindo resto: %lld\n", nusp%2);
	printf("Imprimindo quadrado: %lld\n", nusp*nusp);
	return 0;
}
