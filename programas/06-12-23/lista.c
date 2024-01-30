#include <stdio.h>
#include <stdlib.h>

typedef struct Lista {
    int valor;
    struct Lista* proximo;
} Lista;

Lista* criarLista() {
    return NULL;
}

Lista* add(Lista* lista, int valor) {
    Lista* no = malloc(sizeof(Lista));
    no->valor = valor;
    no->proximo = lista;
    return no;
}


int main(int argc, char *argv[]) {
    Lista* l = criarLista();
    l = add(l, 7);
    l = add(l, 9);

    printf("%d", l->proximo->valor);
    
    return 0;
}
