#include<stdio.h>
#include<stdlib.h>

struct lista 
    {
        char* str; /* string armazenada */
        struct lista* prox; /* ponteiro para próximo elemento */
    };
typedef struct lista Lista;

Lista* no = NULL;

Lista* retira(Lista* l, char* n);
Lista* retira(Lista* l, char* n);

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
        
    }
}


Lista* retira(Lista* l, char* n)
{

}