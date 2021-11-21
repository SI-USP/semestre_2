#include "listadeprodutos.c"

int main() {
	PLISTA f = criarLista();
	bool res;

	exibirLog(f);
	res = inserirNovoProduto(f, 3, 3, 3, 3);
	if(res) printf("Insercao retornou true (1)\n");
	else printf("Insercao retornou false (1)\n");
	exibirLog(f);

	res = inserirNovoProduto(f, 1, 2, 3, 5);
	if(res) printf("Insercao retornou true (1)\n");
	else printf("Insercao retornou false (1)\n");
	exibirLog(f);

	res = inserirNovoProduto(f, 5, 2, 7, 8);
	if(res) printf("Insercao retornou true (1)\n");
	else printf("Insercao retornou false (1)\n");
	exibirLog(f);

	res = inserirNovoProduto(f, 9, 2, 11, 12);
	if(res) printf("Insercao retornou true (1)\n");
	else printf("Insercao retornou false (1)\n");
	exibirLog(f);

	res = removerItensDeUmProduto(f, 1, 3);
	if(res) printf("Remoção retornou true (1)\n");
	else printf("Remoção retornou false (1)\n");
	exibirLog(f);

	res = removerItensDeUmProduto(f, 9, 11);
	if(res) printf("Remoção retornou true (1)\n");
	else printf("Remoção retornou false (1)\n");
	exibirLog(f);

	return 0;
}
