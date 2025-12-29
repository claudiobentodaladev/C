#include<stdio.h>

int main()
{
    //var Started with empty value
    int number = 0;
    char string[10] = "";
    float numberfloat = 0.0;
    
    printf("Input any Number:\n");
    scanf("%d", &number);// %d is used to intire number
    
    printf("Input any string:\n");
    scanf("%s", &string);// %s is used to string
    
    printf("Input any float number:\n");
    scanf("%f", &numberfloat);// %f is used to float number
    
    printf("Output number: %d \n", number);
    printf("Output string: %s \n", string);
    printf("Output float number %.2f\n", numberfloat);
    
    return 0;
}