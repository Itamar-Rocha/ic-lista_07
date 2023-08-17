// Exercício 2

#include <stdio.h>

int main() {
    int n1, n2;

    int *pn1 = &n1;
    int *pn2 = &n2;

    printf("Endereço de n1: %p\n", pn1);
    printf("Endereço de n2: %p\n", pn2);

    if (pn1 > pn2) {
        printf("O maior endereço é: %p\n", pn1);
    } else if (pn2 > pn1) {
        printf("O maior endereço é: %p\n", pn2);
    } else {
        printf("Os endereços são iguais: %p\n", pn1);
    }

    return 0;
}
