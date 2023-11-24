#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nomes[100][200];
    long long int numero[100];
    int opcao, i = 0, k;

    do {
       printf("\tAGENDA TELEFONE\n\n");
       printf("1 - Adicionar contato\n");
       printf("2 - Mostrar contatos e encerrar o programa\n");
       printf("Digite a opção desejada: ");
       scanf("%d", &opcao);

        system("cls || clear");
        fflush(stdin);
        
        if (opcao == 1) {
            printf("Digite o nome do contato: ");
            gets(nomes[i]);
            printf("Digite o número do contato: ");
            scanf("%lld", &numero[i]);
           
            i++;
            system("cls || clear");
        }else if (opcao > 2 || opcao < 1) {
            printf("Opção selecionada inválida !!!\nTente novamente...");
            sleep(3);
            system("cls || clear");
        }else {
            k = i;
        }
        
        
    } while (opcao != 2);

    i = 0;

    do
    {
          printf("Nome do contato: %s\n", nomes[i]);
          printf("Número: %lld\n\n", numero[i]);
          i++;        
    } while (i != k);
    
    return 0;
}
