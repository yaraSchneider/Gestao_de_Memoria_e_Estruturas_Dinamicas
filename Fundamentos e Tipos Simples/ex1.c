#include <stdio.h>
#include <stdlib.h>

int main() {
    float *p;

    p = (float *) malloc(sizeof(float));

    if (p == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite um valor: ");
    scanf("%f", p);

    printf("Valor digitado: %.2f\n", *p);

    free(p);

    return 0;
}