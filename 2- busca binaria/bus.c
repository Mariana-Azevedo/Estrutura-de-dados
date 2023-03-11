#include <stdio.h>

int busca_binaria( int *vetor, int quantidade, int num);

int main()
{
    int vetor[100];
    int num, i, quantidade, resultado;
    printf("Digite a quantidade numeros no vetor: \n");
    scanf("%d", &quantidade);
    printf("Digite o vetor: \n");
    for(i=0; i<quantidade; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero a ser buscado: ");
    scanf("%d", &num);
    
    resultado = busca_binaria( vetor, quantidade, num);
    if ( resultado == -1)
    {
        printf("Numero nao foi encontrado");
    }
    else{
        printf("O numero %d foi encontrado na posicao %d vetor", num, resultado);
    }
}

int busca_binaria( int *vetor, int quantidade, int num)
{
    int min = 0, max = quantidade - 1; // 0 + 5 = 5/2 meio = 2 --- meio = 2/2 = 1
    while(min<max) // 0 < 3
    {
        int meio = ( max + min) / 2; // 1 2 3 4 5 6   
        if( vetor[meio] == num)//       0 1 2 3 4 5
        {
            return meio;
        }
        else if( num < vetor[meio])// 2 < 3 --- 2 < 1
        {
            max = meio - 1; // max = 2
        }
        else {
            min = meio + 1; //min = 1 + 1 = 2
        }
    }
    return -1;
}

