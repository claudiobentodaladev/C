#include <stdio.h>

int main(){

    int number = 0;

    printf("Informe um número:\n");
    scanf("%i", &number);

    if (number % 2 == 0){
        printf("%i é um numero par", number);
    }
    else{
        printf("%i é um numero impar", number);
    }

    return 0;
}