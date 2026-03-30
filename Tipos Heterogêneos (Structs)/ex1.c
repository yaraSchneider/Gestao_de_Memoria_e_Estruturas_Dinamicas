#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float preco;
} Produto;

int main() {
    Produto *p = (Produto *) malloc(sizeof(Produto));

    if (p == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // usando apenas ->
    p->id = 1;
    p->preco = 99.90;

    printf("ID: %d\n", p->id);
    printf("Preço: %.2f\n", p->preco);

    free(p);

    return 0;
}