// Exercício 4

#include <stdio.h>

int main() {

    int vetor[5];
    int *ponteiro = vetor;

    printf("Informe 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ponteiro + i);
    }

    printf("O dobro de cada valor do vetor informado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i) * 2);
    }

    return 0;
}
