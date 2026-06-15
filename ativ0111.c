// Programa 0111 - AED1
// Amanda Alvarenga Dias - 918868
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // Identificacao
    printf("%s\n","Programa 0111 AED1");
    printf("%s\n","Autor: Amanda Alvarenga Dias - 918868");
    printf("\n");
    
    // Definir e ler um número que será o lado de um quadrado
    int lado1;
    printf("Informe um número para o lado do primeiro quadrado: ");
    scanf("%d", &lado1);

    // Calcular o valor do lado de outro quadrado
    int lado2 = lado1 * 2;
    printf("O valor do lado do segundo quadrado é igual a: %d", lado2);
    printf("\n");

    // Calcular e mostrar o valor da área do segundo quadrado
    int area = pow(lado2, 2);
    printf("O valor da área do segundo quadrado é igual a: %d", area);
    printf("\n");
    return 0;
}

/*
Testes e observacoes:
1. Teste simples
Programa 0111 AED1
Autor: Amanda Alvarenga Dias - 918868

Informe um número para o lado do primeiro quadrado: 4
O valor do lado do segundo quadrado é igual a: 8
O valor da área do segundo quadrado é igual a: 64
(OK).
*/
