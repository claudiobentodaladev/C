#include <stdio.h>

int main(){

    int number1 = 0, number2 = 0;

    printf("Informe um 1 número:\n");
    scanf("%i", &number1);

    printf("Informe um 2 número:\n");
    scanf("%i", &number2);

    if (number1 > number2){
        printf("Numero %i é maior que numero %i", number1, number2);
    }
    else{
        printf("Numero %i é maior que numero %i", number2, number1);
    }

    return 0;
}