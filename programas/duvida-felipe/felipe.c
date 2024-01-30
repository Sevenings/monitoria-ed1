#include <stdio.h>


int isPar(int a) {
    if (a%2) {
        return 0;
    } else {
        return 1;
    }
}

int main(int argc, char *argv[]) {
    printf("%d\n", isPar(4));
    printf("%d\n", isPar(3));
    printf("%d\n", isPar(2));
    printf("%d\n", isPar(1));
    return 0;
}
