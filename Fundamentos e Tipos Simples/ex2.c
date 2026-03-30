#include <stdio.h>
#include <stdlib.h>

int main() {
    char *p;

    p = (char *) malloc(1024 * 1024 * 1024); // 1GB

    if (p == NULL) {
        printf("Erro: não foi possível alocar 1GB de memória.\n");
    } else {
        printf("Memória alocada com sucesso!\n");
        free(p);
    }

    return 0;
}