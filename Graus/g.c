#include <stdio.h>
int calcula_media ( int g1, int g2, int g3);

int main (){
    int g1, g2, g3, media;
    printf("Digite as suas notas: \n");
    scanf("%d", &g1);
    scanf("%d", &g2);
    scanf("%d", &g3);

    media = calcula_media ( g1, g2, g3);

    if ( ( g1>= 3 ) &&  ( g2>= 3 ) &&  ( g3>= 3 ) && (media >= 5))
    {
        printf("Aprovado \n");
    }
    else
    {
        printf("Necessita fazer a prova final \n");
    }
    
    return 0;
}

int calcula_media ( int g1, int g2, int g3)
{
    float resultado;
    resultado = ( g1 + g2 + g3 ) / 3;
    return resultado;
}