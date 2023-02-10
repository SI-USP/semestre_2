/*********************************************************************/
/**   ACH2023 - Algoritmos e Estruturas de Dados I                  **/
/**   EACH-USP - Segundo Semestre de 2021                           **/
/**   04 - Prof. Luciano Antonio Digiampietri                       **/
/**                                                                 **/
/**   EP3 - Fila de Prioridade (utilizando heap)                    **/
/**                                                                 **/
/**   Guilherme de Abreu Barreto            nUSP: 12543033          **/
/**                                                                 **/
/*********************************************************************/

#include "filaDePrioridade.h"
#define MAX 5

PFILA criarFila(){
	PFILA res = (PFILA) malloc(sizeof(FILADEPRIORIDADE));
	res->referencias = (PONT*) malloc(sizeof(PONT)*MAX);
	res->heap = (PONT*) malloc(sizeof(PONT)*MAX);
	int i;
	for (i=0; i<MAX; i++) {
		res->referencias[i] = NULL;
		res->heap[i] = NULL;
	}
	res->elementosNoHeap = 0;
	return res;
}


bool exibirLog(PFILA f){
	printf("Log [elementos: %i]\n", f->elementosNoHeap);
	PONT atual;
	int i;
	for (i=0; i<f->elementosNoHeap; i++) {
		atual = f->heap[i];
		printf("[%i;%f;%i] ", atual->id, atual->prioridade, atual->posicao);
	}
	printf("\n\n");
}

/* Funções auxiliares */

PONT novoElemento (int id, int posicao, float prioridade) {
    PONT novo = malloc (sizeof(ELEMENTO));

    novo->id = id;
    novo->prioridade = prioridade;
    novo->posicao = posicao;
    return novo;
}

void troca (PONT *a, PONT *b) {
    PONT tmp = *a;
    int posicao = tmp->posicao;

	(*a)->posicao = (*b)->posicao;
	(*b)->posicao = posicao;
    *a = *b;
    *b = tmp;
}

void subirNoHeap(PFILA f, PONT atual) {
    int pai;

    if (atual->posicao == 0)
        return;
    pai = (atual->posicao - 1) / 2;
    if (f->heap[pai]->prioridade >= atual->prioridade)
        return;
    troca(&f->heap[pai], &f->heap[atual->posicao]);
    subirNoHeap(f, f->heap[pai]);
}

void descerNoHeap(PFILA f, PONT atual) {
    int max = atual->posicao, esq = 2 * max + 1, dir = esq + 1;

    if (esq >= f->elementosNoHeap)
        return;
    if (f->heap[esq]->prioridade > f->heap[max]->prioridade)
		max = esq;
	if (dir < f->elementosNoHeap && f->heap[dir]->prioridade > f->heap[max]->prioridade)
		max = dir;
	if (max == atual->posicao)
	 	return;

	troca(&f->heap[max], &f->heap[atual->posicao]);
	descerNoHeap(f, f->heap[max]);
}

void adicionarNaFila (PFILA f, PONT novo) {
    f->referencias[novo->id] = novo;
    f->heap[novo->posicao] = novo;
    f->elementosNoHeap++;
    subirNoHeap(f, novo);
}

void removerDaFila (PFILA f, PONT remover) {
    f->referencias[remover->id] = NULL;
    f->heap[0] = f->heap[--f->elementosNoHeap];
    f->heap[f->elementosNoHeap] = NULL;
    if (!f->heap[0])
		return;
	f->heap[0]->posicao = 0;
    descerNoHeap(f, f->heap[0]);
}

/* Funções principais */

int tamanho(PFILA f){
    return f->elementosNoHeap;
}

bool inserirElemento(PFILA f, int id, float prioridade){
    if (!f || id < 0 || id >= MAX || f->referencias[id])
        return false;
    adicionarNaFila(f, novoElemento(id, f->elementosNoHeap, prioridade));
	return true;
}

bool aumentarPrioridade(PFILA f, int id, float novaPrioridade){
	if (!f || id < 0 || id >= MAX || !f->referencias[id]
    || f->referencias[id]->prioridade >= novaPrioridade)
        return false;
    f->referencias[id]->prioridade = novaPrioridade;
    subirNoHeap(f, f->referencias[id]);
	return true;
}

bool reduzirPrioridade(PFILA f, int id, float novaPrioridade){
    if (!f || id < 0 || id >= MAX || !f->referencias[id]
    || f->referencias[id]->prioridade < novaPrioridade)
        return false;
    f->referencias[id]->prioridade = novaPrioridade;
    descerNoHeap(f, f->referencias[id]);
	return true;
}

PONT removerElemento(PFILA f){
	PONT remover = (f) ? f->heap[0] : NULL;

    if (remover)
        removerDaFila(f, remover);
    return remover;
}

bool consultarPrioridade(PFILA f, int id, float* resposta){
	if (!f || id < 0 || id >= MAX || !f->referencias[id])
        return false;
    *resposta = f->referencias[id]->prioridade;
	return true;
}
