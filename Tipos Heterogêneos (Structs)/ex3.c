#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

// função que zera os dados
void reset_estoque(Produto *p) {
    p->id = 0;
    p->preco = 0.0;
}

int main() {
    Produto prod = {10, 50.5};

    printf("Antes: ID=%d Preço=%.2f\n", prod.id, prod.preco);

    reset_estoque(&prod);

    printf("Depois: ID=%d Preço=%.2f\n", prod.id, prod.preco);

    return 0;
}