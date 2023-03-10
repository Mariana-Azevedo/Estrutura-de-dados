/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv { 
int val; 
struct arv* esq; 
struct arv* dir; 
}; 
typedef struct arv Arv;

float maior=0;

Arv* cria(void)
{
    return NULL;
}

Arv* percorre_arv(Arv* a, int valor)
{
    if( a == NULL)
    {
        return 0;
    }
    if (a->val > maior && a->val < valor)
    {
        maior= a->val;
    }
    percorre_arv(a->esq, valor);
    percorre_arv(a->dir, valor);
}

Arv* insere (Arv*a, int valor)
{
    if(a==NULL)
    {
        a = (Arv*)malloc(sizeof(Arv));
        a->val = valor;
        a->dir = NULL;
        a->esq = NULL;
    }
    else if ( valor < a->val)
    {
        a->esq = insere(a->esq, valor);
    }
    else if ( valor > a->val)
    {
        a->dir= insere(a->dir, valor);
    }
    return a;
}

int main()
{
    int i, quantidade, num, valor;
    Arv* raiz = cria(); 

    printf("Diga quantos numero vc deseja inserir: \n");
    scanf("%d", &quantidade);
    for(i=0; i< quantidade; i++)
    {
        printf("Informe o numero:\n");
        scanf("%d", &num);
        insere(raiz, num);
    }
    printf("Diga qual o numero voce deseja comparar: ");
    scanf("%d", &valor);
    percorre_arv(raiz, valor);
    printf("O maior numero antes de %d e %d", valor, maior);
    return 0;

}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arv { 
    int val; 
    struct arv* esq; 
    struct arv* dir; 
}; 
typedef struct arv Arv;

float maior=0;

Arv* cria(void) {
    return NULL;
}

void percorre_arv(Arv* a, int valor) {
    if (a == NULL) {
        return;
    }
    if (a->val > maior && a->val < valor) {
        maior = a->val;
    }
    percorre_arv(a->esq, valor);
    percorre_arv(a->dir, valor);
}

Arv* insere (Arv* a, int valor) {
    if (a == NULL) {
        a = (Arv*)malloc(sizeof(Arv));
        a->val = valor;
        a->dir = NULL;
        a->esq = NULL;
    }
    else if (valor < a->val) {
        a->esq = insere(a->esq, valor);
    }
    else if (valor > a->val) {
        a->dir = insere(a->dir, valor);
    }
    return a;
}

int main() {
    int i, quantidade, num, valor;
    Arv* raiz = cria(); 

    printf("Digite quantos numeros voce deseja inserir: \n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++) {
        printf("Informe o numero:\n");
        scanf("%d", &num);
        raiz = insere(raiz, num);
    }
    printf("Digite qual o numero que voce deseja comparar: ");
    scanf("%d", &valor);
    percorre_arv(raiz, valor);
    printf("O maior número antes de %d é %d", valor, (int)maior);
    return 0;
}