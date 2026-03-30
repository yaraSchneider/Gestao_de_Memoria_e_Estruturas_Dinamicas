#include <stdio.h>

int main() {
    int n = 5;
    int mat[5][5];

    for (int i = 0; i < n; i++) {        // executa n vezes
        for (int j = 0; j < n; j++) {    // executa n vezes para cada i
            mat[i][j] = i + j;
        }
    }

    /*
      Complexidade:
      Loop externo: n
      Loop interno: n
      Total: n * n = O(n²)
    */

    return 0;
}