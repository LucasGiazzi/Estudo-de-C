/* Ler dois numeros e executar as opera��es de acordo com a escolha

1 -> M�dia entre os n�mero
2 -> Diferen�a do maior pelo menor
3 -> Produto entre os n�meros
4 -> Divis�o do primeiro pelo segundo
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

    printf("Escolha a opera��o de 1 � 4: ");
    scanf("%d", &op);

switch(op)
{
case 1:

media= (n1+n2)/2;

    printf("A m�dia dos n�meros escolhidos �: %d!\n\n", media);

break;

case 2:
    if(n1>n2)
    {
        dif= n1-n2;
        printf("A diferen�a do maior pelo menor �: %d!\n\n", dif);
    }
    else
    {
        dif= n2-n1;
        printf("A diferen�a do maior pelo menor �: %d!\n\n", dif);
    }
break;

case 3:

prod = n1*n2;

    printf("O produto dos n�meros escolhidos �: %d\n\n", prod);

break;

case 4:

div= n1/n2;

    printf("A divis�o dos valores escolhidos �: %d\n\n", div);

break;

default:
    printf("Precisa ser de 1 � 4!\n\n");
}

system("pause");
return 0;
}
