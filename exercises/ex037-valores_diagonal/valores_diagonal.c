#include<stdio.h>

int matriz[3][3];

void inserir(){

    printf("========= Iseriri os valores ========= \n");

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            printf("Insere [%i][%i]: \n", l, c);
            scanf("%i", &matriz[l][c]);
        }
    }
}

void acima_da_diagonalPrincipal(){

    printf("========= VALORES ACIMA DA DIAGONAL PRINCIPAL  ========= \n");

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            if(l < c){

                if(matriz[l][c] > 10){
                    printf("Valor [%i][%i]: %i \t", l, c,  matriz[l][c] * 5);
                } else {
                    printf("Valor [%i][%i]: %i \t", l, c,  matriz[l][c]);
                }
            }
        }
    }
}

void abaixo_da_diagonalPrincipal(){

    printf("\n ========= VALORES ABAIXO DA DIAGONAL PRINCIPAL ========= \n");
    
    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            if(l > c){
                printf("Valor [%i][%i]: %i \t", l, c,  matriz[l][c]);
            }
        }
    }
}

int main(){

    inserir();

    acima_da_diagonalPrincipal();
    
    abaixo_da_diagonalPrincipal();

    return 0;
}