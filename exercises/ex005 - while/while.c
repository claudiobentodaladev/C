#include<stdio.h>

int main(){
    int yearsold ;
    
    printf("How old are you:\n");
    scanf("%d", &yearsold);

    while(yearsold<=18){
        // while is used to repeat a block code when the condition is true
        printf("You are not adult repeat!\n");
        printf("How old are you again:\n");
        scanf("%d", &yearsold);
    }
    printf("You are acepted\n");

    return 0;
}