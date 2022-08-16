#include <stdio.h>
#include <locale.h>
#include <math.h>

//3. Leia um numero real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o numero ao quadrado.

int main(void){
    setlocale(LC_ALL, "Portuguese");

    float num;
    float raiz;

    printf("Digite um número real: ");
    scanf("%f", &num);

    if (num >= 0){
        raiz = sqrt(num);
        printf("Raíz quadrada de %f = %f", num, raiz);
    } else {
        printf("%f elevado ao quadrado = %f", num, pow(num, 2));
    }

    return 0;
}