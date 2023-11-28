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
        printf("Digite o %d� n�mero : \n", i + 1);
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

    printf("\nQuantidade de n�meros �mpares: %d\n", quantidadeImpares);
    printf("Quantidade de n�meros Pares: %d\n", quantidadePares);
    printf("Quantidade de n�meros Negativos: %d\n", quantidadeNegativos);
    printf("O maior n�mero foi: %d\n", maiorNumero);
    printf("O menor n�mero foi: %d\n", menorNumero);
    printf("A m�dia dos n�meros Pares foi: %.2f\n", mediaPares);
    printf("A m�dia dos n�meros �mpares foi: %.2f\n", mediaImpares);
    printf("A m�dia de todos os n�meros foi: %.2f\n", mediaGeral);  
}