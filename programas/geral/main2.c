#include <stdio.h> 


void troca(int* a, int* b) {
    int aux = (*a);
    (*a) = (*b);
    (*b) = aux;
}

int main() {
    int varA = 3;
    int varB = 6;

    printf("%d %d\n", varA, varB);

    troca(&varA, &varB);

    printf("%d %d\n", varA, varB);

    return 0;
}
