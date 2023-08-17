// Exercício 7

#include <stdio.h>

int calcularFatorial(int n) {
    unsigned long fatorial = 1;

    for (int i = n; i > 0; i--){
        fatorial = fatorial * i;
    }

    return fatorial;
}

void criarVetorFatorial(int vetorAntigo[], int vetorNovo[]){
    for (int i = 0; i < 10; i++) {
        vetorNovo[i] = calcularFatorial(vetorAntigo[i]);
    }
}

int main() {
    int vetor[10];
    int vetorFatorial[10];

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    criarVetorFatorial(vetor, vetorFatorial);

    printf("Vetor fatorial:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetorFatorial[i]);
    }

    return 0;
}

