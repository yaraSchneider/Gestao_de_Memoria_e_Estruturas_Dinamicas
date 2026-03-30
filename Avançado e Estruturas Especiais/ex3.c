#include <stdlib.h>

void liberarMatriz(int **mat, int M) {
    for (int i = 0; i < M; i++) {
        free(mat[i]); // libera cada linha
    }
    free(mat); // libera o ponteiro principal
}