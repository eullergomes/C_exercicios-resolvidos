#include <stdio.h>
#include <locale.h>

//7-Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

int main (void){
    setlocale (LC_ALL, "Portuguese");

    int soma = 0;

    for (int i = 0; i <= 100; i++){
        if (i %2 == 0){
            soma += i;
        }
    }
    printf("Soma = %d", soma);

	return 0;
}