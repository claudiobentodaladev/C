#include<stdio.h>

int main(){
    int dia;
    
    printf("Informa o dia da semana:\n");
    scanf("%d", &dia);

    while(dia >= 7){
    printf("Denovo:\n");
    scanf("%d", &dia);
    }
    
    switch(dia){
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terça-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        default:
            printf("Wrong value\n");
            break;
    }
    return 0;
}