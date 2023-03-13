#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int info;
    struct elemento *prox;
};typedef struct elemento Elemento;

struct pilha{
    Elemento* prim;
}; typedef struct pilha Pilha;

int pilha_pop(Pilha* p)
{
    Elemento*t;
    float v;
    if (pilha_vazia(p))
    {
        exit(1);
    }
    t = p->prim;
    v = t->info;
    p->prim = t->prox;
    free(t);
    return v;
}

void pilha_push(Pilha* p, int valor)
{
    Elemento* n = (Elemento*)malloc(sizeof(Elemento));
    p->prim = valor;
    n->prox = p->prim;
    p->prim = n;
}

int pilha_vazia(Pilha* p)
{
    if(p->prim == NULL)
    {
        return 1;
    }
    return 0;
}

int pilha_libera(Pilha* p)
{
    Elemento* t, *q = p->prim;
    while( q != NULL)
    {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

int pilha_libera(Pilha* p)
{
    Elemento* t, *q = p->prim;
    while( q != NULL)
    {
        t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

