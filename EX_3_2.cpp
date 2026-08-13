#include <stdio.h>

int main() {
    int A, B;
    int soma, subtr, mult;
    float divis;

    printf("Digite o primeiro valor: ");
    scanf("%d", &A);

    printf("Digite o segundo valor: ");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = (float)A / B;

    printf("Resultados:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtr);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %.2f\n", divis);

    printf("\nOperadores de incremento e decremento:\n");

    int dado = A;

    printf("Valor inicial: %d\n", dado);

    dado++;
    printf("Depois do incremento: %d\n", dado);

    dado--;
    printf("Depois do decremento: %d\n", dado);

    dado += 3;
    printf("Depois de somar 3: %d\n", dado);

    dado -= 2;
    printf("Depois de subtrair 2: %d\n", dado);

    dado *= 10;
    printf("Depois de multiplicar por 10: %d\n", dado);

    dado /= 5;
    printf("Depois de dividir por 5: %d\n", dado);

    dado %= 3;
    printf("Resto da divisao por 3: %d\n", dado);

    return 0;
}
