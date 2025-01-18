#include<stdio.h>

int main()
{
    int yearsold ;
    
    printf("How old are you:\n");
    scanf("%d", &yearsold);
    /*if/else is uses for do condition*/
    if(yearsold>=18)
    {
        printf("You are adult");
    }
    else
    {
        printf("You are not adult");
    }
    return 0;
}