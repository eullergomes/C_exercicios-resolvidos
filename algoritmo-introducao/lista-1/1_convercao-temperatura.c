#include <stdio.h>
#include <locale.h>

/*Escreva um programa em C para converter uma temperatura dada em graus Fahrenheit para graus Celsius*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float c, f;

    printf("Digite a temperatura em �F: ");
    scanf("%f", &f);
    // F�rmula de conver��o
    c = (f - 32) * 5 / 9;

    printf("%.f�F corresponde a %.f�C", f, c);
    return 0;
}