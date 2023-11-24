#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int numeros[5], i, maior = 0, menor = 9999;
    int impares = 0, negativos = 0, contador = 0;
    int pares = 0, somapar = 0, soma = 0;
    float media = 0, mediapar = 0;

    for ( i = 0; i < 5; i++) {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares++;
            somapar += numeros[i];
        }else {
            impares++;
        }

        if (numeros[i] < 0) {
            negativos ++;
        }else if(numeros[i] < 0){
            soma += numeros[i];
            contador ++;
        }

        maior = numeros[i] > maior ? numeros[i] : maior;
        menor = numeros[i] < menor ? numeros[i] : menor;
    }

    media = soma / contador;
    mediapar = somapar / pares;

    printf("Quantidade de números imapares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediapar);    
    printf("Média dos números: %.2f\n", media);    
}