#include <stdio.h>

int main(){

    int idade = 0;

    printf("Informe a sua idade:\n");
    scanf("%i", &idade);

    if (idade >= 0 && idade <= 13){
        printf("Idade: %i, você é criança", idade);
    } else if(idade > 13 && idade <= 17) {
        printf("Idade: %i, você é adolescente", idade);
    } else if(idade >= 18 && idade <= 65) {
        printf("Idade: %i, você é adulto", idade);
    }  else if(idade >= 65 && idade <= 150) {
        printf("Idade: %i, você é idoso", idade);
    } else{
        printf("IDADE INVALIDA!");
    }

    return 0;
}