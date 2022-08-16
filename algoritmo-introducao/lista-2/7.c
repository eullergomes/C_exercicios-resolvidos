#include <stdio.h>
#include <locale.h>

/*Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float alturaEscada, alturaDegrau, m;

    printf("Digite a altura do degrau da escada, em cent�metros: ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura, em metros, que voc� gostaria de alcan�ar: ");
    scanf("%f", &alturaEscada);

    //convertendo cm para m
    m = alturaDegrau / 100;

    printf("Voc� precisar� subir: %.f degraus para alcan�ar %.2f metros", alturaEscada / m, alturaEscada);

    return 0;
}