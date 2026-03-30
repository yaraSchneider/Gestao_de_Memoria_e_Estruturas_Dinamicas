#include <stdio.h>

// função que dobra o valor
void dobrar(int *num) {
    *num = (*num) * 2;
}

int main() {
    int valor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    dobrar(&valor);

    printf("Valor dobrado: %d\n", valor);

    return 0;
}