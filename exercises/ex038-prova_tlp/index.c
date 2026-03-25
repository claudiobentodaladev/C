#include<stdio.h>

int valores[3][3];

void inserir(){

    printf("====== INSERIR VALORES NA MATRIZ ====== \n");

    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){

            printf("[%d][%d]: \n", L, C);
            scanf("%d", &valores[L][C]);

        }
    }
}

void mostrar(){

    printf("====== MOSTRAR VALORES NA MATRIZ ====== \n");

    for (int L = 0; L < 3; L++){

        for (int C = 0; C < 3; C++){
            printf("| %d ",  valores[L][C]);
        }
 printf("|\n");
    }
   
}

int soma_acima_abaixa_diagonalPrincipal(){

    printf("====== SOMA DE CADA VALOR ACIMA COM CADA VALOR ABAIXO DA DIAGONAL PRINCIPAL ====== \n");
    
    int soma[3];
    int vezes = 0;

    printf("->  CADA VALOR ACIMA\n");

    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){

            if (L - C < 0){

                printf("[%d][%d]: %d \t", L, C, valores[L][C]);
                soma[vezes] = valores[L][C];
                vezes += 1;

            }


        }
    }
    printf("\n");

    printf("-> CADA VALOR ABAIXO\n");

    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){
            if (L - C > 0){
                printf("[%d][%d]: %d \t", L, C, valores[L][C]);
            }
        }
    }
    printf("\n");

    printf("=== SOMA\n");

    vezes = 0;

    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){

            if (L - C > 0){
                valores[L][C] += soma[vezes];
                printf("[%d][%d]: %d \t", L, C, valores[L][C]);
                vezes += 1;
            }

        }

    }

    printf("\n");
}

int multiplicacao_abaixa_diagonalSecundaria(){

    printf("====== MULTIPLICACAO DOS VALORES PARES POR 5 E IMPARES POR 2 ABAIXO DA DIAGONAL SECUNDARIA ====== \n");
    for (int L = 0; L < 3; L++){
        for (int C = 0; C < 3; C++){

            if ((L + C == 4) || (L + C == 3)) {

                if (valores[L][C] % 2 == 0){

                    valores[L][C] *= 5;
                    
                } else{
                    
                    valores[L][C] *= 2;
                    
                }
                
            }
        }

    }

    printf("\n");
    
}

int main(){
    

    inserir();

    mostrar();

    soma_acima_abaixa_diagonalPrincipal();

    multiplicacao_abaixa_diagonalSecundaria();
   
    mostrar();

    return 0;
}