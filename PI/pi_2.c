#include <stdio.h>

int main()
{

    int i, num;
    float somatorio=1, PI;
    printf("Digite a quantidade de loops:\n");
    scanf("%f", &num);
    printf("\n");
    for(i=1;i<num - 1;i++)
    {
        if ( (i % 2) == 0)
        {
            somatorio = somatorio + ( 1  / (2*i) + 1 );
        }
        else{
            somatorio = somatorio - ( 1  / (2*i) + 1 );
        }

    }
        printf("valor de i: %.1f\n", i);
        printf("valor do somatorio: %.3f\n", somatorio);

    PI=4*somatorio;
    printf("ACHOU = %f", PI);

    return 0;
}