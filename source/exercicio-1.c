// Exercício 1

#include <stdio.h>

float base, altura;

float calcularArea() {
    return base * altura;
}

int main() {
    printf("Informe a base do retângulo: ");
    scanf("%f", &base);

    printf("Informe a altura do retângulo: ");
    scanf("%f", &altura);

    printf("A área do retângulo é: %.2f\n", calcularArea());
    return 0;
}
