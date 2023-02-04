#include <stdio.h>
int insetion_sort ( int *vetor, int tam);

int main()
{
    int tam, i, j;
    int *vetor = malloc ( sizeof (int)* 100);

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &tam);
    for( i=0; i<tam; i++) // pegando os valores do vetor
    {
        scanf("%d", &vetor[i]);
    }
    

    insetion_sort (vetor, tam); // valor que ta dentro

    for( i=0; i<tam; i++) // pegando os valores do vetor
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

int insetion_sort ( int *vetor, int tam) // vetor
{
    int i, j, pivo; // 4 3 1 --- 3 4 1 10 5 6
    for(i=1; i<tam; i++)
    {
        pivo = vetor[i];
        j = i - 1;
        while( j >= 0 && pivo < vetor[j])
        {
            vetor[j + 1] = vetor [j];
            j--;
        }
        vetor[j+1] = pivo;
    }

}

