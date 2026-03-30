#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *) malloc(5 * sizeof(int));

    if (p == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    int *temp = p;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", temp);
        temp++;
    }

    temp = p;

    printf("Valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *temp);
        temp++;
    }

    free(p);

    return 0;
}