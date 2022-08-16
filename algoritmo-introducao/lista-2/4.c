#include <stdio.h>
#include <locale.h>

/*Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valorHr, hrsMes, valorLiquido;

    printf("Informe o valor da hora de trabalho em R$: ");
    scanf("%f", &valorHr);

    printf("Informe o total de horas trabalhadas no mês em R$: ");
    scanf("%f", &hrsMes);

    valorLiquido = hrsMes * valorHr;

    printf("Salário total = R$ %.2f", valorLiquido + (valorLiquido * 0.1));

    return 0;
}