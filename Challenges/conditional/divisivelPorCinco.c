#include <stdio.h>

int main(){

    int number = 0;

    printf("Informe um número:\n");
    scanf("%i", &number);

    if (number % 5 == 0){
        printf("%i é um numero divisivel por 5", number);
    }
    else{
        printf("%i não é um numero divisivel por 5", number);
    }

    return 0;
}