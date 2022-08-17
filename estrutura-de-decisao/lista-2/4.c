#include <stdio.h>
#include <locale.h>

/*
4-Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. Escreva uma mensagem de erro se a opção for inválida. 
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números.
3- Produto entre 2 números.
4- Divisão entre 2 números.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int opcao, n1, n2;

    printf("DIGITE:\n1- Soma de 2 números.\n2- Diferença entre 2 números (maior pelo menor).\n3- Produto entre 2 números.\n4- Divisão entre 2 números (o denominador não pode ser zero)\n\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite dois números inteiros:\n");
        scanf("%d %d", &n1, &n2);
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("Digite dois números inteiros:\n");
        scanf("%d %d", &n1, &n2);
        if (n1 > n2){
            printf("%d - %d = %d", n1, n2, n1 - n2);
        } else {
            printf("%d - %d = %d", n2, n1, n2 - n1);
        }
        break;
    case 3:
        printf("Digite dois números inteiros:\n");
        scanf("%d %d", &n1, &n2);
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("Digite dois números inteiros:\n");
        scanf("%d %d", &n1, &n2);
        if (n2 == 0){
            printf("O denominador não pode ser zero!");
        } else {
            printf("%d / %d = %d", n1, n2, n1 / n2);
        }
        break;

    default: printf("opção inválida!"); break;
    }
    
    return 0;
}