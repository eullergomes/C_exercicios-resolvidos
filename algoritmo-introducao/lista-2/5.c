#include <stdio.h>
#include <locale.h>

/*Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o  salário-base.*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float salarioBase, gratificacao, imposto;

    printf("Digite o salário base do funcionário em R$: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    printf("Salário total: R$ %0.2f\n", (salarioBase + gratificacao) - imposto);

    return 0;
}