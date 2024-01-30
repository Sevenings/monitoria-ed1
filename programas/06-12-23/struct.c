#include <stdio.h>

typedef struct Telefone {
    int numero; 
    char nome;
    char endereco;
} Telefone;

int main() {
    Telefone lucas;
    lucas.numero = 99737345;
    lucas.nome = 'L';
    lucas.endereco = 'j';

    printf("Numero %d, Nome %c, end %c", lucas.numero, lucas.nome, lucas.endereco);
    return 0;
}
