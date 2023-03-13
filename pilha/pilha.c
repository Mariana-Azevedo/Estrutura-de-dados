#include<stdio.h>
#include<stdlib.h>

struct elemento { 
    int info;
    struct elemento *prox;
}; 
typedef struct elemento Elemento; 

/* estrutura da pilha */ 
struct pilha { 
    Elemento* prim; /* aponta para o topo da pilha */ 
}; 
typedef struct pilha Pilha;


int pilha_pop(Pilha* p) // retira o elemento do início da lista 
{ 
    Elemento* t; 
    int v; 
    if (pilha_vazia(p)) exit(1); /* aborta programa */ 
    t = p->prim; 
    v = t->info; 
    p->prim = t->prox; 
    free(t); 
    return v; 
} 

Pilha* pilha_cria(void) // cria aloca a estrutura da pilha 
{ 
    Pilha* p = (Pilha*) malloc(sizeof(Pilha)); 
    p->prim = NULL; 
    return p; 
}

void pilha_push(Pilha* p, int valor) // insere novo elemento n no início da lista
{ 
    Elemento* n = (Elemento*) malloc(sizeof(Elemento)); 
    n->info = valor; 
    n->prox = p->prim; 
    p->prim = n; 
} 

void pilha_libera(Pilha* p) 
{ 
    Elemento *t, *q = p->prim; 
    while (q != NULL) { 
        t = q->prox; 
        free(q); 
        q = t; 
    } 
    free(p); 
} 

int pilha_vazia(Pilha* p) 
{ 
    if (p->prim == NULL) 
        return 1; 
    return 0; 
}

int main()
{
    Pilha* p = pilha_cria();
    int num, i, valor, retira;
    printf("Digite quantos numeros vc quer inserir na pilha: \n");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Insira um numero: \n");
        scanf("%d", &valor);
        pilha_push(p, valor);
    }

    printf("Digite um numero que voce deseja retirar: ");
    scanf("%d", &retira);

    int topo;
    while (!pilha_vazia(p)) {
        topo = pilha_pop(p);
        if (topo != retira) {
            printf("%d\n", topo);
        }
    }

    pilha_libera(p);

    return 0;
}
