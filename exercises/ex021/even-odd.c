#include<stdio.h>


int even_odd(int num){
    return num % 2;
}
int main(){

    int number;

    printf("Input a number: ");
    scanf("%i", &number);

    if(even_odd(number) == 0){
        printf("This is even number\n");
    } else{
        printf("This is odd number\n");
    }

    printf("=== program finished ===\n");

    return 0;
}