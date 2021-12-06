#include <stdio.h>
#include <math.h>

int main(){

    float cateto1, cateto2, hipotenusa;

    printf("Indique o valor dos catetos:\n");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    printf("O valor da hipotenusa e: %.2f", hipotenusa);

    return 0;
}