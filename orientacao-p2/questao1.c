#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct No {
    int info;
    struct No *prox;
} No;


/*
void removerPrimeiro(No *p) {
    No *q;
    q = p->prox;
    p->info = q->info;
    p->prox = q->prox;
    free(q);
}*/

// Função A
No* newLista() {
    return NULL;
}


// Função B
void add(No** plista, int valor) {
    No* n = (No*) malloc(sizeof(No));
    n->info = valor;
    n->prox = (*plista);
    (*plista) = n;
}

// Função Ca
void printComAux(No* lista) {
    No* aux = lista;
    while (aux != NULL) {
        printf("(%d)->", aux->info);
        aux = aux->prox;
    }
    printf("NULL\n");
}

// Função Cb
void printSemAux(No* lista) {
    while (lista != NULL) {
        printf("(%d)->", lista->info);
        lista = lista->prox;
    }
    printf("NULL\n");
}


// E se eu passar o endereço para um nó
// que está no meio da lista
// Função D
void desalocarLista(No **plista) {
    No *aux = (*plista);
    No *l = (*plista);

    while (l != NULL) {
        l = l->prox;
        free(aux);
        aux = l;
    }
    (*plista) = NULL;
}

// Função E
void inserirOrdenado(No **plista, int valor) {
    No *n = (No*) malloc(sizeof(No));
    n->info = valor;
    
    No *l = (*plista);
    if (l == NULL) {    // Verificação
        n->prox = l;
        (*plista) = n;
        return;
    }
    No *p = l->prox;

    while (p != NULL && p->info < valor) {
        l = l->prox;
        p = p->prox;
    }

    n->prox = p;
    l->prox = n;
}

// Função F
void linkedBubble(No* lista) {
    No *a, *b;

    int trocou = 1;
    while (trocou) {
        a = lista;
        b = a->prox;
        trocou = 0;
        while (b != NULL) {
            if (a->info > b->info) {
                int aux = a->info;
                a->info = b->info;
                b->info = aux;
                trocou = 1;
            }
            a = b;
            b = b->prox;
        }
    }
}

// Função G
void gerarLista(No **plista, int n, int limite) {
    for (int i=0; i<n; i++) {
        add(plista, rand()%limite);
    }
}


// Função H
No* busca(No *lista, int n) {
    while (lista != NULL && lista->info != n) {
        lista = lista->prox;
    }
    return lista;
}

// Função Ia
void funcaoIa(No** plista) {
    No *a, *b, *c;
    a = (*plista);
    b = a->prox;
    c = NULL;
    while (a != NULL) {
        a->prox = c;
        c = a;
        a = b;
        if (b != NULL)
            b = b->prox;
    }
    (*plista) = c;
}

// Função Ib
void funcaoIb(No** plista, No* a, No* b, No* c) {
    a->prox = c;
    c = a;
    a = b;
    if (b != NULL)
        b = b->prox;

    if (a != NULL) {
        funcaoIb(plista, a, b, c);
    } else {
        (*plista) = c;
    }
}
