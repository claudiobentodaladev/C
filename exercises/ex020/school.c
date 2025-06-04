#include<stdio.h>

int main(){
    char nome[25];
    int idade;
    float media;

    printf("Nome: \n");
    scanf("%c", &nome);

    printf("Idade: \n");
    scanf("%i", &idade);

    printf("Média: \n");
    scanf("%f", &media);

    printf("Nome: %c\n", nome);
    printf("Idade: %i\n", idade);
    printf("Média: %f \n", media);

    return 0;
}