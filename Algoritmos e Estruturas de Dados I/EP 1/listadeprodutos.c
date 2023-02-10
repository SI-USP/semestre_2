/*********************************************************************/
/**   ACH2023 - Algoritmos e Estruturas de Dados I                  **/
/**   EACH-USP - Segundo Semestre de 2021                           **/
/**   Turma 04 - Prof. Luciano Antonio Digiampietri                 **/
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

/* Funções auxiliares */

bool buscarTudoSobre (PLISTA l, int id, int *tipo, PONT *atual, PONT *ant) {
    for (*tipo = 0; *tipo < NUMTIPOS; *tipo = *tipo + 1){
        *ant = l->LISTADELISTAS[*tipo];
        *atual = (*ant)->proxProd;
        while (*atual && (*atual)->id != id) {
            *ant = *atual;
            *atual = (*atual)->proxProd;
        }
        if (*atual)
            return true;
    }
    return false;
}

void apagarRegistro(PONT atual, PONT ant) {
    ant->proxProd = atual->proxProd;
    free(atual);
}

/* Funções principais */

bool inserirNovoProduto(PLISTA l, int id, int tipo, int quantidade, int valor){
    PONT p, novo;

    if (id < 1
    || tipo < 0
    || tipo >= NUMTIPOS
    || quantidade < 1
    || valor < 1
    || buscarID(l, id))
        return false;

    novo = malloc(sizeof(REGISTRO));
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
    int tipo, valor;
    PONT atual, ant;

    if (quantidade <= 0
    || !buscarTudoSobre(l, id, &tipo, &atual, &ant)
    || quantidade > atual->quantidade)
        return false;

    atual->quantidade -= quantidade;
    quantidade = atual->quantidade;
    valor = atual->valorUnitario;

    if (quantidade * valor > ant->quantidade * ant-> valorUnitario)
        return true;

    apagarRegistro(atual, ant);

    if (quantidade == 0)
        return true;
    return inserirNovoProduto(l, id, tipo, quantidade, valor);
}

bool atualizarValorDoProduto(PLISTA l, int id, int valor){
    int tipo, quantidade;
    PONT atual, ant;

    if (valor <= 0 || !buscarTudoSobre(l, id, &tipo, &atual, &ant))
        return false;

    quantidade = atual->quantidade;
    apagarRegistro(atual, ant);

    return inserirNovoProduto(l, id, tipo, quantidade, valor);
}
