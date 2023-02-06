#ifndef FUNCTIONFILE_C
#define FUNCTIONFILE_C
#include "./graph.h"
#include <cstdlib>

void freeEdges(Edge *e) {
    if (!e)
        return;
    freeEdges(e->next);
    free(e);
}

Edge *initEdge(int vector, int weight, Edge *next) {
    Edge *e = malloc(sizeof(Edge));

    e->vector = vector;
    e->weight = weight;
    e->next = next;
    return e;
}

void freeVertices(Vector *v) {
    if (!v)
        return;
    freeVertices(v->next);
    freeEdges(v->edges);
    free(v);
}

Vector *initVector(int id, Edge *e, Vector *next) {
    Vector *v = malloc(sizeof(Vector));

    v->id = id;
    v->c = white;
    v->edges = e;
    v->next = next;
    return v;
}

void freeGraph(Graph *g) {
    if (!g)
        return;
    freeVertices(g->vertices);
    free(g);
}

Graph *initGraph(int vertices) {
    int i;
    Graph *g;
    Vector *v;

    if (vertices < 0)
        return NULL;

    g = malloc(sizeof(Graph));
    g->verticesCount = vertices;

    if (vertices < 1)
        g->vertices = NULL;
    else {
        i = 1;
        v = g->vertices = initVector(i++, NULL, NULL);
        do {
            v->next = initVector(i, NULL, NULL);
            v = v->next;
        } while (i++ < vertices);
    }
    return g;
}

bool hasEdge(int v1, int v2, Graph *g) {
    Vector *v;
    Edge *e;

    if (!g)
        return false;

    v = g->vertices;
    while (v && v->id < v1)
        v = v->next;
    if (!v || v->id != v1)
        return false;

    e = v->edges;
    while (e && e->vector < v2)
        e = e->next;
    return (e && e->vector == v2);
}

bool removeDirectedEdge(int v1, int v2, Graph *g) {
    Vector *prevV, *currentV;
    Edge *prevE, *currentE;

    if (!g)
        return false;

    prevV = NULL;
    currentV = g->vertices;
    while (currentV && currentV->id < v1) {
        prevV = currentV;
        currentV = currentV->next;
    }
    if (currentV->id != v1)
        return false;

    prevE = NULL;
    currentE = currentV->edges;
    while (currentE && currentE->vector < v2) {
        prevE = currentE;
        currentE = currentE->next;
    }
    if (currentE->vector != v2)
        return false;

    if (prevE)
        prevE->next = currentE->next;
    else
        currentV->edges = currentE->next;
    free(currentE);
    return true;
}

bool removeEdge(int v1, int v2, Graph *g) {
    return (removeDirectedEdge(v1, v2, g)) ? removeDirectedEdge(v2, v1, g)
                                           : false;
}

bool addEdge(Vector *v1, int v2, int weight) {
    Edge *prev, *current;

    if (!v1)
        return false;

    prev = NULL;
    current = v1->edges;

    while (current && current->vector < v2) {
        prev = current;
        current = current->next;
    }
    if (!current || current->vector != v2) {
        if (prev)
            prev->next = initEdge(v2, weight, current);
        else
            v1->edges = initEdge(v2, weight, v1->edges);
    } else
        current->weight = weight;
    return true;
}

bool setDirectedEdge(int v1, int v2, int weight, Graph *g) {
    Vector *prev, *current;

    if (!g)
        return false;

    prev = NULL;
    current = g->vertices;

    while (current && current->id < v1) {
        prev = current;
        current = current->next;
    }

    if (current && current->id == v1)
        addEdge(current, v2, weight);
    else if (!prev)
        g->vertices = initVector(v1, initEdge(v2, weight, NULL), current);
    else
        prev->next = initVector(v1, initEdge(v2, weight, NULL), current);
    return true;
}

bool setEdge(int v1, int v2, int weight, Graph *g) {
    return (setDirectedEdge(v1, v2, weight, g))
               ? setDirectedEdge(v2, v1, weight, g)
               : false;
}

void printEdges(Edge *e) {
    if (!e)
        printf("\n");
    else {
        printf("(%d, %d) ", e->vector, e->weight);
        printEdges(e->next);
    }
}

void printVertices(Vector *v) {
    if (!v)
        return;
    printf(BOLD "%d: " RESET, v->id);
    printEdges(v->edges);
    printVertices(v->next);
}

Graph *printGraph(Graph *g) {
    if (g)
        printVertices(g->vertices);
    return g;
}

Graph *transposeGraph(Graph *g) {
    Vector *v;
    Edge *e;
    Graph *j;

    if (!g)
        return NULL;

    j = initGraph(g->verticesCount);
    for (v = g->vertices; v; v = v->next)
        for (e = v->edges; e; e = e->next)
            setDirectedEdge(e->vector, v->id, e->weight, j);
    return j;
}

void getMin(Vector *v, Edge *e, int *minV1, int *minV2, int *minWeight) {
    if (!e) {
        if (!v->next)
            return;
        getMin(v->next, v->next->edges, minV1, minV2, minWeight);
    } else {
        if (e->weight <= *minWeight) {
            *minV1 = v->id;
            *minV2 = e->vector;
            *minWeight = e->weight;
        }
        getMin(v, e->next, minV1, minV2, minWeight);
    }
}

int popMinEdge(Graph *g, graphType t) {
    int minV1, minV2, minWeight;
    Vector *v;
    Edge *e;

    if (!g)
        return EOF;

    v = g->vertices;
    e = v->edges;

    minV1 = v->id;
    minV2 = e->vector;
    minWeight = e->weight;

    getMin(v, e->next, &minV1, &minV2, &minWeight);
    if (t == directed)
        removeDirectedEdge(minV1, minV2, g);
    else
        removeEdge(minV1, minV2, g);
    return minWeight;
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

#endif
