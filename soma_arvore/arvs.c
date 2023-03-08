#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv { 
 float info; 
 struct arv* esq; 
 struct arv* dir; 
}; 
typedef struct arv Arv;

float soma = 0;

void imprime (Arv* a);
Arv* abb_cria (void);
void percorre_arvore( Arv* a); 
Arv* insere (Arv* a, float v);

Arv* cria (void)
{
     return NULL;
}
void imprime (Arv* a)
{
     if (a != NULL) 
     {
         imprime(a->dir);
         printf("%f\n",a->info);
         imprime(a->esq);
     }
}

void percorre_arvore( Arv* a) 
{
    if(a == NULL) 
    {
        return;
    }
    
    if(a->dir == NULL && a->esq == NULL)
    {
        soma = soma + a->info;
    }
    percorre_arvore(a->esq);
    percorre_arvore(a->dir);
}

Arv* insere (Arv* a, float v)
{
    if (a==NULL) 
    {
        a = (Arv*)malloc(sizeof(Arv));
         a->info = v;
         a->esq = a->dir = NULL;
    }
    else if (v < a->info)
    {
         a->esq = insere(a->esq,v);
    }
    else if (v > a->info) 
    {
         a->dir = insere(a->dir,v);
    }
    return a;
}

int main()
{
    int i, quantidade;
    float numero;
    Arv* raiz = cria(); 
    printf("Informe a quantidade de numeros:\n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numero);
        insere(raiz, numero);
    }
    percorre_arvore(raiz);
    printf("%f", soma);
    imprime(raiz);
}