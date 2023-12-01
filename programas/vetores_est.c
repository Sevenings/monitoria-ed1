#include <stdio.h>

int main() {
    int n;
    printf("Digite o n de alunos:\n");
    scanf("%d", &n);

    int alunos[n];
    for (int i=0; i<n; i++) {
        printf("Nota aluno %d: ", i+1);
        scanf("%d", &alunos[i]);
    }

    for (int i=0; i<n; i++) {
        printf("%d ", alunos[i]);
    }
    return 0;
}

