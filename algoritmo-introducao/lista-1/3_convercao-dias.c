#include <stdio.h>
#include <locale.h>

/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses, dias e mostre-a expressa em dias. Leve em consideração o ano com 365 dias e o mês com 30. (Ex: 3 anos, 2 meses e 15 dias = 1170 dias).*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int anos, meses, dias;

    printf("Digite uma idade em anos: ");
    scanf("%d", &anos);

    printf("Digite o restante da idade em meses: ");
    scanf("%d", &meses);

    printf("Digite o restante da idade em dias: ");
    scanf("%d", &dias);

    int umAno = 365 * anos, umMes = 30 * meses;

    printf("%d anos, %d meses, %d dias = %d dias", anos, meses, dias, umAno + umMes + dias);

    return 0;
}