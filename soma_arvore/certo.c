#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv {
    float info;
    struct arv* esq;
    struct arv* dir;
};
typedef struct arv Arv;

Arv* cria(void)
{
    return NULL;
}
void imprime(Arv* a)
{
    if (a != NULL)
    {
        imprime(a->dir);
        printf("%.2f\n", a->info);
        imprime(a->esq);
    }
}

int soma_arvore(Arv* a)
{
    if (a == NULL)
    {
        return 0;
    }
    else if( a->esq == NULL && a->dir == NULL)
    {
        return a->info;
    }
    else{
        float soma_esq = soma_arvore(a->esq);
        float soma_dir = soma_arvore(a->dir);
        return soma_esq + soma_dir;
    }
}

Arv* insere(Arv* a, float v)
{
    if (a == NULL)
    {
        a = (Arv*)malloc(sizeof(Arv));
        a->info = v;
        a->esq = a->dir = NULL;
    }
    else if (v < a->info)
    {
        a->esq = insere(a->esq, v);
    }
    else if (v > a->info)
    {
        a->dir = insere(a->dir, v);
    }
    return a;
}

int main()
{
    int i, quantidade;
    float numero;
    Arv* a = (Arv*)malloc(sizeof(Arv));
    Arv* raiz = cria(); 
    printf("Informe a quantidade de numeros:\n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numero);
        raiz = insere(raiz, numero);
    }
    printf("Soma: %d\n", soma_arvore(a));
    imprime(raiz);
    return 0;
}

