#include<stdio.h>

int sam(int n1,int n2){
    return n1 + n2;
}
int main(){

    int numbers1 = 0,numbers2 = 0;

    printf("input first value: \n");
    scanf("%i", numbers1);

    printf("input second value: \n");
    scanf("%i", numbers2);

    printf("Sam is: %i \n", sam(numbers1,numbers2));

    return 0;
}