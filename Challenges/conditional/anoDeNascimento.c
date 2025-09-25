#include <stdio.h>

int main(){

    int ano = 0;

    printf("Informe a seu ano de nascimento:\n");
    scanf("%i", &ano);

    int idade = 2025 - ano;

    if (idade <= 78){
        printf("Idade: %i, abaixo da esperança de vida", idade);
    } else{
        printf("Idade: %i, acima da esperança de vida", idade);
    }

    return 0;
}