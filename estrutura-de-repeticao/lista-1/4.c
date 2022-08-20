#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//4-Faça um programa que peça ao usuário para digitar 10 valores e some-os.

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int contador = 10, i, soma = 0;

    printf("Digite 10 numeros inteiros:\n");
    while (contador > 0){
        contador--;
        scanf("%d", &i);
        soma = soma + i;
    }
    printf("Soma = %d", soma);

    return 0;
}