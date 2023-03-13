#include<stdio.h>
#include<stdlib.h>

struct lista 
    {
        char* str; /* string armazenada */
        struct lista* prox; /* ponteiro para próximo elemento */
    };
typedef struct lista Lista;

Lista* no = NULL;

void retira(char *str);
void CriarElemento( char *nome[81], float nota);

void CriarElemento( char *nome[81], float nota)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista*));
    if ( novo == NULL)
    {
        printf("Nao e possivel criar lista");
        return NULL;
    }

    if( no == NULL){
        novo = no;
    }
    else{
        Lista* aux = no;
        while( aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void retira( char *str)
{
    Lista *last = NULL;
    Lista *aux = no;

    if ( aux == NULL)
    {
        printf("O elemento não pode ser retirado");
        return NULL;
    }
    while( aux != NULL)
    {
        if(strcmp(aux->str, str) == 0)
        {
            if ( last == NULL)  // ana bia maria breno maria
            {
                free(no);
                no = aux->prox;
            }
            else
            {
                last->prox = aux->prox;
            }
        }
        else{
        last = aux;
        aux = aux->prox;
        }
    }


    int main()
    {
        char str[100], nome[100];
        int i, quantidade;
        printf("Se voce deseja adicionar um numero digite 1 se deseja retirar digite 2:\n");
        scanf("%d", num);
        if( num == 1)
        {
        printf("Informe a quantidade de nome da lista:\n");
        scanf("%d", quantidade);
        for( i=0; i<quantidade; i++)
        {
            printf("Informe um novo nome para lista:\n");
            scanf("%s", nome);
        }

        }
        if( num == 2)
        printf("Informe qual nome voce deseja retirar:\n");
        scanf("%s", str);

    }
}















