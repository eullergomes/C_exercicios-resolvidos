#include <stdio.h>
#include <locale.h>

//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("%d � maior do que %d", n1, n2);
    } else if(n2 > n1){
        printf("%d � maior do que %d", n2, n1);
    } else {
        printf("%d � igual a %d", n1, n2);
    }

    return 0;
}