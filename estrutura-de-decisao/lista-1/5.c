#include <stdio.h>
#include <locale.h>

//5. Fa�a um programa que receba um n�mero inteiro e verifique se este n�mero � par ou impar.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (num %2 == 0){
        printf("%d � par", num);
    } else {
        printf("%d � �mpar", num);
    }


    return 0;
}