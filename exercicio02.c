#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char alunos[5][200];
    int idades[5], i, j;
    float notas[5][3], somaNotas = 0, media[5];

    for ( i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        gets(alunos[i]);

        printf("Digite a idade: ");
        scanf("%d", &idades[i]);

        for ( j = 0; j < 3; j++) {
            printf("Digite a %dª nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j;
        somaNotas = 0;
        fflush(stdin);
        printf("\n");
    }
    
    system("cls || clear");

    for ( i = 0; i < 5; i++) {
        printf("Aluno: %s\n", alunos[i]);
        printf("Idade: %d\n", idades[i]);
            for ( j = 0; j < 3; j++) {
                printf("%dª nota: %.1f\n", i + 1, notas[i][j]);
            }
        printf("Média: %.1f\n", media[i]);

        if (media[i] >= 7) {
            printf("Aprovado !\n\n");
        } else if (media[i] >= 5) {
            printf("Recuperação !\n\n");
        } else if (media[i] < 5) {
            printf("Reprovado !\n\n");
        }
               
    }

    return 0;
}
