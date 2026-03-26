#include<stdio.h>

float media_final = 0.0;
float media_disciplina[12];
float MAC[12];
float PP[12];
float PT[12];

char Disciplinas(int Index){
    if(Index == 0){
        printf("Lingua Portuguesa");
    } else if (Index == 1){
       printf("FAI");
    } else if (Index == 2){
       printf("Desenho Tecnico");
    } else if (Index == 3){
       printf("Educacao fisica");
    } else if (Index == 4){
       printf("Ingles");
    } else if (Index == 5){
       printf("Quimica");
    } else if (Index == 6){
       printf("Empreendedorismo");
    } else if (Index == 7){
       printf("SEAC");
    } else if (Index == 8){
       printf("Electotecnia");
    } else if (Index == 9){
       printf("Matematica");
    } else if (Index == 10){
        printf("Fisica");
    } else if (Index == 11){
        printf("TLP");
    } else{
       printf("nao encontrado");
    }
    
}

void inserir(){
    printf("====== INSERE AS NOTAS ====== \n");

    for (int i = 0; i < 12; i++){
        printf("\n");

        printf("-> ");Disciplinas(i);printf("\n");

        printf("MAC: \t");
        scanf("%f", &MAC[i]);

        printf("PP: \t");
        scanf("%f", &PP[i]);

        printf("PT: \t");
        scanf("%f", &PT[i]);

        printf("\n");
    }
    
}

void mostrar(){

    printf("====== AS NOTAS ====== \n");

    for (int i = 0; i < 12; i++){
        printf("\n");

        printf("===");Disciplinas(i);printf("\n");

        printf("MAC: %.1f \t", MAC[i]);

        printf("PP: %.1f \t", PP[i]);

        printf("PT: %.1f \t", PT[i]);

        media_disciplina[i] = (MAC[i] + PP[i] + PT[i]) / 3;

        printf("Media: %.1f \n", media_disciplina[i]);

        printf("\n");
    }
    
}

void media(){

    printf("\n ====== MEDIA FINAL ======\n");

    for (int i = 0; i < 12; i++){
        media_final += media_disciplina[i];
    }

    media_final /= 12;

    printf("Media: %.1f \n", media_final);
}

int main(){

    inserir();

    mostrar();

    media();

    return 0;
}
