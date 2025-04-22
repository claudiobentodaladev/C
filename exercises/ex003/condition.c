#include <stdio.h>

int main()
{
    int yearsold ;
    
    printf("How old are you:\n");
    scanf("%d", &yearsold);
    // if/else is used to do condition
    if(yearsold>=18){
        // whether true run this code block
        printf("You are adult");
    }
    else{
        // whether not true run this code block
        printf("You are not adult");
    }
    return 0;
}