#include <stdio.h>
#include <locale.h>

/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8%  para imposto de renda.*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valorDias = 30.00, imposto;
    int qtdDias;

    printf("informe o número de dias trabalhados pelo encanador: ");
    scanf("%d", &qtdDias);

    imposto = (valorDias * qtdDias) * 0.08;

    printf("Salário total = R$ %0.2f", (valorDias * qtdDias) - imposto);

    return 0;
}