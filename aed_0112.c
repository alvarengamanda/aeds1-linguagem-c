// Programa 0112 - AED1
// Amanda Alvarenga Dias - 918868
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Identificacao
    printf("%s\n","Programa 0112 AED1");
    printf("%s\n","Autor: Amanda Alvarenga Dias - 918868");
    printf("\n");

    // Definir e ler um número inteiro que será o valor do lado de um quadrado
    int lado1;
    printf("Informe um número inteiro para o lado do primeiro quadrado: ");
    scanf("%d", &lado1);
    printf("\n");

    // Calcular o valor do lado de outro quadrado que sera 1/4 do quadrado incial
    int lado2 = lado1 * 1/4;
    printf("O lado do segundo quadrado é igual a: %d", lado2);
    printf("\n");

    // Calcular a área do segundo quadrado com 1/4 do lado
    int area = pow(lado2, 2);
    printf("A área do segundo quadrado é igual a: %d", area);
    printf("\n");

    // Calcular o perímetro do segundo quadrado com 1/4 do lado
    int perimetro = lado2 * 4;
    printf("O perímetro do segundo quadrado é igual a: %d", perimetro);
    printf("\n");
    return 0;
}

/*
Testes e observacoes:
1. Teste simples
Programa 0112 AED1
Autor: Amanda Alvarenga Dias - 918868

Informe um número inteiro para o lado do primeiro quadrado: 8

O lado do segundo quadrado é igual a: 2
A área do segundo quadrado é igual a: 4
O perímetro do segundo quadrado é igual a: 8
(OK).

2. Teste simples
Programa 0112 AED1
Autor: Amanda Alvarenga Dias - 918868

Informe um número inteiro para o lado do primeiro quadrado: 2

O lado do segundo quadrado é igual a: 0
A área do segundo quadrado é igual a: 0
O perímetro do segundo quadrado é igual a: 0
(OK).
*/