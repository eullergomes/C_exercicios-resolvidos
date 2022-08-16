#include <stdio.h>
#include <locale.h>

/*
A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que a quantia total:
- O primeiro ganhador receberá 46%;
- O segundo ganhador receberá 32%;
- O terceiro ganhador reeberá o restante
Calcule e imprima a quantia por cada um dos ganhadores.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float importancia = 780000.00;
    float ganhadorUm, ganhadorDois, ganhadorTres;

    ganhadorUm = 0.46 * importancia;
    ganhadorDois = 0.32 * importancia;
    ganhadorTres = importancia - (ganhadorUm + ganhadorDois);

    printf("O primeiro ganhador receberá: R$ %0.2f\n", ganhadorUm);
    printf("O segundo ganhador receberá: R$ %0.2f\n", ganhadorDois);
    printf("O terceiro ganhador receberá: R$ %0.2f\n", ganhadorTres);

    return 0;
}