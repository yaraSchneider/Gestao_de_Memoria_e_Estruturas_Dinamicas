#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno *alunos = (Aluno *) malloc(3 * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    printf("\n--- Dados ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%s - %.2f\n", alunos[i].nome, alunos[i].nota);
    }

    free(alunos);

    return 0;
}