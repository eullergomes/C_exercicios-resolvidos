#include <stdio.h>
#include <locale.h>

//6-Escreva um programa que leia 5 números e escreva o menor valor lido e o maior valor lido.

int main (void){
    setlocale (LC_ALL, "Portuguese");

    int num, menor = 0, maior = 0;

    printf("Digite 5 números inteiros:\n");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (int i = 0; i < 4; i++){
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        
        } else {
            menor = num;
        }
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d", menor);

	return 0;
}