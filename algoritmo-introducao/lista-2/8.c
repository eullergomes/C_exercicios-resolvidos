#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Leia um número inteiro em segundos, e imprima-o em horas, minutoa e segundos*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int conversao, segundos, horas, minutos;

    printf("Digite quantos segundos você gostaria de converter: ");
    scanf("%d", &conversao); // definição dos segundos a serem convertidos

    if (conversao < 0){
            perror("Dado inválido");
            exit(1);

    }else{
            horas = conversao / 3600;           // definindo a(s) hora(s), o resto será atribuído aos minutos
            minutos = (conversao % 3600) / 60;  // defindo o(s) minuto(s), o resto será atribuído aos segundos
            segundos = (conversao % 3600) % 60; // atribuíção dos segundos (restodo que sobrou)

            printf("%ds = %dh:%dm:%ds", conversao, horas, minutos, segundos);
        }
    return 0;
}