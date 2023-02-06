#ifndef FUNCTIONFILE_C
#define FUNCTIONFILE_C
#include "./graph.h"

int *initEdges(int vertices) {
    int i, *edges = malloc(vertices * sizeof(int));

    for (i = 0; i < vertices; i++)
        edges[i] = INT_MIN;
    return edges;
}

Graph *initGraph(int vertices) {
    int i;
    Graph *G;

    if (vertices < 1)
        return NULL;

    G = malloc(sizeof(Graph));
    G->vertices = vertices;
    G->edges = 0;
    G->weights = malloc(vertices * sizeof(int *));
    for (i = 0; i < vertices; i++)
        G->weights[i] = initEdges(vertices);
    return G;
}

bool setDirectedEdge(int v1, int v2, int weight, Graph *G) {
    if (!(G && validEdge(v1, v2, G)))
        return false;

    G->weights[v1][v2] = weight;
    G->edges = (weight == INT_MIN) ? G->edges-- : G->edges++;
    return true;
}

int *getEdge(int v1, int v2, Graph *G) {
    return (G && validEdge(v1, v2, G)) ? G->weights[v1] + v2 : NULL;
}

int getWeight(int v1, int v2, Graph *G) {
    return (validEdge(v1, v2, G)) ? G->weights[v1][v2] : INT_MIN;
}

bool validVector(int v, Graph *G) {
    if (v > 0 && v < G->vertices)
        return true;

    fprintf(stderr,
            "Erro: o parâmetro \"%d\", descreve um vértice além dos 0 à "
            "%d contidos pelo grafo.\n",
            v, G->vertices - 1);
    return false;
}

bool validEdge(int v1, int v2, Graph *G) {
    return (validVector(v1, G) && validVector(v2, G));
}

bool setEdge(int v1, int v2, int weight, Graph *G) {
    return (setDirectedEdge(v1, v2, weight, G))
               ? setDirectedEdge(v2, v1, weight, G)
               : false;
}

bool setVertices(int vertices, Graph *G) {
    int i, j;

    if (!G || vertices <= 0)
        return false;
    if (vertices > G->vertices) {
        G->weights = realloc(G->weights, vertices * sizeof(int *));
        for (i = 0; i < G->vertices; i++) {
            G->weights[i] = realloc(G->weights[i], vertices * sizeof(int));
            for (j = G->vertices; j < vertices; j++)
                G->weights[i][j] = INT_MIN;
        }
        while (i++ < vertices)
            G->weights[i] = initEdges(vertices);
    } else if (vertices < G->vertices)
        for (i = vertices; i < G->vertices; i++)
            free(G->weights[i]);
    G->vertices = vertices;
    return true;
}

bool removeDirectedEdge(int v1, int v2, Graph *G) {
    return (G && getWeight(v1, v2, G) != INT_MIN)
               ? setDirectedEdge(v1, v2, INT_MIN, G)
               : false;
}

bool hasEdge(int v1, int v2, Graph *G) { return (getEdge(v1, v2, G)); }

bool removeEdge(int v1, int v2, Graph *G) {
    return removeDirectedEdge(v1, v2, G) ? removeDirectedEdge(v2, v1, G)
                                         : false;
}

bool freeGraph(Graph *G) {
    int i;

    if (!G)
        return false;

    for (i = 0; i < G->vertices; i++)
        free(G->weights[i]);
    free(G->weights);
    free(G);
    return true;
}

void printEmptyCell(int length) {
    for (int i = 0; i < length; i++)
        printf(" ");
}

int countDigits(int number) {
    int digits;

    for (digits = 1; number != 0; digits++)
        number /= 10;
    return digits;
}

int maxAbsEdge(Graph *G) {
    /* Get the maximum absolute weight value in a Graph */

    int i, j, absWeight = 0;

    if (G)
        for (i = 0; i < G->vertices; i++)
            for (j = 0; j < G->vertices; j++)
                if (G->weights[i][j] != EOF &&
                    abs(G->weights[i][j]) > absWeight)
                    absWeight = abs(G->weights[i][j]);
    return absWeight;
}

Graph *printGraph(Graph *G) {
    /* Printout the contents of the adjacency matrix that represents a Graph */
    int i, j, length, weight;

    if (G) {
        /* Set the column length */
        length = MAX(countDigits(G->vertices), countDigits(maxAbsEdge(G))) + 1;

        /* Print header row */
        printf(BOLD);
        printEmptyCell(length);
        for (i = 0; i < G->vertices; i++)
            printf("\t%*d", length, i);
        printf(RESET "\n");

        /* Print following rows */
        for (i = 0; i < G->vertices; i++) {
            printf(BOLD "%*d" RESET, length, i);
            for (j = 0; j < G->vertices; j++) {
                weight = getWeight(i, j, G);
                if (weight == INT_MIN) {
                    printf("\t");
                    printEmptyCell(length);
                } else
                    printf("\t%*d", length, weight);
            }
            printf("\n");
        }
    }
    return G;
}

Graph *transposeGraph(Graph *G) {
    int i, j;
    Graph *J;

    if (!G)
        return NULL;

    J = malloc(sizeof(Graph));
    J->vertices = G->vertices;
    J->edges = G->edges;
    J->weights = malloc(J->vertices * sizeof(int *));
    for (i = 0; i < G->vertices; i++) {
        J->weights[i] = malloc(J->vertices * sizeof(int));
        for (j = 0; j < J->vertices; j++)
            J->weights[i][j] = G->weights[j][i];
    }
    return J;
}

bool findMinEdge(int *v1, int *v2, Graph *G) {
    int i, j, weight;

    if (!G)
        return false;

    weight = INT_MAX;
    for (i = 0; i < G->vertices; i++)
        for (j = 0; j < G->vertices; j++)
            if (G->weights[i][j] > INT_MIN && G->weights[i][j] < weight) {
                *v1 = i;
                *v2 = j;
            }
    return true;
}

int popMinDirectedEdge(Graph *G) {
    int v1, v2, weight;

    if (!findMinEdge(&v1, &v2, G))
        return INT_MIN;

    weight = G->weights[v1][v2];
    G->weights[v1][v2] = INT_MIN;
    return weight;
}

int popMinEdge(Graph *G) {
    int v1, v2, weight;

    if (!findMinEdge(&v1, &v2, G))
        return INT_MIN;
    if (G->weights[v1][v2] != G->weights[v2][v1]) {
        printf("Erro: A aresta do vértice %d à %d é direcionada.\n", v1, v2);
        return INT_MIN;
    }

    weight = G->weights[v1][v2];
    G->weights[v1][v2] = INT_MIN;
    G->weights[v2][v1] = INT_MIN;
    return weight;
}

#endif
