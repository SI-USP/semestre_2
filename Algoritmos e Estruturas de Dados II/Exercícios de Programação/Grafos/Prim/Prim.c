/* Autoria: Guilherme de Abreu Barreto, nUSP 12543033 */

#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/* Declare structures */

typedef struct edge {
    int vector;
    float weight;
    struct edge *next;
} Edge;

typedef struct {
    int size, vectorCount;
    bool *vectors;
    Edge **edges;
} Graph;

/* Initiale a graph */

Graph *initGraph(int size) {
    Graph *G = malloc(sizeof(Graph));
    G->size = size;
    G->vectorCount = 0;
    G->vectors = calloc(size, sizeof(bool));
    G->edges = calloc(size, sizeof(Edge *));
    return G;
}

/* Adding a vector to a graph */

void addVector(Graph *G, int vector) {
    if (G->vectors[vector])
        return;
    G->vectors[vector] = true;
    G->vectorCount++;
}

/* Adding an edge to a graph */

Edge *initEdge(Graph *G, int vector, float weight, Edge *next) {
    Edge *E = malloc(sizeof(Edge));
    addVector(G, vector);
    E->vector = vector;
    E->weight = weight;
    E->next = next;
    return E;
}

Edge *setEdge(Graph *G, Edge *HEAD, int vector, float weight) {
    if (!HEAD)
        return initEdge(G, vector, weight, NULL);
    if (weight < HEAD->weight)
        return initEdge(G, vector, weight, HEAD);
    HEAD->next = setEdge(G, HEAD->next, vector, weight);
    return HEAD;
}

bool addEdge(Graph *G, int from, int to, float weight) {
    if (!G || from < 0 || G->size < from || to < 0 || G->size < to)
        return false;
    G->edges[from] = setEdge(G, G->edges[from], to, weight);
    return true;
}

/* Finding the minimum weight edge in a graph and popping it out */

Edge *maxWeight() {
    Edge *E = malloc(sizeof(Edge));
    E->weight = FLT_MAX;
    return E;
}

Edge *findMin(Graph *G, bool *visited, int *vector, Edge **prev) {
    int i;
    Edge *newMin, *currentMin = maxWeight(), *prevToMin, *initialMin;

    *prev = NULL;

    /* Set an estimate of the minimum weight as the maximum value */
    initialMin = currentMin;

    /* In reverse order, find the edge with the smallest weight that links to an
     * unvisited vector among the visited vectors */
    for (i = G->size; i >= 0; i--) {
        prevToMin = NULL;
        if (!visited[i])
            continue;
        newMin = G->edges[i];
        while (newMin && visited[newMin->vector]) {
            prevToMin = newMin;
            newMin = newMin->next;
        }
        if (!newMin || currentMin->weight < newMin->weight)
            continue;
        *vector = i;
        *prev = prevToMin;
        currentMin = newMin;
    }

    /* If such is not found return NULL, if it is, return the edge and mark the
     * vector as having been visited */
    free(initialMin);
    if (initialMin == currentMin)
        return NULL;
    visited[currentMin->vector] = true;
    return currentMin;
}

Edge *pop(Graph *G, Edge *prev, Edge *min, int vector) {
    if (!min)
        return NULL;
    if (prev)
        prev->next = min->next;
    else
        G->edges[vector] = min->next;
    return min;
}

Edge *popMinEdge(Graph *G, bool *visited, int *origin) {
    Edge *prev, *min = findMin(G, visited, origin, &prev);
    return pop(G, prev, min, *origin);
}

Edge *popMinAdjacentEdge(Graph *G, int vector) {
    Edge *E;

    if (!G || !G->edges[vector])
        return NULL;
    E = G->edges[vector];
    G->edges[vector] = E->next;
    return E;
}

/* Freeing memory */

void freeEdges(Edge *E) {
    if (!E)
        return;
    freeEdges(E->next);
    free(E);
}

void freeVectors(Graph *G, int vector) {
    if (vector >= G->size)
        return;
    freeEdges(G->edges[vector]);
    freeVectors(G, vector + 1);
}

void freeGraph(Graph *G) {
    if (!G)
        return;
    freeVectors(G, 0);
    free(G->vectors);
    free(G);
}

/* Prim's algorithm */

void selectInitialVector(Graph *G, Graph *MST) {
    int i = 0;
    while (i < G->size && !G->vectors[i])
        i++;
    MST->vectors[i] = true;
    MST->vectorCount++;
}

void BuildMST(Graph *G, Graph *MST) {
    int vector;
    Edge *E;

    if (G->vectorCount == MST->vectorCount)
        return;
    E = popMinEdge(G, MST->vectors, &vector);
    if (!E)
        return;
    addEdge(MST, vector, E->vector, E->weight);
    MST->vectorCount++;
    free(E);
    BuildMST(G, MST);
}

Graph *Prim(Graph G) {
    Graph *MST = initGraph(G.size);
    selectInitialVector(&G, MST);
    BuildMST(&G, MST);
    return MST;
}

/* Print graph's contents */

void printCost(Graph *G, FILE *out) {
    Edge *E;
    int i;
    float cost;

    if (!G)
        return;
    for (i = cost = 0; i < G->size; i++) {
        E = G->edges[i];
        while (E) {
            cost += E->weight;
            E = E->next;
        }
    }
    fprintf(out, "%g\n", cost);
}

void printST(Graph G, FILE *out) {
    int vector, edges = G.vectorCount - 1;
    Edge *E;

    while (edges > 0) {
        vector = 0;
        while (vector < G.vectorCount && !G.edges[vector])
            vector++;
        if (vector == G.vectorCount)
            return;
        for (E = popMinAdjacentEdge(&G, vector); E && edges > 0;
             E = popMinAdjacentEdge(&G, vector)) {
            fprintf(out, "%d %d\n", vector, E->vector);
            vector = E->vector;
            edges--;
            free(E);
        }
    }
}

/* Driver function */

int main(int argc, char **argv) {
    int vectors, from, to;
    float weight;
    char line[256];
    Graph *G, *MST;
    FILE *in, *out;

    in = fopen(argv[1], "r");
    if (!in) {
        perror("Não foi possível abrir o arquivo à ser lido");
        return 1;
    }
    out = fopen(argv[2], "w");
    if (!out) {
        perror("Não é possível salvar o arquivo de saída com o argumento "
               "provido.");
        return 1;
    }

    /* Read data from file */
    fgets(line, sizeof(line), in);
    sscanf(line, " %d", &vectors);
    G = initGraph(vectors);
    while (fgets(line, sizeof(line), in)) {
        sscanf(line, " %d %d %f\n", &from, &to, &weight);
        addEdge(G, from, to, weight);
        addEdge(G, to, from, weight);
    }
    fclose(in);

    /* Generate Minimum Spanning Tree and print it to a file */
    MST = Prim(*G);
    printCost(MST, out);
    printST(*MST, out);
    fclose(out);

    /* Free memory and end execution */
    freeGraph(G);
    freeGraph(MST);
    return 0;
}
