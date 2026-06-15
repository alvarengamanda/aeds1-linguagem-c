/*
Exercício 1: Crie uma struct chamada "Pessoa" contendo
- nome
- idade
- altura

Leia os dados de uma pessoa e exiba-os.
*/

#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[80];
    int idade;
    double altura;
};

int main(){
    // inicialização da struct
    struct pessoa P01 = {"Amanda", 18, 1.68};
    
    // mostrar os dados
    printf("-> Cadastro <-\n\n");
    printf("Nome: %s\n", P01.nome);
    printf("Idade: %d\n", P01.idade);
    printf("Altura: %.2lf\n", P01.altura);

    getchar();
    return 0;
}
