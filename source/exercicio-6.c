// Exercício 6

#include <stdio.h>

int calcularSoma(int a, int b) {
    return a + b;
}

int calcularSubtracao(int a, int b) {
    return a - b;
}

void calcularMultiplicacao(int *a, int *b, int *produto) {
    *produto = (*a) * (*b);
}

int main() {
    int n1, n2, produto;

    printf("Infome dois números inteiros:\n");
    scanf("%d %d", &n1, &n2);

    printf("A soma dos números informados é: %d\n", calcularSoma(n1, n2));
    printf("A diferença dos números informados é: %d\n", calcularSubtracao(n1, n2));

    calcularMultiplicacao(&n1, &n2, &produto);
    printf("A produto dos números informados é: %d\n", produto);

    return 0;
}
