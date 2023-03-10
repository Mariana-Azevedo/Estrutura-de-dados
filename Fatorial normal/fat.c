#include <stdio.h>

int main()
{
    int i;
    int fat = i = 1;
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while(i<=num)
    {
        fat = fat * i;
        i++;
    }
    
    printf("O fatorial de %d e: %d", num, fat);
    return 0;
}