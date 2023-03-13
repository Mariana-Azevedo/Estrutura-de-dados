#include<stdio.h>

void bubble_sort( int *vetor, int tam)
{
//dois for
    int i, j, aux;
    for(i=0;i<tam;i++)
    {
        for(j=0;j<tam - 1;j++) // 3 1 4 5 2
        {
            if (vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

}

void insertion_sort( int *vetor, int tam)
{
// 1 for 1 while
    int i, j, pivo;
    for(i=1;i<tam;i++)
    {
        pivo = vetor[i];
        j = i - 1;
        while(j<=0 && vetor[j] > pivo) // 4 3 1 5
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
    }
}

int busca_binaria (int *vetor, int valor, int tam)
{
//1 while
    int max = tam - 1, min = 0; 
    int meio;
    while(min<max)
    {
       meio = (min + max)  / 2;
       if( vetor[meio] == valor)
       {
        return meio;
       }
       else if(vetor[meio] > valor) // 1 2 3 4 5 6
       {
            max = meio - 1;
       }
       else
       {
            min = meio + 1;
       }

    }
    return -1;
}