#include <stdio.h>

int main(){

    int hora, minuto, minPassaram;

    printf("Insira o horario atual (hora e minutos consecultivamente): \n");
    scanf("%i %i", &hora, &minuto);

    minPassaram = hora*60 + minuto;

    printf("Ja se passaram %i minutos hoje", minPassaram);

    return 0;
}