#include <stdio.h>

int main()
{

    float altura = 0.00;

    printf("Informe sua altura:\n");
    scanf("%f", &altura);

    if (altura >= 1.70)
    {
        printf("altura %.2f você é alto", altura);
    }
    else
    {
        printf("altura %.2f você é baixo", altura);
    }

    return 0;
}