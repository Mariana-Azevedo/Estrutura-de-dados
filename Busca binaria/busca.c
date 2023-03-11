#include <stdio.h>
void bubble( int tam, int *vetor);

int main(){
    int tam, i;
    int *vetor = malloc ( sizeof (int) * 100 ); // + vetor[100]
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
    for (j=0; j< tam ; j++)
    {
        for(i=0; i<tam - 1; i++) // nesse for vc já coloca a ultima posição no lugar certo então nas outras vezes que vc rodar o for não precisa ir até a última posição
        { // nesse for eu só empurro o primeiro elemento do vetor para última posição e eu preciso de outro for para fazer isso a quantidade de vezes necessárias para ordenar um vetor
            if ( vetor[i] > vetor[i+1]) // 5 4 3 2 1 --- 4 5 3 2 1 ___ 2 1
            {
                aux = vetor[i]; // aux = 5 ___ aux = 2
                vetor[i] = vetor[i+1]; // vetor[0] = 4 ___ vetor[0]= 1
                vetor[i+1] = aux;  //vetor[1]= 5 ___ vetor[1] = 2
            }
        }
    }

}

int busca_binario ( int tam, int *vetor)
{
    int numero;//  numero que to buscando
    int i, meio; // 1 2 3 4 5 6
    int min=0, max = tam - 1;
    while (min < max) // 0 < 6
    {
        meio = (min + max)/ 2;
        if (vetor[meio] == numero)
        {
            return meio;
        }
        else if ( vetor[meio] > numero)
        {
            max = meio;
        }
        else {
            min = meio + 1;
        }
    } 
    
    return - 1;

}




int busca_bin(int *vetor, int tamanho, int numero) {
    int min = 0, max = tamanho - 1;

    while (min < max) {
        int meio = (max + min) / 2;

        if (vetor[meio] == numero) {
            return meio;
        } else if (vetor[meio] > numero) { // 1 2 3 4 5 6
            max = meio;
        } else {
            min = meio + 1;
        }
    }

    return -1;
}