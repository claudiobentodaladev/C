#include<stdio.h>

int main()
{
    //var Started with empty value
    int number = 0;
    float numberfloat = 0.0;
    
    printf("Input any Number:\n");
    scanf("%d", &number);// %d is used to intire number
    
    printf("Input any float number:\n");
    scanf("%f", &numberfloat);// %f is used to float number
    
    printf("Output number: %d \n", number);
    printf("Output float number %.2f\n", numberfloat);
    
    return 0;
}