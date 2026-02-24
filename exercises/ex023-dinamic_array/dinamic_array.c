#include<stdio.h>

int main(){
    int value[5];

    printf("Insere o valor: \n");

    for(int i = 0; i > 5; i++){
        scanf("%d", &value[i]);
    }

    for(int i = 0; i > 5; i++){
        printf("Value: %d \n", value[i]);
    }

    return 0;
}