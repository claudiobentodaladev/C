#include<stdio.h>
#include <stdbool.h>

int valores[4][4];

void inserir(){
    int aleatorio = 0;
    bool positivo = true;
    
    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
    
            aleatorio += 1;
    
            if(positivo){
                valores[l][c] = aleatorio;
            } else{
                valores[l][c] = aleatorio * -1;
            }
    
            positivo = !positivo;
        }
    }
}

void diagonalPrincipal(){

    printf("====== DIAGONAL PRINCIPAL ====== \n");

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
    
            if(l == c){
    
                if(valores[l][c] > 0){
                    printf("Positivo[%i][%i]: %i \t", l, c, valores[l][c]);
                } else{
                    printf("Negativo[%i][%i]: %i \t", l, c, valores[l][c]);
                }
    
            }
    
        }
    }

    printf("\n");
}

void diagonalSecundaria(){

    printf("====== DIAGONAL SEGUNDARIA ====== \n");

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
    
            if(l == c - 3 || c == l - 3 || (l == 1 && c == 1)){
    
                if(valores[l][c] > 0){
                    printf("Positivo[%i][%i]: %i \t", l, c, valores[l][c]);
                } else{
                    printf("Negativo[%i][%i]: %i \t", l, c, valores[l][c]);
                }
    
            }
    
        }
    }

    printf("\n");
}

int main(){

    inserir();

    diagonalPrincipal();

    diagonalSecundaria();

    return 0;
}