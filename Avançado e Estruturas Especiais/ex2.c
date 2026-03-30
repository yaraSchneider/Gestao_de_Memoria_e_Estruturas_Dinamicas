#include <stdio.h>
#include <stdlib.h>

int main() {
    int M = 2, N = 3;

    int **mat = (int **) malloc(M * sizeof(int *));

    for (int i = 0; i < M; i++) {
        mat[i] = (int *) malloc(N * sizeof(int));
    }

    // preenchendo
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = i + j;
        }
    }

    // exibindo
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}