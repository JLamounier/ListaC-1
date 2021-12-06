#include <stdio.h>

int main(){

    float A, B, C;

    printf("Insira o valor de A: ");
    scanf("%f", &A);
    C = A;
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    A = B;
    B = C;

    printf("A: %.2f\n", A);
    printf("B: %.2f\n", B);

    return 0;
}