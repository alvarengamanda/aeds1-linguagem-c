/*
    AED I – Estudo Dirigido 09
        Atividade 3 (0913)
    Amanda Alvarenga Dias - 918868
*/
#include <stdio.h>

/*
-> mostrar somente os valores na diagonal principal de uma matriz real, se for quadrada.
*/

/*
    Leitura da matriz
*/
void ler_matriz(int linhas, int colunas, double matriz[][10]){
    int n; // para linhas
    int c; // para colunas

    // zero ou números negativos
    if (linhas <= 0 || colunas <= 0)
    {
        printf("Há dimensões nulas ou negativas.");
        return;
    }

    // ler/percorrer a matriz (para cada linha … percorra todas as colunas)
    double x;
    for (n = 0; n < linhas; n++)
    {
        for (c = 0; c < colunas; c++)
        {
            printf("Número para a matriz [%d][%d]: ", n, c);
            scanf("%lf", &x);

            if (x < 0)
            {
                printf("Valor inválido.\n");
                c--; // volta para a coluna para tentar novamente
            }
            else
            {
                matriz[n][c] = x; // salva caso for válido
            }
        }
    }
}

/*
    Printar matriz lida
*/
void printar_matriz(int linhas, int colunas, double matriz[][10]){
    int d; // para diagonal principal

    // validar se é quadrada
    if (linhas != colunas)
    {
        printf("\nA matriz não é quadrada.\n");
        return;
    }

    // mostrar diagonal principal
    printf("\nElementos da diagonal principal: ");
    for (d = 0; d < linhas; d++) {
        printf("%.0lf ", matriz[d][d]); 
    }
    printf("\n");
}

/*
    Função Principal
*/
int main(){
    // identificação
    printf("Atividade 0913");
    printf("\n");
    printf("Por: Amanda Alvarenga - 918868\n");
    printf("\n");

    double matriz[10][10]; 
    int linhas, colunas;

    // dimensões da matriz
    printf("Número de linhas: ");
    scanf("%d", &linhas);
    printf("Número de colunas: ");
    scanf("%d", &colunas);
    printf("\n");

    // resultado da matriz
    ler_matriz(linhas, colunas, matriz);
    printar_matriz(linhas, colunas, matriz);

    printf("\n");
    getchar();
    return 0;
}

/*
    TESTES
-> matriz[3][3]

Atividade 0913
Por: Amanda Alvarenga - 918868

Número de linhas: 3
Número de colunas: 3

Número para a matriz [0][0]: 1
Número para a matriz [0][1]: 2
Número para a matriz [0][2]: 3
Número para a matriz [1][0]: 4
Número para a matriz [1][1]: 5
Número para a matriz [1][2]: 6
Número para a matriz [2][0]: 2
Número para a matriz [2][1]: 4
Número para a matriz [2][2]: 6

Elementos da diagonal principal: 1 5 6 

-> matriz[3][5]

Atividade 0913
Por: Amanda Alvarenga - 918868

Número de linhas: 3
Número de colunas: 5

Número para a matriz [0][0]: 1
Número para a matriz [0][1]: 2
Número para a matriz [0][2]: 3
Número para a matriz [0][3]: 4
Número para a matriz [0][4]: 5
Número para a matriz [1][0]: 1
Número para a matriz [1][1]: 2
Número para a matriz [1][2]: 3
Número para a matriz [1][3]: 4
Número para a matriz [1][4]: 5
Número para a matriz [2][0]: 1
Número para a matriz [2][1]: 2
Número para a matriz [2][2]: 3
Número para a matriz [2][3]: 4
Número para a matriz [2][4]: 5

A matriz não é quadrada.
*/