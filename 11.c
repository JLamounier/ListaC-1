#include <stdio.h>

int main(){

    float numerador, denominador, decimal;

    printf("Insira o numerador e o denominador da fracao: \n");
    scanf("%f %f", &numerador, &denominador);

    decimal = numerador/denominador;

    printf("O valor decimal da fracao e: %.3f", decimal);

    return 0;
}