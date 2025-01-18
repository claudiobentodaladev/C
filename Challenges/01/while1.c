#include<stdio.h>

int main()
{
    int yearsold ;
    
    printf("How old are you:\n");
    scanf("%d", &yearsold);
    /*while os uses to repeat while 
    something happen*/
    while(yearsold<=18)
    {
        printf("You are not adult repeat!\n");
        printf("How old are you again:\n");
        scanf("%d", & yearsold);
    }
    printf("You are acepted");
    return 0;
}