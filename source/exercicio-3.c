// Exercício 3

#include <stdio.h>

int main() {

    float vetor[10];

    printf("Informe 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    printf("Endereços das posições do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: %p\n", i, &vetor[i]);
    }

    return 0;
}
