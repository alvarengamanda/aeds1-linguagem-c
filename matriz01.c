/*
    AED I – Estudo Dirigido 09
        Atividade 1 (0911)
    Amanda Alvarenga Dias - 918868
*/
#include <stdio.h>

/*
-> método para ler a matriz;
-> método para printar a matriz lida;
-> não pode: zero ou números negativos.
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
        printf("Há dimensões nulas ou negativas");
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
    int n;
    int c;

    // percorrer e imprimir a matriz
    for (n = 0; n < linhas; n++)
    {
        for (c = 0; c < colunas; c++)
        {
            printf("%.0lf ", matriz[n][c]);
        }
        printf("\n");
    }
}

/*
    Função Principal
*/
int main(){
    // identificação
    printf("Atividade 0911");
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

Atividade 0911
Por: Amanda Alvarenga - 918868

Número de linhas: 3
Número de colunas: 3

Número para a matriz [0][0]: 1
Número para a matriz [0][1]: 2
Número para a matriz [0][2]: 3
Número para a matriz [1][0]: 3
Número para a matriz [1][1]: 2
Número para a matriz [1][2]: 1
Número para a matriz [2][0]: 1
Número para a matriz [2][1]: 2
Número para a matriz [2][2]: 3
1 2 3 
3 2 1 
1 2 3 

-> matriz[4][3]

Atividade 0911
Por: Amanda Alvarenga - 918868

Número de linhas: 4
Número de colunas: 3

Número para a matriz [0][0]: 0
Número para a matriz [0][1]: 1
Número para a matriz [0][2]: 2
Número para a matriz [1][0]: 1
Número para a matriz [1][1]: 2
Número para a matriz [1][2]: 0
Número para a matriz [2][0]: 2
Número para a matriz [2][1]: 0
Número para a matriz [2][2]: 1
Número para a matriz [3][0]: 0 
Número para a matriz [3][1]: 1
Número para a matriz [3][2]: 2
0 1 2 
1 2 0 
2 0 1 
0 1 2 
*/
