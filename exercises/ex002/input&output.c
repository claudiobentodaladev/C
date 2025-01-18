#include<stdio.h>

int main()
{
    int number = 0;
    char string[10] = "";
    float numberfloat = 0.0;
    
    printf("Input any Number:\n");
    scanf("%d", &number);
    
    printf("Input any string:\n");
    scanf("%s", &string);
    
    printf("Input any float number:\n");
    scanf("%f", &numberfloat);
    
    printf("Output number: %d \n",number);
    printf("Output string: %s \n", string);
    printf("Output float number %.2f", numberfloat);
    
    return 0;
}