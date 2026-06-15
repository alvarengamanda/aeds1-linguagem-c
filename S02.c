/*
Exercício 2: Crie uma struct Produto com:
- nome
- preço
- quantidade em estoque

- Mostre o valor total em estoque:
valor_total = preco * quantidade
*/

#include <stdio.h>
#include <string.h>

struct compra{
    char produto[80];
    double preco;
    int quantidade_estoque;
    int valor_total;
};

int main(){
    // inicialização da struct
    struct compra Mercado = {"Arroz", 24.99, 50};  
    
    // mostrar os dados
    printf("-> Estoque <-\n\n");
    printf("Produto: %s\n", Mercado.produto);
    printf("Preço: %.2lf\n", Mercado.preco);
    printf("Quantidade em estoque: %d\n", Mercado.quantidade_estoque);
    Mercado.valor_total = Mercado.preco * Mercado.quantidade_estoque;
    printf("Valor total em estoque: %d\n", Mercado.valor_total);
}
