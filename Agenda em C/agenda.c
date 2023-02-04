#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Max 100

struct contato
{
    char nome[81];
    float telefone;
};
typedef struct contato Contato;

void removerContato(Contato pessoa, Contato agenda[100], int *tamanho);
int busca(Contato pessoa, Contato agenda[100], int tamanho);
void inserirContato(Contato pessoa, Contato agenda[100], int *tamanho);

void removerContato(Contato pessoa, Contato agenda[100], int *tamanho)
{
    int index = busca(pessoa, agenda, *tamanho);

    if (index == -1)
    {
        printf("O contato não existe\n", pessoa.nome);
        return;
    }

    // Ana Bia Breno Carol
    // Ana Bia Carol XXXXX

    for (int i = index; i < *tamanho; i++) 
    {
        agenda[i] = agenda[i + 1];
    }

    *tamanho = *tamanho - 1;

    printf("O contato de %s foi removido da lista.\n", pessoa.nome);
}

int busca(Contato pessoa, Contato agenda[100], int tamanho)
{
    int i = 0, meio = 0, maior = tamanho, menor = 0, comp = 0;
    while (menor < maior)
    {
        meio = (menor + maior) / 2;
        comp = strcmp(pessoa.nome, agenda[meio].nome);
        if (comp > 0) // segundo maior
        {
            menor = meio + 1;
        }

        if (comp < 0) // primeiro maior
        {
            maior = meio;
        }

        if (comp == 0)
        {
            return meio;
        }
    }
    return -1;
}

void inserirContato(Contato pessoa, Contato agenda[100], int *tamanho)
{
    if (*tamanho + 1 > Max)
    {
        printf("Agenda cheia");
        return; 
    }

    int menor = 0, maior = *tamanho;

    while (menor < maior)
    {

        int meio = (menor + maior) / 2;
        int aux = strcmp(agenda[meio].nome, pessoa.nome); 

        if (aux > 0)
        {
            maior = meio;
        }
        else
        {
            menor = meio + 1;
        }
    }

    *tamanho = *tamanho + 1;

    for (int i = *tamanho; i > menor; i--)
    {
        agenda[i] = agenda[i - 1];
    }


    agenda[menor] = pessoa;
    printf("Contato adicionado: %s\n", pessoa.nome);
}

int main()
{
    int tamanho = 0, resposta, i;
    Contato pessoa = {}, agenda[100];
    do
    {
        printf("Digite 1 se voce quiser adicionar um contato:\n");
        printf("Digite 2 se voce quiser buscar um contato:\n");
        printf("Digite 3 se voce quiser apagar um contato:\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            printf("Qual o nome que voce deseja inserir?\n");
            scanf("%s", pessoa.nome);
            printf("Qual o numero que voce deseja inserir?\n");
            scanf("%f", &pessoa.telefone);
            inserirContato(pessoa, agenda, &tamanho);
        }

        if (resposta == 2)
        {
            printf("Qual o nome que voce deseja buscar?\n");
            scanf("%s", pessoa.nome);
            int posicao = busca(pessoa, agenda, tamanho);
            if( posicao == -1)
            {
                printf("Contato nao encontrado");
            }
            else{
                printf("O contato %s esta na posicao: %d\n", pessoa.nome, posicao);
            }
            return;
        }

        if (resposta == 3)
        {
            printf("Qual o nome do contato que voce deseja apagar?\n");
            scanf("%s", pessoa.nome);
            removerContato(pessoa, agenda, &tamanho);
        }
        if (resposta == 4)
        {
            for (int i = 0; i < tamanho; i++)
            {
                printf("%s", pessoa.nome);
            }
        }
        

        for (i = 0; i < tamanho; i++)
        {
            printf("%d - %s %.0f\n", i + 1, agenda[i].nome, agenda[i].telefone);
        }
        
    } while (resposta > 0 && resposta <= 3);

    return 0;
}