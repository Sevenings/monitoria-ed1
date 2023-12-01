#include <stdio.h>

void troca(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
}


void trocaQueFunciona(int* a, int* b) {
    int aux = (*a);
    (*a) = (*b);
    (*b) = aux;
}


int main() {
    int a = 7;
    int b = 3;

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    trocaQueFunciona(&a, &b);

    //printf("%d %d\n", a, b);

    printf("%d", *(vetor-2));
    return 0;
}
