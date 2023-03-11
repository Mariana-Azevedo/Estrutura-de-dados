#include <stdio.h>
#include<string.h>

struct funcionario{
    char nome[81];
    float valor_hora;
    int horas_mes;
}; typedef struct funcionario Funcionario;

Funcionario* busca (int n, Funcionario** v, char* nome)
{
    int max = n - 1, min=0;
    while( min < max)
    {
        int meio = (min + max) / 2;
        if( strcmp(v[meio], nome) == 0 )
        {
            return meio;
        }
        else if ( strcmp(v[meio]->nome, nome) > 0)
        {
            max = meio - 1;
        }
        else {
            min = meio + 1;
        }
    }
    return NULL;
}

int main()
{

}