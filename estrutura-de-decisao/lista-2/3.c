#include <stdio.h>
#include <locale.h>

//3-Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int op, n1, n2;

    printf("DIGITE:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\n");
    scanf("%d", &op);

    switch (op){
        case 1: 
            printf("Digite dois números:\n");
            scanf("%d %d", &n1, &n2);

            printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
        case 2: 
            printf("Digite dois números:\n");
            scanf("%d %d", &n1, &n2);

            printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
        case 3: 
            printf("Digite dois números:\n");
            scanf("%d %d", &n1, &n2);

            printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
        case 4: 
            printf("Digite dois números:\n");
            scanf("%d %d", &n1, &n2);

            printf("%d / %d = %d", n1, n2, n1 / n2);
        break;
        default: printf("Opção inválida!"); break;
    }


    return 0;
}