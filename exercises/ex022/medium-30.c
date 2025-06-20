#include<stdio.h>

int main(){

    float medium[30];

    for(int i = 0; i < 30; i++){
        i++;printf("Input studient's medium %i :", i);i--;
        scanf("%f", &medium[i]);
    }

    printf("==== STATUS ====\n");

    for(int i = 0; i< 30; i++){
        i++;
        if(medium[i] >= 10){
            printf("Studient %i is ok \n", i);
        } else{
            printf("Studient %i is not ok \n", i);
        }
        i--;
    }
}