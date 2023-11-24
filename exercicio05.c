#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int opcao = 1;
    char nome[100][150];
    int i = 0, quantidade[100], k = 0;
    float preco[100], valorproduto;

    do {
        printf("\tBEM-VINDO(A) A LOJA !\n\n");
        printf("1 - Adicionar uma venda\n");
        printf("2 - Fechar e ver o total de vendas\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        fflush(stdin);
        system("cls || clear");
        
        if (opcao == 1) {
            printf("Digite o nome do produto: ");
            gets(nome[i]);
            printf("Digite o valor unitário: ");
            scanf("%f", &preco[i]);
            printf("Quantidade do produto: ");
            scanf("%d", &quantidade[i]);

            valorproduto += (preco[i] * quantidade[i]);
            i++;
        }else if (opcao < 1 || opcao > 2) {
            printf("Opção inválida !\nTente novamente...");
            sleep(3);
            system("cls || clear");
        }else{
            k = i;
        }
        
        
    } while (opcao != 2);

    i = 0;

    do {
       printf("Produto: %s\n", nome[i]);
       printf("Quantidade: %d\n", quantidade[i]);
       printf("Preço unitário: %.2f\n\n", preco[i]);
       i++;
    } while (i != k);
        printf("Valor Total: %.2f", valorproduto);
    
    
}