#include <stdio.h> 
float pi(int n); 

float pi(int n) 
    { 
        float soma; 
        int i; 
        soma = 1; 
        for (i = 1; i < n; i++) 
        { 
            if (i % 2) 
            { 
                soma = soma - (1.0 / ((2 * i) + 1)); 
            } 
            else 
            { 
                soma = soma + (1.0 / ((2 * i) + 1)); 
            } 
        } 
    return 4*soma; 
    } 

    int main(void) 
    { 
        int n; 
        float p; 
        printf("Digite o numero de termos: "); 
        scanf("%d", &n); 
        if (n < 1) 
        { 
            printf("Erro! O numero de termos deve ser maior que zero.\n"); 
        } 

        else 
        { 
            p = pi(n); 
            printf("PI = %f\n", p); 
        } 
        return 0; 
    }