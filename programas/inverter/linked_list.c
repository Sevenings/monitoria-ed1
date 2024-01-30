#include <stdio.h>
#include <stdlib.h>
#include <time.h>



typedef struct Node {
    int value;
    struct Node* next;
} Node;


typedef struct LinkedList {
    struct Node* head;
} LinkedList;


Node* newNode(int value) {
    Node* no = malloc(sizeof(Node));
    no->value = value;
    return no;
}


void add(LinkedList * lista, int value) {
    Node* newHead = newNode(value);
    newHead->next = lista->head;
    lista->head = newHead;
}

int estaVazia(LinkedList* lista) {
    if (lista->head == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void printLista(LinkedList* lista) {
    for (Node* n = lista->head; n != NULL; n = n->next) {
        printf("%d ", n->value);
    }
    printf("\n");
}

void removePrimeiro(LinkedList* lista) {
    Node *Head, *aux;
    Head = lista->head;
    aux = Head;
    lista->head = Head->next;
    free(aux);
}


void inverter(LinkedList* lista) {
    Node *a, *b, *c;
    a = lista->head;
    b = a->next;
    c = NULL;
    while (a != NULL) {
        a->next = c;
        c = a;
        a = b;
        if (b != NULL)
            b = b->next;
    }
    lista->head = c;
}

void inverteRecursivo(LinkedList* lista, Node* a, Node* b, Node* c) {
    a->next = c;
    c = a;
    a = b;
    if (b != NULL)
        b = b->next;

    if (a != NULL) {
        inverteRecursivo(lista, a, b, c);
    } else {
        lista->head = c;
    }
}


void gerarLista(LinkedList* lista, int n, int limite) {
    for (int i=0; i<n; i++) {
        add(lista, rand()%limite);
    }
}

void inverte2(LinkedList* lista) {
    inverteRecursivo(lista, lista->head, lista->head->next, NULL);
}


int main() {
    srand(time(NULL));
    LinkedList* lista = (LinkedList*) malloc(sizeof(LinkedList));
    gerarLista(lista, 7, 100);

    printLista(lista);

    inverte2(lista);

    //printLista(lista);
    return 0;
}
