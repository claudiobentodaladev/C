#include<stdio.h>
#include<math.h>
/*

CRIE UM PROGRAMA QUE INSERE 16 VALORESDE FORMA ALEATORIA EM UMA MATRIZ
    a) mostre os valores par e impar que se encontra na diagonal principal
    b) mostre os valores par e impar que se encontra na diagonal secundaria

*/
int main(){

    int valores[4][4];
    int aleatorio = 0;

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){

            aleatorio += 1;

            valores[l][c] = aleatorio; 
            
        }
    }

    for(int l = 0; l < 4; l++){
        for(int c = 0; c < 4; c++){
            if(l == c){
                printf("====== Diagonal principa %i:%i ====== \n", l, c);

                if(valores[l][c] % 2 == 0){
                    printf("Par: %i \n", valores[l][c]);
                } else{
                    printf("Impar: %i \n", valores[l][c]);
                }

            }
        }
    }

    return 0;
}