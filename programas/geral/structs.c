#include <stdio.h>
#include <stdlib.h>

typedef struct Digimon {
    int vida;
    int dano;
} Digimon;

Digimon* NovoDigimon(int vida, int dano) {
    Digimon* digimon = (Digimon*) malloc(sizeof(Digimon));

    digimon->vida = vida;
    digimon->dano = dano;

    return digimon;
}


int main() {
    Digimon* digimon1 = NovoDigimon(10, 15); // Digimon com 10 de vida e 15 de dano

    printf("Vida %d dano %d special %d", digimon1->vida, digimon1->dano);

    return 0;
}
