#include <stdio.h>
#include <locale.h>

/*
8.Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o programa termina. -.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite a primeira e segunda nota, respectivamente:\n");
    scanf("%f %f", &n1, &n2);

    if (n1 >= 0.0 && n1 <= 10.0 && n2 >= 0.0 && n2 <= 10.0){
        printf("Média = %.2f", (n1 + n2) / 2);
    }

    return 0;
}