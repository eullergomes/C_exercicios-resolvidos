#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
4. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
     a. O número digitado ao quadrado e
     b. A raiz quadrada do número digitado .
*/
int main(void){
    setlocale(LC_ALL, "Portuguese");

    float num, raiz;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0){
        raiz = sqrt(num);
        printf("%f elevado ao quadrado = %f\n", num, pow(num, 2));
        printf("Raíz quadrada de %f = %f", num, raiz);
    }

    return 0;
}