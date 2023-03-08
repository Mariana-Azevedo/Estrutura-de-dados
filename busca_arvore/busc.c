#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv {
    float info;
    struct arv* esq;
    struct arv* dir;
};
typedef struct arv Arv;

int contador = 0;

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

void percorre_arvore(Arv* a, int valor)
{
    if (a == NULL)
    {
        return;
    }

    if (a->info < valor )
    {
        contador++;
    }

    percorre_arvore(a->esq, valor);
    percorre_arvore(a->dir, valor);
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
    int i, quantidade, valor;
    float numero;
    Arv* raiz = cria(); 
    printf("Informe a quantidade de numeros:\n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Informe o numero:\n");
        scanf("%f", &numero);
        raiz = insere(raiz, numero);
    }

    printf("Digite o valor para ser comparado:");
    scanf("%d", &valor);
    percorre_arvore(raiz, valor);
    printf("Numero de nos menores: %d\n", contador);
    imprime(raiz);
    return 0;
}