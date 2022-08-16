#include <stdio.h>
#include <locale.h>

/*Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float alturaEscada, alturaDegrau, m;

    printf("Digite a altura do degrau da escada, em centímetros: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura, em metros, que você gostaria de alcançar: ");
    scanf("%f", &alturaEscada);

    //convertendo cm para m
    m = alturaDegrau / 100;

    printf("Você precisará subir: %.f degraus para alcançar %.2f metros", alturaEscada / m, alturaEscada);

    return 0;
}