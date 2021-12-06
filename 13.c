#include <stdio.h>

int main(){

    float salario, quantidade;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    quantidade = salario/1100;

    printf("Voce recebe %.2f salarios minimos.", quantidade);

    return 0;
}