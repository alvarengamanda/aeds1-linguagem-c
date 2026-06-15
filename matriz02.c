/*
    AED I – Estudo Dirigido 09
        Atividade 2 (0912)
    Amanda Alvarenga Dias - 918868
*/
#include <stdio.h>

/*
-> gravar uma matriz real em arquivo;
-> testar: usar a leitura da matriz do 0911;
-> método para ler e recuperar a matriz do arquivo.
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
    Gravar matriz em arquivo
*/
void fprintlnarquivo_matriz(char fileName[], int linhas, int colunas, double matriz[][10]){
    FILE* arquivo = fopen(fileName, "wt");
    int n; // para linhas
    int c; // para colunas

    // gravar quantidade de dados
    fprintf(arquivo, "%d %d\n", linhas, colunas);

    // gravar valores no arquivo
    for (n = 0; n < linhas; n++)
    {
        for (c = 0; c < colunas; c++)
        {
            fprintf(arquivo, "%d ", (int)matriz[n][c]);
        }
    fprintf(arquivo, "\n");
    }

    // fechar arquivo
    fclose(arquivo);
}

/*
    Função Principal
*/
int main(){
    // identificação
    printf("Atividade 0912");
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
    fprintlnarquivo_matriz("MATRIZ0912.TXT", linhas, colunas, matriz);

    printf("\n");
    getchar();
    return 0;
}

/*
    TESTES
-> matriz[3][3]

Atividade 0912
Por: Amanda Alvarenga - 918868

Número de linhas: 3
Número de colunas: 3

Número para a matriz [0][0]: 1
Número para a matriz [0][1]: 2
Número para a matriz [0][2]: 3
Número para a matriz [1][0]: 4
Número para a matriz [1][1]: 5
Número para a matriz [1][2]: 6
Número para a matriz [2][0]: 7
Número para a matriz [2][1]: 8
Número para a matriz [2][2]: 9
1 2 3 
4 5 6 
7 8 9 
obs: arquivo com os dados = MATRIZ0912.TXT
*/
