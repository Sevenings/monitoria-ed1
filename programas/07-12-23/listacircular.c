#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no* prox;
    struct no* ante;
} No;

typedef struct lista {
    No* comeco;
} Lista;

void inicializarLista(Lista* lista) {
    lista->comeco = NULL;
}

void add(Lista* lista, int valor) {
    No* no = (No*) malloc(sizeof(No));
    if (lista->comeco == NULL) {
        lista->comeco = no;
        no->ante = no;
        no->prox = no;
        no->valor = valor;
    } else {
        no->valor = valor;
        no->prox = lista->comeco;
        no->ante = lista->comeco->ante;
        No* p = lista->comeco->ante;
        lista->comeco->ante = no;
        p->prox = no;
        lista->comeco = no;
    }
}


int main(int argc, char *argv[]) {
    Lista* l = (Lista*) malloc(sizeof(Lista));
    inicializarLista(l);
    add(l, 2);
    add(l, 3);
    add(l, 4);
    printf("%d", l->comeco->ante);
    
    return 0;
}
