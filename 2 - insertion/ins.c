#include <stdio.h>
void insertion_sort(int *vetor, int tamanho);

int main(){
    int vetor[100], i, tamanho;
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    for(i=0; i<tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
    insertion_sort( vetor, tamanho);
    for(i=0; i<tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    return 0;
}

void insertion_sort(int *vetor, int tamanho){
    int i, j, pivo;
    for(i=1;i<tamanho;i++)
    {
        pivo = vetor[i];
        j = i - 1;
        while( j >= 0 && pivo < vetor[j]) // 5 4 3
        {
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = pivo;
    }
}