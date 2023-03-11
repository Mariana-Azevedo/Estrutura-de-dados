#include<stdio.h>
#include<stdlib.h> /* necessário para usar a função exit() */

/* nó da lista para armazenar valores reais */
struct lista {
    float info;
    struct lista* prox;
};
typedef struct lista Lista;

/* estrutura da fila */
struct fila {
    Lista* ini;
    Lista* fim;
};
typedef struct fila Fila;

Fila* fila_cria(void)
{
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = NULL;
    f->fim = NULL;
    return f;
}

void fila_insere(Fila* f, float v)
{
    Lista* n = (Lista*) malloc(sizeof(Lista));
    n->info = v; /* armazena informação */
    n->prox = NULL; /* novo nó passa a ser o último */
    if(f->fim != NULL) {
        f->fim->prox = n;
    } else {
        f->ini = n;
        f->fim = n; /* fila aponta para novo elemento */
    }
}

float fila_retira(Fila* f)
{
    Lista* t;
    float v;
    if(fila_vazia(f)) {
        printf("Fila vazia.\n");
        exit(1);
    }
    t = f->ini;
    v = t->info;
    f->ini = t->prox;
    if(f->ini == NULL) {
        f->fim = NULL;
    }
    free(t);
    return v;
}

void fila_libera(Fila* f)
{
    Lista* q = f->ini;
    while(q != NULL) {
        Lista* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}

int fila_vazia(Fila* f)
{
    return (f->ini == NULL);
}

int main()
{
    Fila* f = fila_cria();
    int num, i;
    float valor;
    printf("Digite quantos numeros vc quer inserir na fila: \n");
    scanf("%d", &num);
    for(i = 0; i < num; i++) {
        printf("Insira um numero: \n");
        scanf("%f", &valor);
        fila_insere(f, valor);
    }
    printf("Esses sao os valores colocados na fila: \n");

    printf("Esse e o valor a ser retirado:");
    while(!fila_vazia(f)) {
        printf("%.2f\n", fila_retira(f));
    }
    fila_libera(f);
    return 0;
}





