#include<stdio.h>

struct lista 
    {
        char nome[81];
        float nota;
        struct lista *prox;
    };
typedef struct lista Lista;

int aprovados (Lista* l); /* O parâmetro l é um ponteiro para o primeiro elemento da lista */

int main()
{
    int i, quantidade;
    Lista aluno = {};
    printf("Informe a quantidade de alunos:\n");
    scanf("%d", &quantidade);
    printf("Informe a nota do aluno\n");
    for ( i = 0; i < quantidade; i++)
    {
        scanf("%f", &aluno.nota);
    }
   
    
    
}

int aprovados (Lista* l)
{
    int i;
    for( i=0; l!= null;)
}
