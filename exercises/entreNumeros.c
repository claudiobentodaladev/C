#include <stdio.h>

int main(){

    int numero = 0;

    printf("Informe a um numero:\n");
    scanf("%i", &numero);

    if (numero >= 0 && numero < 10){
        printf("numero: %i, é unitario", numero);
    } else if(numero >= 10 && numero < 100) {
        printf("numero: %i, é dezena", numero);
    } else if(numero >= 100 && numero < 1000) {
        printf("numero: %i, é centena", numero);
    }  else if(numero >= 1000 && numero <= 9999) {
        printf("numero: %i, é milesimo", numero);
    } else{
        printf("numero INVALIDA!");
    }

    return 0;
}