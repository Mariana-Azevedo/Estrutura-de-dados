#include <stdio.h>
#include <stdlib.h>

struct lista {
    float info;
    struct lista* prox; 
};typedef struct lista Lista;

struct fila{
    Lista* ini;
    Lista* fim;
}; typedef struct fila Fila;

Fila* fila_cria(void)
    {
        Fila* f = (Fila*)malloc(sizeof(Fila));
        f->fim = NULL;
        f->ini = NULL;
        return f;
    }

void fila_insere(Fila* f, float v)
    {
        Lista* novo = (Lista*)malloc(sizeof(Lista));
        novo->info = v;
        novo->prox = NULL;
        if(f->fim != NULL)
        {
            f->fim->prox = novo;
        }else
        {
            f->ini = novo;
        }
            f->fim = novo;
    }

float fila_retira(Fila* f)
    {
       Lista* t;
       float v;
       if(fila_vazia(f))
       {
        printf("Fila vazia");
        exit(1);
       }
       t = f->ini;
       v = t->info;
       f->ini = t->prox;
       if(f->ini == NULL)
       {
            f->fim = NULL;
       }
       free(t);
       return v;
    }

void fila_libera(Fila* f)
    {
        Lista* q = f->ini;
        while( q != NULL)
        
        {
            Lista* t = q->prox;
            free(q);
            q = t;

        }
        free(f);
    }

int fila_libera(Fila* f)
{
    Lista* q = f->ini;
    while( q != NULL)
    {
        Lista* t = q->prox;
        free(q);
        q=t;
    }
    free(f);
}

int fila_vazia(Fila* f)
    {
        return (f->ini == NULL);
    }

















float insere_fila(Fila* f, int v)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = NULL;
    if(f->fim != NULL)
    {
        f->fim->prox = novo;
    }
    else{
        f->ini = novo;
    }
    f->fim=novo;

}

int fila_libera(Fila* p)
{
    Lista* q = p->ini;
    while( q != NULL)
    {
        Lista* t = q->prox;
        free(q);
        q=t;
    }
    free(f);
}