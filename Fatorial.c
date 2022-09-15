#include <stdio.h>
#include <stdlib.h>]
#include <locale.h>

int ler()
{
    int num;
        printf("Insira um número INTEIRO E POSITIVO: ");
        scanf("%d", &num);
    return num;
}

int fat(int fatorial;)
{
    int i, fatorial;

    for(fatorial=1; i>1; i--){

        fatorial = fatorial*i;
    }
return fatorial;
}

int main()
{
setlocale(LC_ALL,"portuguese");

    int x, y;
    x= ler();

    y= fat(x);

    printf("O fatorial de %d é %d!\n\n", x, y);

system("pause");
return 0;
}
