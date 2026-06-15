// Programa 0113 - AED1
// Amanda Alvarenga Dias - 918868
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Identificacao
    printf("%s\n","Programa 0113 AED1");
    printf("%s\n","Autor: Amanda Alvarenga Dias - 918868");
    printf("\n");

    // Definir e ler dois numeros que serao os valores dos lados de um retangulo
    int numA, numB;
    printf("Informe o valor de um dos lados do retângulo: ");
    scanf("%d", &numA);

    printf("Informe o valor de outro lado do retângulo: ");
    scanf("%d", &numB);
    printf("\n");

    // Calcular a area do retangulo com os lados aumentados em 4 vezes cada
    int area = (numA * 4) * (numB * 4);
    printf("O valor da área é igual a: %d", area);
    printf("\n");
    return 0;
}

/*
Testes e observacoes:
1. Teste simples
Programa 0113 AED1
Autor: Amanda Alvarenga Dias - 918868

Informe o valor de um dos lados do retângulo: 2
Informe o valor de outro lado do retângulo: 3

O valor da área é igual a: 96
(OK).

2. Teste simples
Programa 0113 AED1
Autor: Amanda Alvarenga Dias - 918868

Informe o valor de um dos lados do retângulo: 4
Informe o valor de outro lado do retângulo: 8

O valor da área é igual a: 512
(OK).
*/
