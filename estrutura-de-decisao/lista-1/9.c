#include <stdio.h>
#include <locale.h>

/*
9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se aprestação for maior que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;

    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &prestacao);

    if(prestacao > salario * 0.2){
        printf("Empréstimo não concedido");
    } else {
        printf("Empréstimo concedido");
    }

    return 0;
}