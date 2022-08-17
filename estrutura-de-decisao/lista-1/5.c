#include <stdio.h>
#include <locale.h>

//5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num %2 == 0){
        printf("%d é par", num);
    } else {
        printf("%d é ímpar", num);
    }


    return 0;
}