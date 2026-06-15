/*
Exercício 3 — Aluno: Crie uma struct Aluno com
- nome
- matrícula
- nota

Leia os dados de um aluno e informe se ele está aprovado (nota ≥ 60).
*/

#include <stdio.h>
#include <string.h>

struct estudante{
    char nome[80];
    int matricula;
    int nota;
};

int main(){
    // inicialização da struct
    struct estudante Aluno;

    // mostrar os dados
    printf("-> Dados do Estudante <-\n\n");
    printf("Nome: ");
    scanf("%s", Aluno.nome);
    printf("Matrícula: ");
    scanf("%d", &Aluno.matricula);
    printf("Nota: ");
    scanf("%d", &Aluno.nota);
    printf("\n");

    // verificar aprovação
    if (Aluno.nota >= 60)
    {
        printf("Aprovado(a).");
    }
    else
    {
        printf("Reprovado(a).");
    }
    printf("\n");
    getchar();
    return 0;
}
