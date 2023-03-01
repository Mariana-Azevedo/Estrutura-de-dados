#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, linhas1, colunas1, linhas2, colunas2;
    int MatrizUm [100][100];
    int MatrizDois [100][100];

    printf("Digite a quantidade de linhas da sua primeira matriz:\n");
    scanf("%d", &linhas1);

    printf("Digite a quantidade de colunas da sua primeira matriz:\n");
    scanf("%d", &colunas1);

    printf("Digite a sua primeira matriz:\n");
    for (i = 0; i < linhas1; i++)
    {
        for(j=0; j < colunas1; j++)
        {
            scanf("%d", &MatrizUm[i][j]);
        }
    }
    
    printf("\n");

    for (i = 0; i < linhas1; i++)
    {
        for(j=0; j < colunas1; j++)
        {
           printf("%d ", MatrizUm[i][j]);
        }
        printf("\n");
    }

    /*printf("Digite a quantidade de linhas da sua segunda matriz:\n");
    scanf("%d", &linhas1);

    printf("Digite a quantidade de colunas da sua segunda matriz:\n");
    scanf("%d", &colunas2);

    printf("Digite a sua primeira matriz:\n");
    for (i = 0; i < linhas2; i++)
    {
        for(j=0; j < colunas2; j++)
        {
            scanf("%d", &MatrizDois[i][j]);
        }
    }*/

    
    

}