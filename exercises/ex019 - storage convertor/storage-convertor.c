#include<stdio.h>

int megabytes(int GB){
    return 1024 * GB;
}
int kilobytes(int MB){
    return 1024 * MB;
}
unsigned long int bytes(int b){
    return 1024 * b;
}

int main(){
    int gigabytes ;

    printf("==============================================\n");

    printf("input gigabytes value: ");
    scanf("%i", &gigabytes);

    printf("gigabytes: %i GB \n", gigabytes);
    printf("to megabytes: %i MB \n", megabytes(gigabytes));
    printf("to kilobytes: %i KB \n", kilobytes(megabytes(gigabytes)));
    printf("to bytes: %lu B \n", bytes(kilobytes(megabytes(gigabytes))));
    
    printf("==============================================\n");

    return 0;
}