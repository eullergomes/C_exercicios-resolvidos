#include <stdio.h>
#include <locale.h>

/*5-Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria são:
 - Ter pelo menos 65 anos,
 - Ou ter trabalhado pelo menos 30 anos,
 - Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main(void){
    setlocale(LC_ALL, "Portuguese");

    int idade, tempo;
    printf("Digite a idade e o tempo de serviço, respectivamente:\n");
    scanf("%d %d", &idade, &tempo);

    if (idade >= 65 || tempo >= 30 || idade >= 60 && tempo >= 25){
        printf("O trabalhador pode se aposentar!");
    } else {
        printf("O trabalhador não pode se aposentar!");
    }


    return 0;
}