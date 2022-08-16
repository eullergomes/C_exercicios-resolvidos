#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em segundos, 
de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio (hora, minuto e segundo) 
do term�nio da mesma.*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int hora, minuto, segundo, duracao, horario, convercao;

    printf("Digite, em horas, o hor�rio de inicio da experi�ncia biol�gica: ");
    scanf("%d", &hora); 

    printf("Digite o tempo restante em minutos: ");
    scanf("%d", &minuto);

    printf("Digite o tempo restante em segundos: ");
    scanf("%d", &segundo);

    //Definindo uma unidade de tempo v�lida
    if (hora < 0 || hora > 24 || minuto < 0 || minuto > 60 || segundo < 0 || segundo > 60){
        perror("Dados inv�lidos");
        exit(1);

    }else{
        printf("Agora digite, em segundos, o tempo de dura��o total da exper�ncia biol�gica: ");
        scanf("%d", &duracao); // 3600s = 60min = 1h

        //convertendo o hor�rio de in�cio para segundos
        horario = (hora * 3600) + (minuto * 60) + segundo;

        convercao = horario + duracao;

        //reutilizando as vari�veis j� criadas
        hora = convercao / 3600;
        minuto = (convercao % 3600) / 60;
        segundo = (convercao % 3600) % 60;

        printf("A experi�ncia biol�gica terminou �s: %dh:%dm:%ds\n", hora, minuto, segundo);
    }

    return 0;
}