#include <stdio.h>

int main()
{
    int i, j, n;
    int matriz[10][10];

    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz:\n");

    // Leitura dos elementos da matriz
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Verificação se a matriz é identidade
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Verifica se o elemento na diagonal principal é igual a 1
            if (i == j && matriz[i][j] != 1)
            {
                printf("A matriz nao e identidade.\n");
                return 0;
            }
            // Verifica se os outros elementos são iguais a 0
            if (i != j && matriz[i][j] != 0)
            {
                printf("A matriz nao e identidade.\n");
                return 0;
            }
        }
    }

    printf("A matriz e identidade.\n");

    return 0;
}
