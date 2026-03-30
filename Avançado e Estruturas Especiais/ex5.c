#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

Produto* clonar(Produto *origem) {
    Produto *novo = (Produto *) malloc(sizeof(Produto));

    if (novo == NULL) return NULL;

    novo->id = origem->id;
    novo->preco = origem->preco;

    return novo;
}