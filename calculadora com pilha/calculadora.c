#include<stdio.h>
#include<stdlib.h>

struct elemento {
    float valor;
    struct elemento *prox;
};
typedef struct elemento Elemento;

struct pilha {
    Elemento* topo;
};
typedef struct pilha Pilha;

Pilha* pilha_cria() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int pilha_vazia(Pilha* p) {
    return (p->topo == NULL);
}

void pilha_push(Pilha* p, float valor) {
    Elemento* e = (Elemento*) malloc(sizeof(Elemento));
    e->valor = valor;
    e->prox = p->topo;
    p->topo = e;
}

float pilha_pop(Pilha* p) {
    Elemento* e;
    float valor;
    if (pilha_vazia(p)) {
        printf("Pilha vazia\n");
        exit(1);
    }
    e = p->topo;
    valor = e->valor;
    p->topo = e->prox;
    free(e);
    return valor;
}

void pilha_libera(Pilha* p) {
    Elemento* e = p->topo;
    while (e != NULL) {
        Elemento* prox = e->prox;
        free(e);
        e = prox;
    }
    free(p);
}

int main() {
    Pilha* p = pilha_cria();
    char c;
    float a, b, resultado;

    printf("Digite a expressao (em notacao posfixa): ");
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            pilha_push(p, c - '0');
        }
        else if (c == '+') {
            b = pilha_pop(p);
            a = pilha_pop(p);
            resultado = a + b;
            pilha_push(p, resultado);
        }
        else if (c == '-') {
            b = pilha_pop(p);
            a = pilha_pop(p);
            resultado = a - b;
            pilha_push(p, resultado);
        }
        else if (c == '*') {
            b = pilha_pop(p);
            a = pilha_pop(p);
            resultado = a * b;
            pilha_push(p, resultado);
        }
        else if (c == '/') {
            b = pilha_pop(p);
            a = pilha_pop(p);
            resultado = a / b;
            pilha_push(p, resultado);
        }
    }

    resultado = pilha_pop(p);
    printf("Resultado: %.2f\n", resultado);

    pilha_libera(p);

    return 0;
}

