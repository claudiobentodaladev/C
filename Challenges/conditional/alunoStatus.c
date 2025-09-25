#include <stdio.h>

int main()
{

    float media = 0.0;

    printf("Informe sua média:\n");
    scanf("%f", &media);

    if (media >= 10)
    {
        printf("Media %.2f você está Aprovado", media);
    }
    else
    {
        printf("Media %.2f você está Reprovado", media);
    }

    return 0;
}