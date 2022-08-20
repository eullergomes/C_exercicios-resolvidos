#include <stdio.h>
#include <locale.h>

//5-Faça um programa que leia 10 inteiros e imprima sua média.

int main (void){
    setlocale (LC_ALL, "Portuguese");

    int contador = 0, i;
    float media = 0;

    printf("Digite 10 numeros:\n");
    while (contador < 10){
        contador++;
        scanf("%d", &i);
        media = (media + i);
}
    printf("Media = %f", media / 10);
    
	return 0;
}