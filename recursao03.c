#include <stdio.h>

int decrescente5(int n){
    if (n > 5)
    {
        return 0;
    }
    printf("\n%d ", n);
    return decrescente5(n + 1);
}

int main(){
    // valor de n
    int n;
    printf("Valor de n: ");
    scanf("%d", &n);

    // função recursiva
    decrescente5(n);
    printf("\n");
    return 0;
}

/*
    -> TESTE <- [pediu pra mostrar só de 1 até 5]
-------------------------------------------------------------------------------------------------------------------------------------------------------
01.
Valor de n: 1

1 
2 
3 
4 
5 
*/
