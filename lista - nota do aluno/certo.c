#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista 
{
    char nome[81];
    float nota;
    struct lista *prox;
};
typedef struct lista Lista;

Lista* no = NULL;

void CriarElemento(char *nome, float nota)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));

    if (novo == NULL)
    {
        printf("A lista nao pode ser criada");
        return;
    }
    strncpy(novo->nome, nome, 80);
    novo->nota = nota;
    novo->prox = NULL;

    if (no == NULL)
    {
        no = novo;
    }
    else
    {
        Lista* aux = no;
        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

int aprovados(Lista* no)
{
    int contador = 0;
    Lista* i = no;

    while (i != NULL)
    {
        if (i->nota >= 5)
        {
            contador++;
        }
        i = i->prox;
    }
    return contador;
}

int main()
{
    int i, quantidade, aux;
    float nota;
    char nome[81];
    printf("Informe a quantidade de alunos:\n");
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        printf("Informe o nome do aluno:\n");
        scanf("%s", nome);
        printf("Informe a nota do aluno:\n");
        scanf("%f", &nota);
        CriarElemento(nome, nota);
    }
    aux = aprovados(no);
    printf("A quantidade aprovados e %d\n", aux);
    return 0;
}
