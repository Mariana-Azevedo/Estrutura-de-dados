#include <stdio.h>
int testa_PA(int size, int array[]);

    int main()
    {
        int size, array[100];
        int i;
        printf("Digite o tamanho da PA:\n");
        scanf("%d", &size);
        for(i=0;i<size; i++)
        {
            scanf("%d", &array[i]);
        }
        printf("Digite a sequencia de numeros:\n");
        printf("%d", testa_PA(size, &array));

        return 0;
    }

    int testa_PA(int size, int array[])
    {
        int i, razao; // 0 1 2 3
        razao = array[1] - array[0]; // 1 2 3 4 /* 2-1=1 */
        for(i=1; i< (size - 1) ; i++)
        {
            if ( razao != array[i] - array[i - 1] )
            {
                return -1;
            }
        }
        return razao;
    }




    /*
    #include <stdio.h>
int testa_PA(int size, int *array[]);

    int main()
    {
        int size, *array[100];
        int i;
        scanf("%d", &size);
        for(i=0;i<size; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("%d", testa_PA(size, &array));

        return 0;
    }

    int testa_PA(int size, int *array[])
    {
        int i, razao; // 0 1 2 3
        razao = *array[1] - *array[0]; // 1 2 3 4 
        for(i=1; i< (size - 1) ; i++)
        {
            if ( razao != *array[i] - *array[i - 1] )
            {
                return -1;
            }
        }
        return 2;
    }
    */