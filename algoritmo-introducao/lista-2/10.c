#include <stdio.h>
#include <locale.h>

/*Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int anoNascimento, idade, anoAtual;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;
    printf("O ano que você nasceu foi: %d", anoNascimento);

    return 0;
}