/******************************************************************************

Leandro da Silva Crapino
15/02/2023
Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor,
ou seja, para o segundo valor não pode ser aceito o valor zero e imprimir o resultado da divisão do primeiro
valor lido pelo segundo valor lido.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, divisao;
    
    printf("Digite dois valores: \n");
    scanf("%f %f", &a, &b);
    
    while (b == 0){
        printf("Digite um novo valor: \n");
        scanf("%f", &b);
    }
    
    divisao = a / b;
    
    printf("A divisao dos dois valores e: %.1f", divisao);

    return 0;
}

