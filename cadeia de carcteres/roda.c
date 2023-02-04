#include <stdio.h>
void roda_string(char* string);

int main()
{
    char string[100];
    printf("Digite uma string:\n");
    scanf("%s", string);
    roda_string(string);
    printf("%s", string);
    return 0;

}

void roda_string(char* string)
{
    int i;
    char armazena[5]/*string(vetor de char)*/, aux/*uma char, na qual armazena só uma letra*/;
    int tamanho = strlen(string);
    
    aux = string[tamanho-1]; //tamanho - 1 porque começa do 0 e não no 1

    for(i=tamanho-1;i>0;i--) 
    {
        string[i]= string[i-1];
    }
    string[0]= aux;
    
    return 0;
}