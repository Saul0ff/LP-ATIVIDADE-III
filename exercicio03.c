#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char nomes[1000000][200];
    int numero[1000000];
    int opcao;

    do {
       printf("AGENDA TELEFONE");
       printf("1 - Adicionar contato");
       printf("2 - Mostrar contatos e encerrar o programa");
       printf("Digite a opção selecionada: ");

        if (opcao == 1) {
            
        }
        
    } while (opcao != 2);
    
}