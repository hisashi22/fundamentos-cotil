#include <stdio.h>

int main() {
    int vetor[10]; // Vetor com espaço para 10 inteiros
    int i;

    printf("Digite 10 valores inteiros:\n");

    // Loop para ler os valores
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibindo os valores armazenados
    printf("\nValores armazenados no vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
