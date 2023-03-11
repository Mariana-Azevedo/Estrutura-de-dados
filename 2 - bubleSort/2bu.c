#include <stdio.h>
void bubble_sort( int *vetor, int tam);

int main()
{
    int vetor[100], tam, i;
    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tam);
    for(i=0;i<tam;i++)
    {
        scanf("%d", &vetor[i]);
    }
    bubble_sort(vetor, tam);
    for(i=0;i<tam;i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;

}

void bubble_sort( int *vetor, int tam)
{
    int i, j, aux=0;
    for(i=0; i<tam; i++)
    {
        for(j=0;j<tam - 1;j++)
        {
            if(vetor[j]>vetor[j+1])// 3 2 1 8
            {
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}





int busca_binaria( int *vetor, int tam, int valor)
{
    int max = tam - 1, min=0, i; // 1 3 4 5 6 7
    while(min<max)
    {
        int meio = (min + max)/2;
        if(vetor[meio] == valor)
        {
            return meio;
        }
        else if( vetor[meio]>valor) 
        {
            max = meio - 1;
        }
        else
        {
            min = meio + 1;
        }
    }
    return - 1;
}

void insertion_sort( int *vetor, int tam)
{
    int pivo, i , j; // 5 4 3 1 6
    for(i=1;i<tam;i++)
    {
        pivo = vetor[i];
        j = i - 1;
        while(j>=0 && pivo < vetor[j])
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j+1]= pivo;
    }

}

void bubble_sort( int* vetor, int tam)
{
    int i, j, aux=0;
    for(i=0;i<tam;i++)// 5 3 1 3
    {

        for(j=0;j<tam -1;j++)
        {
            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j + 1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}



















