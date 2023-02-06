#include "./graph.h"
#include <stdio.h>

int main() {
    int v[3];
    graph *G;
    Info *I;

    printf(
        "Este programa foi construido para testar a implementação de grafos, di"
        "recionado e não direcionado, respectivamente, fazendo uso de mat"
        "rizes de adjacências.\nDigite um número vértices, inteiro e positi"
        "vo, os quais serão contidos pelo grafo direcionado: ");

    if (!scanf("%d", v) || !(G = graphInit(*v))) {
        fprintf(stderr, "Erro: valor passado é inválido.\n");
        return 1;
    }

    printf("\nDigite uma sequência de trios de valores inteiros e positivos, c"
           "ada qual separados entre si por espaços, e terminada por um ca"
           "ractere qualquer não numérico. Então pressione ENTER. Estes valor"
           "es serão, respectivamente, os vetores de saída e entrada de uma are"
           "sta direcionada e o peso desta aresta:\n");

    while (scanf(" %d %d %d", v, v + 1, v + 2))
        setDirectedEdge(v[0], v[1], v[2], G);
    while ((getchar()) != '\n')
        ;

    printf("\nA seguinte matriz representa o grafo direcionado resultante:\n");
    printGraph(G);

    printf("\nE a seguinte o grafo transposto:\n");
    freeGraph(printGraph(transposeGraph(G)));

    printf("\nOs ciclos contidos por este grafo são:\n");
    printCycles(G);

    printf(
        "\nTestemos agora a função de mapeamento Dijkstra. Escolha um vértice "
        "inicial para o mapeamento: ");
    if (!scanf("%d", v) || !(I = Djikstra(G, *v))) {
        fprintf(stderr, "Erro: valor passado é inválido.\n");
        return 1;
    }
    printInfo(I, G->vertices);

    printf("\nA aresta de menor peso tem valor %d.\nRemovida do grafo este "
           "fica:\n",
           popMinDirectedEdge(G));
    printGraph(G);
    freeGraph(G);

    printf("\nAgora, testemos o grafo não direcionado.\nDigite um número vé"
           "rtices, inteiro e positivo, os quais serão contidos pelo grafo: ");

    if (!scanf("%d", v) || !(G = graphInit(*v))) {
        fprintf(stderr, "Erro: valor passado é inválido.\n");
        return 1;
    }

    printf("\nDigite uma sequência de trios de valores inteiros e positivos, c"
           "ada qual separados entre si por espaços, e terminada por um ca"
           "ractere qualquer não numérico. Então pressione ENTER. Estes valor"
           "es serão, respectivamente, os vetores na extremidade de uma are"
           "sta não direcionada e o peso desta aresta:\n");

    while (scanf(" %d %d %d", v, v + 1, v + 2))
        if (!setEdge(v[0], v[1], v[2], G))
            return 1;

    printf("\nA seguinte matriz representa o grafo direcionado resultante:\n");
    printGraph(G);
    if (isConnected(G))
        printf("\nEste é um grafo conexo.");
    else
        printf("\nEste não é um grafo conexo.");

    printf("\nA aresta de menor peso tem valor %d.\nRemovida do grafo este "
           "fica:\n",
           popMinEdge(G));
    printGraph(G);
    freeGraph(G);
    return 0;
}
