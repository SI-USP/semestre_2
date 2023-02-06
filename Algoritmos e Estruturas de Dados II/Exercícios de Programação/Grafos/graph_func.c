#ifndef FUNCTIONFILE_C
#define FUNCTIONFILE_C
#include "./graph.h"
#include "matrix/matrixGraph.h"
#include <limits.h>

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

bool hasEdge(int v1, int v2, Graph *G) {
    return (getWeight(v1, v2, G) != INT_MIN);
}

bool removeEdge(int v1, int v2, Graph *G) {
    return removeDirectedEdge(v1, v2, G) ? removeDirectedEdge(v2, v1, G)
                                         : false;
}

bool setEdge(int v1, int v2, int weight, Graph *G) {
    return (setDirectedEdge(v1, v2, weight, G))
               ? setDirectedEdge(v2, v1, weight, G)
               : false;
}

Graph *transposeGraph(Graph *G) {
    int i, j;
    Graph *J;

    if (!G)
        return NULL;

    J = malloc(sizeof(Graph));
    J->vertices = G->vertices;
    J->edges = G->vertices;
    J->weights = malloc(J->vertices * sizeof(int *));
    for (i = 0; i < G->vertices; i++) {
        J->weights[i] = malloc(J->vertices * sizeof(int));
        for (j = 0; j < J->vertices; j++)
            J->weights[i][j] = G->weights[j][i];
    }
    return J;
}

int popMinDirectedEdge(Graph *G) {
    int i, j, lin, col, weight = EOF;

    if (G) {
        for (i = 0; i < G->vertices; i++) {
            for (j = 0; j < G->vertices; j++) {
                if (G->weights[i][j] == EOF ||
                    (weight != EOF && G->weights[i][j] > weight))
                    continue;
                weight = G->weights[i][j];
                lin = i;
                col = j;
            }
        }
        removeDirectedEdge(lin, col, G);
    }
    return weight;
}

int popMinEdge(Graph *G) {
    int i, j, lin, col, weight = EOF;

    if (G) {
        for (i = 0; i < G->vertices; i++) {
            for (j = 0; j < i; j++) {
                if (G->weights[i][j] == EOF ||
                    (weight != EOF && G->weights[i][j] > weight))
                    continue;
                weight = G->weights[i][j];
                lin = i;
                col = j;
            }
        }
        removeEdge(lin, col, G);
    }
    return weight;
}

List *initNode(int vector) {
    List *node = malloc(sizeof(List));
    node->vector = vector;
    return node;
}

bool *initPath(int size, int v1) {
    bool *path = calloc(size, sizeof(bool));
    path[v1] = true;
    return path;
}

void printCycle(List *start) {
    List *current = start;

    printf("%d", current->vector);
    do {
        printf(" -> %d", current->next->vector);
        current = current->next;
    } while (current->vector != start->vector);
    printf("\n");
}

void searchCycles(int i, int j, List *HEAD, List *current, bool *path,
                  Graph *g) {
    if (j >= g->vertices)
        return;
    if (g->weights[i][j] != EOF) {
        current->next = initNode(j);
        if (!path[j]) {
            path[j] = true;
            searchCycles(j, 0, HEAD, current->next, path, g);
            path[j] = false;
        } else if (HEAD->vector == current->next->vector)
            printCycle(HEAD);
        free(current->next);
    }
    searchCycles(i, j + 1, HEAD, current, path, g);
}

void printCycles(Graph *g) {
    int i;
    bool *path;
    List *cycle;

    if (!g)
        return;

    for (i = 0; i < g->vertices; i++) {
        path = initPath(g->vertices, i);
        cycle = initNode(i);
        searchCycles(i, 0, cycle, cycle, path, g);
        free(cycle);
        free(path);
    }
}

/* Tests if a non-directed Graph is fully connected */

int countVertices(Graph *g, int vector, int vectorCount, bool *foundVertices) {
    int i;
    foundVertices[vector] = true;
    vectorCount++;

    for (i = 1; i < g->vertices; i++)
        if (g->weights[vector][i] != EOF && foundVertices[i] == false)
            vectorCount = countVertices(g, i, vectorCount, foundVertices);
    return vectorCount;
}

bool isConnected(Graph *g) {
    return (g && countVertices(g, 0, 0, calloc(g->vertices, sizeof(bool))) ==
                     g->vertices);
}

/* Apply the Djikstra pathfinder function */

void swap(int *a, int *b) {
    int i = *a;
    *a = *b;
    *b = i;
}

void heapfy(int *heap, Info *I, int i, int size) {
    int min = i, left = 2 * min + 1, right = left + 1;

    if (left >= size)
        return;
    if (I[heap[left]].distance < I[heap[min]].distance)
        min = left;
    if (right < size && I[heap[right]].distance < I[heap[min]].distance)
        min = right;
    else if (min == i)
        return;

    swap(heap + i, heap + min);
    heapfy(heap, I, min, size);
}

Info *initializeInfo(int vertices, int initialVector) {
    int i;
    Info *I = malloc((vertices + 1) * sizeof(Info));

    for (i = 0; i < vertices; i++) {
        I[i].vector = i;
        I[i].visited = false;
        if (i != initialVector) {
            I[i].distance = INT_MAX;
            continue;
        }
        I[i].distance = 0;
        I[i].pathSize = 1;
        I[i].path = malloc(sizeof(int));
        *(I[i].path) = i;
    }
    return I;
}

int *initializeHeap(Info *I, int size) {
    int i, *heap = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
        heap[i] = i;
    for (i = (size - 1) / 2; i <= 0; i--)
        heapfy(heap, I, i, size);
    return heap;
}

int *append(int *path, int size, int vector) {
    int i, *newPath = malloc((size--) * sizeof(int));

    for (i = 0; i < size; i++)
        newPath[i] = path[i];
    newPath[i] = vector;
    return newPath;
}

void relax(Info *current, Info *prev, int distance) {
    current->distance = distance;
    current->pathSize = prev->pathSize + 1;
    current->path = append(prev->path, current->pathSize, current->vector);
}

Info *Djikstra(Graph *g, int initialVector) {
    int i, visited, distance, *heap;
    Info *I;

    if (!g || initialVector < 0 || initialVector >= g->vertices)
        return NULL;

    visited = 0;
    I = initializeInfo(g->vertices, initialVector);
    heap = initializeHeap(I, g->vertices);

    while (visited < g->vertices && I[*heap].distance < INT_MAX) {
        for (i = 0; i < g->vertices; i++) {
            if (g->weights[*heap][i] == EOF || I[i].visited)
                continue;
            distance = g->weights[*heap][i] + I[*heap].distance;
            if (distance < I[i].distance)
                relax(I + i, I + *heap, distance);
        }
        I[*heap].visited = true;
        visited++;
        heap++;
        heapfy(heap, I, 0, g->vertices - visited);
    }
    return I;
}

void printInfo(Info *I, int size) {
    int i;

    if (size < 1)
        return;

    printf("O caminho mais curto para o vértice %d é %d", I->vector,
           *(I->path));
    for (i = 1; i < I->pathSize; i++)
        printf(" -> %d", I->path[i]);
    printf(", com distância total %d.\n", I->distance);
    printInfo(I + 1, size - 1);
}

#endif
