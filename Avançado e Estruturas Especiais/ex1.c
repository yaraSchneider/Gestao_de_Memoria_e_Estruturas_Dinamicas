#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vet = (int *) malloc(2 * sizeof(int));

    if (vet == NULL) {
        printf("Erro!\n");
        return 1;
    }

    // primeiros 2 valores
    for (int i = 0; i < 2; i++) {
        printf("Digite valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // expandindo para 4
    vet = (int *) realloc(vet, 4 * sizeof(int));

    if (vet == NULL) {
        printf("Erro ao realocar!\n");
        return 1;
    }

    for (int i = 2; i < 4; i++) {
        printf("Digite valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Valores:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", vet[i]);
    }

    free(vet);
    return 0;
}