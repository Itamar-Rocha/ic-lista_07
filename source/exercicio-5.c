// Exercício 5

#include <stdio.h>

void calcularMedia(int idades[], float *media) {
    int soma = 0;

    for (int i = 0; i < 4; i++) {
        soma += idades[i];
    }

    *media = (float)soma / 4;
}

int main() {
    int idades[4];
    float media;
    float *pmedia = &media;

    printf("Digite as idades de 4 pessoas:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &idades[i]);
    }

    calcularMedia(idades, pmedia);
    printf("A média das idades é %.2f", media);

    return 0;
}
