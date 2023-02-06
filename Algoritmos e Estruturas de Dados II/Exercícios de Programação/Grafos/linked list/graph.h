#ifndef HEADERFILE_H
#define HEADERFILE_H
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/param.h>

#define BOLD "\033[1m"
#define RESET "\033[0m"
#define time int

typedef enum { directed, notDirected } graphType;

typedef struct edge {
    struct edge *next;
    int vector, weight;
} Edge;

typedef struct vectors {
    struct vectors *next;
    int id;
    Edge *edges;
} Vector;

typedef struct list {
    struct list *next;
    int vector;
} List;

typedef struct {
    Vector *vertices;
    int verticesCount;
} Graph;

Edge *initEdge(int vectors, int weight, Edge *next);
Graph *initGraph();
Graph *printGraph(Graph *g);
Graph *transposeGraph(Graph *g);
Vector *initVector(int id, Edge *e, Vector *next);
bool addEdge(Vector *v1, int v2, int weight);
bool hasEdge(int v1, int v2, Graph *g);
bool removeDirectedEdge(int v1, int v2, Graph *g);
bool removeEdge(int v1, int v2, Graph *g);
bool setDirectedEdge(int v1, int v2, int weight, Graph *g);
bool setEdge(int v1, int v2, int weight, Graph *g);
int popMinEdge(Graph *g, graphType t);
void freeEdges(Edge *e);
void freeGraph(Graph *g);
void freeVertices(Vector *v);
void getMin(Vector *v, Edge *e, int *minV1, int *minV2, int *minWeight);
void printEdges(Edge *e);
void printVectors(Vector *v);

#include "./graph_func.c"
#endif
