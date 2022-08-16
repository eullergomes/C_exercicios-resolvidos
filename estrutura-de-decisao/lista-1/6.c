#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//6. Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o dois números inteiros:\n");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2){
        printf("Maior número: %d\n", n1);
        printf("%d - %d = %d", n1, n2, n1 - n2);
    } else if (n2 > n1){
        printf("Maior número: %d\n", n2);
        printf("%d - %d = %d", n2, n1, n2 - n1);
    } else {
        printf("Números iguais!");
    }


    return 0;
}