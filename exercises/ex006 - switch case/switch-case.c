#include<stdio.h>

int main(){
    int day;
    
    printf("Input the number day:\n");
    scanf("%d", &day);

    while(day >= 7){
    printf("Repeat it again:\n");
    scanf("%d", &day);
    }
    
    // switch..case is used to fixed conditions
    switch(day){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Wrong value\n");
            break;
    }
    return 0;
}