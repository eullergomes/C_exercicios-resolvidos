#include <stdio.h>
#include <locale.h>

/*Leia o sal�rio de um funcion�rio. Calcule e imprima o valor do novo sal�rio, sabendo que ele recebeu um aumento de 25%*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento;

    printf("Digite o valor do sal�rio em R$: ");
    scanf("%f", &salario);

    aumento = (0.25 * salario);

    printf("Novo sal�rio = R$ %0.2f", salario + aumento);

    return 0;
}