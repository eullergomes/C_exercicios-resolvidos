#include <stdio.h>
#include <locale.h>

/*Escreva um programa em C para converter uma temperatura dada em graus Fahrenheit para graus Celsius*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf("Digite a temperatura em ºF: ");
    scanf("%f", &f);
    // Fórmula de converção
    c = (f - 32) * 5 / 9;

    printf("%.fºF corresponde a %.fºC", f, c);
    return 0;
}