#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Quantas cidades? ");
    scanf("%d", &n);

    char **cidades = (char **) malloc(n * sizeof(char *));

    char temp[100];

    for (int i = 0; i < n; i++) {
        printf("Cidade %d: ", i + 1);
        scanf("%s", temp);

        cidades[i] = (char *) malloc(strlen(temp) + 1);
        strcpy(cidades[i], temp);
    }

    printf("\nLista:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", cidades[i]);
    }

    // liberar
    for (int i = 0; i < n; i++) {
        free(cidades[i]);
    }
    free(cidades);

    return 0;
}