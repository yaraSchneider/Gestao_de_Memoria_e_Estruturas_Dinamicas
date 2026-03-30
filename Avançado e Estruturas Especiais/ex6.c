#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

Produto* buscar(Produto vet[], int tamanho, int id) {
    for (int i = 0; i < tamanho; i++) {
        if (vet[i].id == id) {
            return &vet[i];
        }
    }
    return NULL;
}