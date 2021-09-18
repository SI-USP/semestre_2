#include <stddef.h>
#include <stdlib.h>

typedef struct pessoa {
    int id;
    struct pessoa * mae, * pai;
} Pessoa;

Pessoa * inicializar (int id) {
    Pessoa * init = malloc(sizeof(*init));
    init->id = id;
    init->mae = init->pai = NULL;
    return init;
}

void registrar(Pessoa * filho, Pessoa * mae, Pessoa * pai) {
    filho->mae = mae;
    filho->pai = pai;
}
