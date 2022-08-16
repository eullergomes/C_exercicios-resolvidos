#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia o horário (hora, minuto e segundo) de início e a duração, em segundos, 
de uma experiência biológica. O programa deve resultar com o novo horário (hora, minuto e segundo) 
do termínio da mesma.*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int hora, minuto, segundo, duracao, horario, convercao;

    printf("Digite, em horas, o horário de inicio da experiência biológica: ");
    scanf("%d", &hora); 

    printf("Digite o tempo restante em minutos: ");
    scanf("%d", &minuto);

    printf("Digite o tempo restante em segundos: ");
    scanf("%d", &segundo);

    //Definindo uma unidade de tempo válida
    if (hora < 0 || hora > 24 || minuto < 0 || minuto > 60 || segundo < 0 || segundo > 60){
        perror("Dados inválidos");
        exit(1);

    }else{
        printf("Agora digite, em segundos, o tempo de duração total da experência biológica: ");
        scanf("%d", &duracao); // 3600s = 60min = 1h

        //convertendo o horário de início para segundos
        horario = (hora * 3600) + (minuto * 60) + segundo;

        convercao = horario + duracao;

        //reutilizando as variáveis já criadas
        hora = convercao / 3600;
        minuto = (convercao % 3600) / 60;
        segundo = (convercao % 3600) % 60;

        printf("A experiência biológica terminou ás: %dh:%dm:%ds\n", hora, minuto, segundo);
    }

    return 0;
}