#include <stdio.h>
#include <locale.h>

//1-Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. Isto �, domingo se 1, segunda-feira se 2, e assim por diante.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int dia;

    printf("Digite um n�mero correspondente ao dia da semana:\n");
    scanf("%d", &dia);

    switch (dia){
    case 1: printf("Domingo"); break;
    case 2: printf("Segunda-feira"); break;
    case 3: printf("Ter�a-feira"); break;
    case 4: printf("Quarta-feira"); break;
    case 5: printf("Quinta-feira"); break;
    case 6: printf("Sexta-feira"); break;
    case 7: printf("Sab�do"); break;
    default: printf("N�mero inv�lido!"); break;
    }

    return 0;
}