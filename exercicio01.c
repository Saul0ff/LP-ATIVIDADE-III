#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    char maiorAnome[200], maiorPnome[200], maiorInome[200];
    int idade[5], i, maioridade = 0;
    float altura[5], peso[5], maiorAltura = 0.0, maiorPeso = 0.0;

    for ( i = 0; i < 5; i++) {
        printf("Digite o nome: ");
        gets(nome[i]);

        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite o peso: ");
        scanf("%f", &peso[i]);

        printf("Digite a altura: ");
        scanf("%f", &altura[i]);

        printf("\n");

        fflush(stdin);

        
        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        maioridade = idade[i] > maioridade ? idade[i] : maioridade;
        
    if (altura[i] == maiorAltura){
            strcpy(maiorAnome, nome[i]);
        }

        if (peso[i] == maiorPeso) {
            strcpy(maiorPnome, nome[i]);
        }

        if (idade[i] == maioridade) {
            strcpy(maiorInome, nome[i]);
        }
    }

    printf("\tDADOS COLETADOS\n\n");
    
    for ( i = 0; i < 5; i++) {
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Peso: %.2f\n", peso[i]);
        printf("Altura: %.2f\n\n", altura[i]);
    }

    printf("\n\tDADOS ADICIONAIS\n\n");
    printf("Maior Idade: %d\n", maioridade);
    printf("Nome: %s\n\n", maiorInome);
    printf("Maior Altura: %.2f\n", maiorAltura);
    printf("Nome: %s\n\n", maiorAnome);
    printf("Maior Peso: %.2f\n", maiorPeso);
    printf("Nome: %s\n\n", maiorPnome);
    
    return 0;
}