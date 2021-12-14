/*********************************************************************/
/**   ACH2023 - Algoritmos e Estruturas de Dados I                  **/
/**   EACH-USP - Segundo Semestre de 2021                           **/
/**   04 - Prof. Luciano Antonio Digiampietri                       **/
/**                                                                 **/
/**   EP 2 - Fila Preferencial                                      **/
/**                                                                 **/
/**   Guilherme de Abreu Barreto             nUSP: 12543033         **/
/**                                                                 **/
/*********************************************************************/

#include "filapreferencial.h"

PFILA criarFila(){
    PFILA res = (PFILA) malloc(sizeof(FILAPREFERENCIAL));
    res->cabeca = (PONT) malloc(sizeof(ELEMENTO));
    res->inicioNaoPref = res->cabeca;
    res->cabeca->id = -1;
    res->cabeca->ehPreferencial = false;
    res->cabeca->ant = res->cabeca;
    res->cabeca->prox = res->cabeca;
    return res;
}

int tamanho(PFILA f){
	PONT atual = f->cabeca->prox;
	int tam = 0;
	while (atual != f->cabeca) {
		atual = atual->prox;
		tam++;
	}
	return tam;
}

PONT buscarID(PFILA f, int id){
	PONT atual = f->cabeca->prox;
	while (atual != f->cabeca) {
		if (atual->id == id) return atual;
		atual = atual->prox;
	}
	return NULL;
}

void exibirLog(PFILA f){
	int numElementos = tamanho(f);
	printf("\nLog fila [elementos: %i]\t- Inicio:", numElementos);
	PONT atual = f->cabeca->prox;
	while (atual != f->cabeca) {
		printf(" [%i;%i]", atual->id, atual->ehPreferencial);
		atual = atual->prox;
	}
	printf("\n                       \t-    Fim:");
	atual = f->cabeca->ant;
	while (atual != f->cabeca) {
		printf(" [%i;%i]", atual->id, atual->ehPreferencial);
		atual = atual->ant;
	}
	printf("\n\n");
}


bool consultarPreferencial(PFILA f, int id){
	PONT atual = f->cabeca->prox;
	while (atual != f->cabeca) {
		if (atual->id == id) return atual->ehPreferencial;
		atual = atual->prox;
	}
	return -1;
}

/* Função auxiliar */
void removerDaFila(PFILA f, PONT pessoa) {
    if(f->inicioNaoPref == pessoa)
        f->inicioNaoPref = pessoa->prox;
    pessoa->ant->prox = pessoa->prox;
    pessoa->prox->ant = pessoa->ant;
    free(pessoa);
}

bool inserirPessoaNaFila(PFILA f, int id, bool ehPreferencial){
    PONT pessoa;

    if (!f || id < 0 || buscarID(f,id))
        return false;
    pessoa = malloc(sizeof(ELEMENTO));
    pessoa->id = id;
    pessoa->ehPreferencial = ehPreferencial;
    if (ehPreferencial) {
        pessoa->prox = f->inicioNaoPref;
        pessoa->ant = f->inicioNaoPref->ant;
    }
    else {
        pessoa->prox = f->cabeca;
        pessoa->ant = f->cabeca->ant;
        if (f->inicioNaoPref == f->cabeca)
            f->inicioNaoPref = pessoa;
    }
    pessoa->prox->ant = pessoa->ant->prox = pessoa;
	return true;
}

bool atenderPrimeiraDaFila(PFILA f, int* id){
    if (!f || f->cabeca->prox == f->cabeca)
        return false;
    *id = f->cabeca->prox->id;
    removerDaFila(f, f->cabeca->prox);
    return true;
}

bool desistirDaFila(PFILA f, int id){
    PONT pessoa;

    if (!f || id < 0)
        return false;
    pessoa = buscarID(f, id);
    if (!pessoa)
        return false;
    removerDaFila(f, pessoa);
    return true;
}
