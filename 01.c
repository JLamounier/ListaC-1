#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, invertido, centena, unidade, dezena;

    printf("Escreva um numero de 3 digitos: ");
    scanf("%i", &numero);

    centena = (int)numero/100;
    dezena = ((int)numero%100)/10;
    unidade = ((int)((int)numero%100)%10);
    invertido = unidade*100 + dezena*10 + centena;

    printf("O numero invertido e: %i", invertido);

    return 0;
}