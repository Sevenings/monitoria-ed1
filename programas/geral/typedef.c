#include <stdio.h>

typedef struct Digimon {
    int dano;
    int vida;
} Digimon;

int main() {
    Digimon pikachu;
    pikachu.dano = 4;
    pikachu.vida = 10;

    printf("Vida: %d Dano: %d\n", pikachu.vida, pikachu.dano);
    return 0;
}
