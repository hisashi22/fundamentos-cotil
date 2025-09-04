#include <stdio.h>

int main() {
    // Declara um vetor de 10 posições
    int vetor[10];
    int i;
    int maiorValor;

    // Loop para ler os 10 valores do usuário
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Assume que o primeiro elemento é o maior inicialmente
    maiorValor = vetor[0];

    // Loop para encontrar o maior valor no vetor
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    // Exibe o maior valor encontrado
    printf("\nO maior valor digitado foi: %d\n", maiorValor);

    return 0;
}