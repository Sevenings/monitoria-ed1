#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o n de alunos:\n");
    scanf("%d", &n);

    int* alunos = malloc(n*sizeof(int));

    for (int i=0; i<n; i++) {
        printf("Nota aluno %d: ", i+1);
        scanf("%d", &alunos[i]);
    }

    printf("As notas dos alunos foram:\n");
    for (int i=0; i<n; i++) {
        printf("%d ", alunos[i]);
    }

    free(alunos);

    return 0;
}

