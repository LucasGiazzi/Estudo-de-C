/* Ler dois numeros e executar as operações de acordo com a escolha

1 -> Média entre os número
2 -> Diferença do maior pelo menor
3 -> Produto entre os números
4 -> Divisão do primeiro pelo segundo
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    int n1,n2,op, media, dif, prod, div;

    printf("Escolha o primeiro valor: ");
    scanf("%d", &n1);

    printf("Escolha o segundo valor: ");
    scanf("%d", &n2);

    printf("Escolha a operação de 1 à 4: ");
    scanf("%d", &op);

switch(op)
{
case 1:

media= (n1+n2)/2;

    printf("A média dos números escolhidos é: %d!\n\n", media);

break;

case 2:
    if(n1>n2)
    {
        dif= n1-n2;
        printf("A diferença do maior pelo menor é: %d!\n\n", dif);
    }
    else
    {
        dif= n2-n1;
        printf("A diferença do maior pelo menor é: %d!\n\n", dif);
    }
break;

case 3:

prod = n1*n2;

    printf("O produto dos números escolhidos é: %d\n\n", prod);

break;

case 4:

div= n1/n2;

    printf("A divisão dos valores escolhidos é: %d\n\n", div);

break;

default:
    printf("Precisa ser de 1 à 4!\n\n");
}

system("pause");
return 0;
}
