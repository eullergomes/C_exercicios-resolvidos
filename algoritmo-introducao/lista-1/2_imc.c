#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Escreva um programa em C para calcular o IMC (Índice de Massa Corpórea) a partir da entrada de dados pelo usuário*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;

    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    if (imc < 18.5){
        printf("IMC = %.1f\nClassificação: magreza", imc);

    }else if (imc >= 18.5 && imc <= 24.9){
        printf("IMC = %.1f\nClassificação: peso normal", imc);
    
    }else if (imc >= 25.0 && imc <= 29.9){
        printf("IMC = %.1f\nClassificação: sobrepeso", imc);
    
    }else if (imc >= 30.0 && imc <= 34.9){
        printf("IMC = %.1f\nClassificação: obesidade grau I", imc);
    
    }else if (imc >= 35.0 && imc <= 39.9){
        printf("IMC = %.1f\nClassificação: obesidade grau II", imc);

    }else{
        printf("IMC = %.1f\nClassificação: obesidade grau III");
    }
    return 0;
}
