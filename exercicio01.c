#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    char maiorAnome[200], maiorPnome[200], maiorInome[200];
    char menorAnome[200], menorPnome[200], menorInome[200];
    int idade[5], i, maioridade = 0, menoridade = 999;
    float altura[5], peso[5], maiorAltura = 0.0, maiorPeso = 0.0, menorAltura = 999, menorPeso = 999;

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
        
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;
        menorPeso = peso[i] < menorPeso ? peso[i] : menorPeso;
        menoridade = idade[i] < menoridade ? idade[i] : menoridade;
        
    if (altura[i] == maiorAltura){
            strcpy(maiorAnome, nome[i]);
        }

        if (peso[i] == maiorPeso) {
            strcpy(maiorPnome, nome[i]);
        }

        if (idade[i] == maioridade) {
            strcpy(maiorInome, nome[i]);
        }
    
    if (altura[i] == menorAltura){
            strcpy(menorAnome, nome[i]);
        }

        if (peso[i] == menorPeso) {
            strcpy(menorPnome, nome[i]);
        }

        if (idade[i] == menoridade) {
            strcpy(menorInome, nome[i]);
        }
    }

    system("cls || clear");

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
    
    printf("Menor Idade: %d\n", menoridade);
    printf("Nome: %s\n\n", menorInome);
    printf("Menor Altura: %.2f\n", menorAltura);
    printf("Nome: %s\n\n", menorAnome);
    printf("Menor Peso: %.2f\n", menorPeso);
    printf("Nome: %s\n\n", menorPnome);
    
    return 0;
}
