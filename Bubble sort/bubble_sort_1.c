#include <stdio.h>
void bubble( int tam, int *vetor);

int main(){
    int tam, i;
    int *vetor = malloc ( sizeof (int) * 100 );
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tam);
    printf("Digite o vetor: \n");
    for ( i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
    bubble( tam, vetor );
    for (i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void bubble( int tam, int *vetor)
{
    int i, j, aux=0;
    for(i=0; i<tam; i++) // 10 5 6 2 1
    {
        for(j=0; j<tam - 1; j++)
        {
            if ( vetor[j] > vetor[j + 1])
            {
                aux =  vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}