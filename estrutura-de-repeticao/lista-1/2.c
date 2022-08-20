#include <stdio.h>
#include <locale.h>

//2-Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em O. Mostrar uma mensagem “FIM!” após a contagem.

int main (void){
    setlocale (LC_ALL, "Portuguese");

    int contador = 10;

    while (contador >= 0){
        printf("%d\n", contador);
        contador--;
    }
    printf("FIM!");

    return 0;
}