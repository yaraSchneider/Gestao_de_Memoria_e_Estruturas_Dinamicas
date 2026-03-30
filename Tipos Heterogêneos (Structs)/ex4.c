#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
} Usuario;

int main() {
    Usuario *u = (Usuario *) malloc(sizeof(Usuario));

    if (u == NULL) {
        printf("Erro ao alocar usuário!\n");
        return 1;
    }

    char temp[100];

    printf("Digite o nome: ");
    scanf("%s", temp);

    // aloca exatamente o tamanho necessário
    u->nome = (char *) malloc(strlen(temp) + 1);

    if (u->nome == NULL) {
        printf("Erro ao alocar nome!\n");
        return 1;
    }

    strcpy(u->nome, temp);

    printf("Nome: %s\n", u->nome);

    free(u->nome);
    free(u);

    return 0;
}