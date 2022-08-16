#include <stdio.h>
#include <locale.h>
#include <math.h>

//2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. Importe a biblioteca math (#include <math.h> ) e use a função sqrt( ) para raiz

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num < 0){
        printf("número inválido!");
        return 1;
    }
    
    float raiz = sqrt(num);

    printf("Raíz quadrada de %f = %f", num, raiz);

    return 0;
}