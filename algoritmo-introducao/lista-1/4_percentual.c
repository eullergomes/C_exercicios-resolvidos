#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva  um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.*/

int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int nDeEleitores;
    float votosBrancos, votosNulos, votosValidos;

    //O nº total de eleitores deve ser maior do que os votos brancos + votos nulos
    while (nDeEleitores < (votosBrancos + votosNulos)){
        printf("Digite o nº total de eleitores: ");
        scanf("%d", &nDeEleitores);

        printf("Digite o nº de votos brancos: ");
        scanf("%f", &votosBrancos);

        printf("Digite o nº de votos nulos: ");
        scanf("%f", &votosNulos);

        if (nDeEleitores < (votosBrancos + votosNulos)){
            perror("Dados inválidos, preencha novamente\n\n");
            exit(1);
        
        }else{
            // atribuindo do valor dos votos válidos
            votosValidos = nDeEleitores - (votosBrancos + votosNulos);

            printf("\nTotal de eleitores: %d pessoas\n", nDeEleitores);
            printf("Votos brancos: %0.1f%% \n", votosBrancos / (nDeEleitores / 100));
            printf("Votos nulos: %0.1f%% \n", votosNulos / (nDeEleitores / 100));
            printf("Votos válidos: %0.1f%% \n", votosValidos / (nDeEleitores / 100));
        }
    }
    return 0;
}