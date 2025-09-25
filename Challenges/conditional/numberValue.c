#include<stdio.h>

int main(){
    int number = 0;

    printf("Informe um número:\n");
    scanf("%i", &number);

    if (number > 0){
       printf("O numero é positivo!\n");
    }
    else if (number < 0){
        printf("O numero é negativo!\n");
    }
    else{
        printf("O numero é nulo, é 0!\n");
    }
    
    return 0;
}