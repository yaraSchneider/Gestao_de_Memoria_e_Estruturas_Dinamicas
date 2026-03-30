#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

Aluno** aprovados(Aluno *vet, int n, int *qtd) {
    *qtd = 0;

    // contar aprovados
    for (int i = 0; i < n; i++) {
        if (vet[i].nota > 7.0) (*qtd)++;
    }

    Aluno **res = (Aluno **) malloc((*qtd) * sizeof(Aluno *));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i].nota > 7.0) {
            res[j++] = &vet[i];
        }
    }

    return res;
}