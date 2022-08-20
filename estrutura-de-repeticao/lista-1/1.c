#include <stdio.h>
#include <locale.h>

//1-Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.

int main (void){
    setlocale (LC_ALL, "Portuguese");

    int mult = 0;

    for (int i = 1; i <= 5; i++){
        mult += 3;
    }
    printf("Soma = %d", mult);

    return 0;
}