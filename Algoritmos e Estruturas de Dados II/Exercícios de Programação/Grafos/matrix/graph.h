#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/param.h>

#define BOLD "\033[1m"
#define RESET "\033[0m"
#define time int

typedef struct {
    int **weights, vertices, edges;
} Graph;

Graph *transposeGraph(Graph *G);
Graph *initGraph(int vertices);
Graph *printGraph(Graph *G);
bool findMinEdge(int *v1, int *v2, Graph *G);
bool freeGraph(Graph *G);
bool hasEdge(int v1, int v2, Graph *G);
bool removeDirectedEdge(int v1, int v2, Graph *G);
bool removeEdge(int v1, int v2, Graph *G);
bool setDirectedEdge(int v1, int v2, int weight, Graph *G);
bool setEdge(int v1, int v2, int weight, Graph *G);
bool validEdge(int v1, int v2, Graph *G);
bool validVector(int v, Graph *G);
int *initEdges(int vertices);
int countDigits(int number);
int getWeight(int v1, int v2, Graph *G);
int maxAbsEdge(Graph *G);
int popMinDirectedEdge(Graph *G);
int popMinEdge(Graph *G);
void printEmptyCell(int length);

#include "./graph_func.c"

#endif
