#include<stdio.h>
int main(){
    char name[20];

    printf("Your name: \n");
    scanf("%s", name);

    printf("Hello %s !", &name);

    return 0;
}