#include <stdio.h>

int main(){

    float razao, primeiro, decimo;

    printf("Insira o valor da razao e o primeiro termo da progressao.");
    scanf("%f %f", &razao, &primeiro);

    decimo = primeiro + 9*razao;

    printf("O decimo numero dessa progressao aritmetica e: %.2f", decimo);

    return 0;
}