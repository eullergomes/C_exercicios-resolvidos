#include <stdio.h>
#include <locale.h>

//7. Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais. .

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("%d é maior do que %d", n1, n2);
    } else if(n2 > n1){
        printf("%d é maior do que %d", n2, n1);
    } else {
        printf("%d é igual a %d", n1, n2);
    }

    return 0;
}