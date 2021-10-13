/*********************************************************************/
/**   ACH2023 - Algoritmos e Estruturas de Dados I                  **/
/**   EACH-USP - Segundo Semestre de 2021                           **/
/**   <turma> - Prof. Luciano Antonio Digiampietri                  **/
/**                                                                 **/
/**   EP 1 - Lista Ligada de Produtos                               **/
/**                                                                 **/
/**   Guilherme de Abreu Barreto           nUSP: 12543033           **/
/**                                                                 **/
/*********************************************************************/
#include "listadeprodutos.h"

PLISTA criarLista(){
  PLISTA res = (PLISTA) malloc(sizeof(LISTADEPRODUTOS));
  int x;
  for (x=0;x<NUMTIPOS;x++){
    res->LISTADELISTAS[x]=(PONT) malloc(sizeof(REGISTRO));
    res->LISTADELISTAS[x]->id=-1;
    res->LISTADELISTAS[x]->quantidade=0;
    res->LISTADELISTAS[x]->valorUnitario=0;
    res->LISTADELISTAS[x]->proxProd=NULL;
  }
  return res;
}


int tamanho(PLISTA l){
  int tam = 0;
  int x;
  PONT atual;
  for (x=0;x<NUMTIPOS;x++){
    atual = l->LISTADELISTAS[x]->proxProd;
    while (atual) {
      atual = atual->proxProd;
      tam++;
    }
  }
  return tam;
}

PONT buscarID(PLISTA l, int id){
  int x;
  PONT atual;
  for (x=0;x<NUMTIPOS;x++){
    atual = l->LISTADELISTAS[x]->proxProd;
    while (atual) {
      if (atual->id == id) return atual;
      atual = atual->proxProd;
    }
  }
  return NULL;
}

PONT buscarIDTipo(PLISTA l, int id, int tipo){
  if (tipo<0 || tipo>=NUMTIPOS) return NULL;
  PONT atual = l->LISTADELISTAS[tipo]->proxProd;
  while (atual) {
    if (atual->id == id) return atual;
    atual = atual->proxProd;
  }
  return NULL;
}

void buscarTudoSobre (PLISTA l, int id, int *tipo, PONT *atual, PONT *ant) {
    for (*tipo = 0; *tipo < NUMTIPOS; *tipo = *tipo + 1){
        *ant = l->LISTADELISTAS[*tipo];
        *atual = (*ant)->proxProd;
        while (*atual && (*atual)->id != id) {
            *ant = *atual;
            *atual = (*atual)->proxProd;
        }
        if (*atual)
            return;
    }
}

void exibirLog(PLISTA f){
  int numElementos = tamanho(f);
  printf("Log lista [elementos: %i]\n", numElementos);
  int x;
  PONT atual;
  for (x=0;x<NUMTIPOS;x++){
    printf("  #TIPO: %i -> ", x);
    atual = f->LISTADELISTAS[x]->proxProd;
    while (atual){
      printf(" [%i;%i;%i;$%i]", atual->id, atual->quantidade, atual->valorUnitario, atual->quantidade*atual->valorUnitario);
      atual = atual->proxProd;
    }
    printf("\n");
  }
  printf("\n");
}

int consultarValorUnitario(PLISTA l, int id){
  int x;
  PONT atual;
  for (x=0;x<NUMTIPOS;x++){
    atual = l->LISTADELISTAS[x]->proxProd;
    while (atual) {
      if (atual->id == id) return atual->valorUnitario;
      atual = atual->proxProd;
    }
  }
  return 0;
}

/* Anotações quanto a inserção:

- Uma lista ligada para cada tipo de produto

- PLISTA: Variável que armazena um ponteiro para a lista [array] de listas [ligadas].

- A função necessita proibir a inserção de um novo produto de mesmo identificador que um produto já presente em *qualquer uma* das listas listadas

- 0 ≤ id ≤ NUMTIPOS -1

- quantidade, valor ≥ 0

- Se o valor total for igual, inserir antes.
*/

bool inserirNovoProduto(PLISTA l, int id, int tipo, int quantidade, int valor){
    PONT p, novo;

    if (id < 0 || tipo < 0 || quantidade < 0 || valor < 0 || buscarID(l, id))
        return false;

    novo = malloc(sizeof(*novo));
    novo->id = id;
    novo->quantidade = quantidade;
    novo->valorUnitario = valor;
    p = l->LISTADELISTAS[tipo];

    while (p->proxProd
    && p->proxProd->valorUnitario * p->proxProd->quantidade < valor * quantidade)
        p = p->proxProd;

    novo->proxProd = p->proxProd;
    p->proxProd = novo;
    return true;
}

bool removerItensDeUmProduto(PLISTA l, int id, int quantidade){
    int tipo;
    PONT atual, ant;
    REGISTRO novo;

    if (quantidade <= 0)
        return false;

    atual = ant = NULL;
    buscarTudoSobre(l, id, &tipo, &atual, &ant);

    if (!atual || quantidade > atual->quantidade)
        return false;

    atual->quantidade -= quantidade;

    if (atual->quantidade * atual-> valorUnitario >= ant->quantidade * ant-> valorUnitario)
        return true;

    novo = *atual;
    ant->proxProd = atual->proxProd;
    free(atual);

    if (novo.quantidade == 0)
        return true;
    return inserirNovoProduto(l, id, tipo, novo.quantidade, novo.valorUnitario);
}


bool atualizarValorDoProduto(PLISTA l, int id, int valor){
    int tipo;
    PONT atual, ant;
    REGISTRO novo;

    if (valor <= 0)
        return false;

    atual = ant = NULL;
    buscarTudoSobre(l, id, &tipo, &atual, &ant);

    if (!atual)
        return false;

    atual->valorUnitario = valor;
    novo = *atual;
    ant->proxProd = atual->proxProd;
    free(atual);

    return inserirNovoProduto(l, id, tipo, novo.quantidade, novo.valorUnitario);
}
