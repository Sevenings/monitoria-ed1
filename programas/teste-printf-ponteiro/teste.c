#include <stdio.h>

int main(int argc, char *argv[]) {
    int variavel = 31;
    int* ponteiro = &variavel;

    printf("\n%p\n", ponteiro);

    return 0;
}
