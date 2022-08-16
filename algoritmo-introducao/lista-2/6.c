#include <stdio.h>
#include <locale.h>

/*
Escreva um programa de ajuda para vencedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3x sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).
*/


int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float valorVenda, desconto, comisaoAvista, comissaoParcela;

    printf("Digite o valor da venda em R$: ");
    scanf("%f", &valorVenda);

    desconto = valorVenda * 0.1;
    comisaoAvista = (valorVenda - desconto) * 0.05;
    comissaoParcela = valorVenda * 0.05;

    printf("Valor pago menos o desconto de 10%% = R$ %0.2f\n", valorVenda - desconto);
    printf("3 parcelas de R$ %0.2f sem juros \n", valorVenda / 3);
    printf("Venda à vista, a comissão = R$ %0.2f\n", comisaoAvista);
    printf("Venda seja parcelada, comissão = R$ %0.2f\n", comissaoParcela);

    return 0;
}