#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rua[50];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    Endereco *end;
} Pessoa;

int main() {
    Pessoa *p = (Pessoa *) malloc(sizeof(Pessoa));
    Endereco *e = (Endereco *) malloc(sizeof(Endereco));

    if (p == NULL || e == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // preenchendo dados
    printf("Nome: ");
    scanf("%s", p->nome);

    printf("Rua: ");
    scanf("%s", e->rua);

    printf("Número: ");
    scanf("%d", &e->numero);

    // conectando
    p->end = e;

    printf("\n--- Dados ---\n");
    printf("Nome: %s\n", p->nome);
    printf("Rua: %s\n", p->end->rua);
    printf("Número: %d\n", p->end->numero);

    free(e);
    free(p);

    return 0;
}