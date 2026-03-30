#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int *vet = (int *) malloc(N * sizeof(int));

    if (vet == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    int soma = 0;

    for (int i = 0; i < N; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    float media = (float)soma / N;
    printf("Média: %.2f\n", media);

    free(vet);

    return 0;
}