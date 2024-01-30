#include <stdio.h>

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int x = 7;
    int y = 2;
    troca(&x, &y);
    printf("%d %d", x, y);

    return 0;

}
