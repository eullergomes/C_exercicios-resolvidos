#include <stdio.h>
#include <locale.h>

/*Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario, aumento;

    printf("Digite o valor do salário em R$: ");
    scanf("%f", &salario);

    aumento = (0.25 * salario);

    printf("Novo salário = R$ %0.2f", salario + aumento);

    return 0;
}