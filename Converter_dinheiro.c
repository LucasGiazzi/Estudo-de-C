#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    float qtd;
    int op;

    printf("Escolha a quantia que deseja comprar: ");
    scanf("%f", &qtd);

    printf("Sabendo que:\nDólar Canadense -> 1\nEuro -> 2\nDólar -> 3\nPeso -> 4\n");
    printf("Qual moeda deseja comprar: ");
    scanf("%d", &op);

    switch(op){

case 1:
qtd= qtd*3.98;
    printf("\t%.2f reais\n\n", qtd);
    break;

case 2:
qtd= qtd*5.2;
    printf("\t%.2f reais\n\n", qtd);
    break;

case 3:
qtd= qtd*5.16;
    printf("\t%.2f reais\n\n", qtd);
    break;

case 4:
qtd= qtd*(0.38*0.1);
    printf("\t%.2f reais\n\n", qtd);
    break;

default:
    printf("A moeda escolhida não existe!");
    }







system("pause");
return 0;
}
