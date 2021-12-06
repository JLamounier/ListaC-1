#include <stdio.h>
#include <math.h>

int main(){

    float razao, primeiro, quinto;

    printf("Insira o valor da razao e o primeiro termo da progressao:");
    scanf("%f %f", &razao, &primeiro);

    quinto = primeiro*(pow(razao,4));

    printf("O quinto numero dessa progressao geometrica e: %.2f", quinto);

    return 0;
}