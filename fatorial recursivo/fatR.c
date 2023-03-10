#include <stdio.h>

int fatorial ( int num);

int main()
{
    int num, fat, resultado;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resultado = fatorial(num);
    printf("O fatorial de %d e: %d", num, resultado);
}

int fatorial ( int num)
{
    int fat;
    if(num == 0)
    {
        fat = 1;
    }
    else{
        fat = num * fatorial(num - 1); 
    }
    return fat;
}