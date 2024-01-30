#include <stdio.h>
#include <stdlib.h>

typedef struct Vertice {
    int valor;
    int grau;
    struct Vertice **arestas;
} Vertice;


void connect(Vertice* v, Vertice* u) {
    int i=0;
    while (i < v->grau && v->arestas[i] != NULL ) {
        i++;
    }
    if (i == v->grau) {
        return;
    }
    v->arestas[i] = u;
}

Vertice* gerarVertice(int valor, int grau) {
    Vertice* v = (Vertice*) malloc(sizeof(Vertice));
    v->valor = valor;
    v->arestas = (Vertice**) malloc(grau*sizeof(Vertice*));
    for (int i=0; i<grau; i++) {
        v->arestas[i] = NULL;
    }
    v->grau = grau;
    return v;
}

Vertice** carregarGrafo(int **adjacencia, int n) {
    Vertice** vertices = (Vertice**) malloc(n*sizeof(Vertice*));
    for (int i=0; i<n; i++) {
        vertices[i] = gerarVertice(i, n);
    }
    for (int linha=0; linha<n; linha++) {
        for (int coluna=0; coluna<n; coluna++) {
            if (adjacencia[linha][coluna] == 1) {
                connect(vertices[linha], vertices[coluna]);
            }
        }
    }
    return vertices;
}


void listar_conexoes(Vertice* v) {
    for (int i=0; i < v->grau; i++) {
        printf("%d -> %d\n", v->valor, v->arestas[i]->valor);
    }
}

int main() {
    int adjacencia[3][3] = {
        0, 1, 1,
        1, 0, 1,
        1, 1, 0
    };
    int n = 3;


    Vertice** vertices = (Vertice**) malloc(n*sizeof(Vertice*));
    for (int i=0; i<n; i++) {
        vertices[i] = gerarVertice(i, n);
    }
    for (int linha=0; linha<n; linha++) {
        for (int coluna=0; coluna<n; coluna++) {
            if (adjacencia[linha][coluna] == 1) {
                connect(vertices[linha], vertices[coluna]);
            }
        }
    }

    

    return 0;
}
