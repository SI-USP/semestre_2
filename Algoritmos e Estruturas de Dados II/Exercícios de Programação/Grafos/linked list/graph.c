#include "./graph.h"

int main() {
    int v[3];
    Graph *g;

    printf(
        "Este programa foi construido para testar a implementação de grafos, di"
        "recionado e não direcionado, respectivamente, fazendo uso de uma lista"
        " ligada.\nDigite um número de vértices, inteiro e não-negativo, os qua"
        "is serão contidos pelo grafo direcionado: ");

    if (!scanf("%d", v) || !(g = initGraph(*v))) {
        fprintf(stderr, "Erro: valor passado é inválido.\n");
        return 1;
    }

    printf("\nDigite uma sequência de trios de valores inteiros e positivos, c"
           "ada qual separados entre si por espaços, e terminada por um ca"
           "ractere qualquer não numérico. Então pressione ENTER. Estes valor"
           "es serão, respectivamente, os vetores de saída e entrada de uma are"
           "sta direcionada e o peso desta aresta:\n");

    while (scanf(" %d %d %d", v, v + 1, v + 2))
        setDirectedEdge(v[0], v[1], v[2], g);
    while ((getchar()) != '\n')
        ;

    printf("\nA seguinte lista representa o grafo direcionado resultante:\n");
    printGraph(g);

    printf("\nE a seguinte o grafo transposto:\n");
    freeGraph(printGraph(transposeGraph(g)));

    printf("\nA aresta de menor peso tem valor %d.\nRemovida do grafo este "
           "fica:\n",
           popMinEdge(g, directed));
    printGraph(g);
    freeGraph(g);

    printf("\nAgora, testemos o grafo não direcionado.\nDigite um número de vé"
           "rtices, inteiro e não-negativo, os quais serão contidos pelo grafo"
           " direcionado: ");

    if (!scanf("%d", v) || !(g = initGraph(*v))) {
        fprintf(stderr, "Erro: valor passado é inválido.\n");
        return 1;
    }

    printf("\nDigite uma sequência de trios de valores inteiros e positivos, c"
           "ada qual separados entre si por espaços, e terminada por um ca"
           "ractere qualquer não numérico. Então pressione ENTER. Estes valor"
           "es serão, respectivamente, os vetores na extremidade de uma aresta"
           " não direcionada e o peso desta aresta:\n");

    while (scanf(" %d %d %d", v, v + 1, v + 2))
        setEdge(v[0], v[1], v[2], g);

    printf(
        "\nA seguinte lista representa o grafo não direcionado resultante:\n");
    printGraph(g);

    printf("\nA aresta de menor peso tem valor %d.\nRemovida do grafo este "
           "fica:\n",
           popMinEdge(g, notDirected));
    printGraph(g);
    freeGraph(g);
    return 0;
}
