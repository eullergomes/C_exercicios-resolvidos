#include <stdio.h>
#include <locale.h>

/*
4-Escreva o menu de op��es abaixo. Leia a op��o do usu�rio e execute a opera��o escolhida. Escreva uma mensagem de erro se a op��o for inv�lida. 
Escolha a op��o:
1- Soma de 2 n�meros.
2- Diferen�a entre 2 n�meros.
3- Produto entre 2 n�meros.
4- Divis�o entre 2 n�meros.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int opcao, n1, n2;

    printf("DIGITE:\n1- Soma de 2 n�meros.\n2- Diferen�a entre 2 n�meros (maior pelo menor).\n3- Produto entre 2 n�meros.\n4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero)\n\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d %d", &n1, &n2);
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case 2:
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d %d", &n1, &n2);
        if (n1 > n2){
            printf("%d - %d = %d", n1, n2, n1 - n2);
        } else {
            printf("%d - %d = %d", n2, n1, n2 - n1);
        }
        break;
    case 3:
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d %d", &n1, &n2);
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case 4:
        printf("Digite dois n�meros inteiros:\n");
        scanf("%d %d", &n1, &n2);
        if (n2 == 0){
            printf("O denominador n�o pode ser zero!");
        } else {
            printf("%d / %d = %d", n1, n2, n1 / n2);
        }
        break;

    default: printf("op��o inv�lida!"); break;
    }
    
    return 0;
}