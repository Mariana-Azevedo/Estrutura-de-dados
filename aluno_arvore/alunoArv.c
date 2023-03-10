#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv { 
int mat; 
char nome[81]; 
char email[41]; 
struct arv* esq; 
struct arv* dir; 
}; 
typedef struct arv Arv;

Arv* cria(void)
{
    return NULL;
}

void imprime( Arv* a)
{
    if( a != NULL)
    {
        imprime(a->dir);
        printf("%s\n", a->nome);
        imprime(a->esq);
    }
}

Arv* insere (Arv* a, int mat, char* nome, char* email)
{
    if ( a == NULL)
    {
    a = (Arv*) malloc(sizeof(Arv));
    a->mat = mat;
    strcpy( a->nome, nome);
    strcpy( a->email, email);
    a->esq = NULL;
    a->dir = NULL;
    }
    else if( strcmp(nome, a->nome) < 0)
    {
        a->esq = insere (a->esq, mat, nome, email);
    }
    else if ( strcmp(nome, a->nome) > 0)
    {
        a->dir = insere (a->dir, mat, nome, email);
    }
    return a;
}

int main()
{
    int i, quantidade, mat;
    char nome[50], email[50];
    Arv* raiz = cria( ); 
    printf("Informe a quantidade de alunos:\n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Informe o nome:\n");
        scanf("%s", nome);
        printf("Informe a matricula:\n");
        scanf("%d", &mat);
        printf("Informe o email:\n");
        scanf("%s", email);
        Arv* novo = insere(raiz, mat, nome, email);
        if (i==0)
        {
            raiz = novo;
        }
    }

    imprime(raiz);
}