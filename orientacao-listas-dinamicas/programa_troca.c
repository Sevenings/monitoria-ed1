#include <stdio.h> 

void troca(int* a, int* b) {
    // Insira seu código aqui
}

int main() {
    int varA = 3;
    int varB = 6;

    printf("%d %d\n", varA, varB);

    troca(&varA, &varB);

    printf("%d %d\n", varA, varB);

    return 0;
}
