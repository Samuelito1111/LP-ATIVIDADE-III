#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int quantidadeNumeros = 5;
    int i;
    int quantidadePares = 0, quantidadeImpares = 0;
    int quantidadePositivos = 0, quantidadeNegativos = 0;
    int numero[quantidadeNumeros];
    int maiorNumero = INT_MIN, menorNumero = INT_MAX;
    float mediaPares, mediaImpares, mediaGeral;
    float somaPares = 0, somaImpares = 0, somaGeral = 0;

    for(i = 0; i < quantidadeNumeros; i++){
        printf("Digite o %dº número : \n", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0){
            quantidadePares++;
            somaPares += numero[i];
        } else{
            quantidadeImpares++;
            somaImpares += numero[i];
        }

        if (numero[i] > 0){
            quantidadePositivos++;
        } if (numero[i] < 0){
            quantidadeNegativos++;
        }

        maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
        menorNumero = numero[i] < menorNumero? numero[i] : menorNumero;
        
        somaGeral += numero[i];
    }

    if (quantidadePares > 0){
        mediaPares = somaPares / (float)quantidadePares;
    } if (quantidadeImpares > 0){
        mediaImpares = somaImpares / (float)quantidadeImpares;
    }

    mediaGeral = somaGeral / (float)quantidadeNumeros;

    printf("\n\nMostrando os resultados\n");

    printf("\nQuantidade de números Ímpares: %d\n", quantidadeImpares);
    printf("Quantidade de números Pares: %d\n", quantidadePares);
    printf("Quantidade de números Negativos: %d\n", quantidadeNegativos);
    printf("O maior número foi: %d\n", maiorNumero);
    printf("O menor número foi: %d\n", menorNumero);
    printf("A média dos números Pares foi: %.2f\n", mediaPares);
    printf("A média dos números Ímpares foi: %.2f\n", mediaImpares);
    printf("A média de todos os números foi: %.2f\n", mediaGeral);  
}