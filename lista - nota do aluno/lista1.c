#include<stdio.h>
#include<stdlib.h>

struct lista 
    {
        char nome[81];
        float nota;
        struct lista *prox;
    };
typedef struct lista Lista;

int aprovados (Lista* l); 
void CriarElemento( char *nome[81], float nota);

Lista* no = NULL;


void CriarElemento( char *nome[81], float nota)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));

    if ( novo == NULL)
    {
        printf("A lista nao pode ser criada");
        return NULL;
    }
    *novo->nome = nome;
     novo->nota = nota;
     novo->prox = NULL;

     if ( no == NULL){
        no = novo;
     }
     else{
        Lista* aux = no;
        while( aux != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
     }
    return novo;
}


int main()
{
    int i, quantidade;
    int aux;
    Lista* l;
    Lista aluno = {};
    printf("Informe a quantidade de alunos:\n");
    scanf("%d", &quantidade);
    printf("Informe a nota do aluno\n");
    for ( i = 0; i < quantidade; i++)
    {
        scanf("%f", &aluno.nota);
    }
    aux = aprovados(no);

    printf("A quantidade aprovados e %d", aux);
}

int aprovados (Lista* no) /* O parâmetro l é um ponteiro para o primeiro elemento da lista */
{
    int contador=0;
    Lista* i = no->prox; /* "no" é um ponteiro que está sendo utilizado para percorrer uma lista encadeada */
    while(i!=NULL){
        printf("AAAAA");
        if( i->nota >= 5 )
        {
            printf("AAAAA");
            contador++;
        }
        i = i->prox;
    }
   /* for( i= l; i!= NULL; i = i->prox)
    {
        if( i->nota >= 5 )
        {
            printf("AAAAA");
            contador++;
        }
    printf("%d\n", contador);
    }*/
    return contador;
}
