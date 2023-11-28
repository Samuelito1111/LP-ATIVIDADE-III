#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int quantidadePessoas = 5;
    char nomes [quantidadePessoas][2001];
    int idade[quantidadePessoas];
    float peso[quantidadePessoas];
    float altura[quantidadePessoas];
    int i;
    float maiorAltura = INT_MIN, menorAltura = INT_MAX;
    float maiorPeso = INT_MIN, menorPeso = INT_MAX;
    int maiorIdade = INT_MIN, menorIdade = INT_MAX;

    system("cls || clear");

    for (i = 0; i < quantidadePessoas; i++){

        fflush(stdin);
        printf("\nDigite o nome da %dª pessoa: ", i + 1);
        gets(nomes[i]);
        fflush(stdin);

        printf("Informe a idade: ");
        scanf("%d", &idade[i]);
        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade? idade[i] : menorIdade;

        printf("Agora o peso: ");
        scanf("%f", &peso[i]);
        maiorPeso = peso[i] > maiorPeso ? peso[i] : maiorPeso;
        menorPeso = peso[i] < menorPeso? peso[i] : menorPeso;

        printf("Por fim a altura: ");
        scanf("%f", &altura[i]);
        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura = altura[i] < menorAltura? altura[i] : menorAltura;
    }

    printf("\n\nMostrando os dados\n\n");

    for(i = 0; i < quantidadePessoas; i++){
        printf("\n%dª pessoa:  %s\n", i + 1, nomes[i]);
        printf("Sua altura: %.2f\n", altura[i]);
        printf("Peso: %.1f\n", peso[i]);
        printf("E Idade: %d\n", idade[i]);
    }


    printf("\n\nA maior e menor alturas foram: \n");
    printf("Maior: %.2f\n", maiorAltura);
    printf("Menor: %.2f\n", menorAltura);

    printf("\n\nO maior e menor peso foram: \n");
    printf("Maior: %.1f\n", maiorPeso);
    printf("Menor: %.1f\n", menorPeso);

    printf("\n\nA maior e menor idade foram: \n");
    printf("Maior: %d\n", maiorIdade);
    printf("Menor: %d\n", menorIdade);
}