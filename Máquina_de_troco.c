#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    int valor,nota;

        printf("Qual valor, desconsiderando os centavos, que você deseja trocar? ");
        scanf("%d",&valor);

        if(valor >= 100);
        {
            nota= valor/100;
            valor= valor%100;
            printf("Serão:\n%d nota(s) de 100 reais;\n", nota);
        }

        if(valor >= 50);
        {
            nota= valor/50;
            valor= valor%50;
            printf("%d nota(s) de 50 reais;\n", nota);
        }

        if(valor >= 20);
        {
            nota= valor/20;
            valor= valor%20;
            printf("%d nota(s) de 20 reais;\n", nota);
        }


        if(valor >= 10);
        {
            nota= valor/10;
            valor= valor%10;
            printf("%d nota(s) de 10 reais;\n", nota);
        }

        if(valor >= 5);
        {
            nota= valor/5;
            valor= valor%5;
            printf("%d nota(s) de 5 reais;\n", nota);
        }

        if(valor >= 2);
        {
            nota= valor/2;
            valor= valor%2;
            printf("%d nota(s) de 2 reais;\n", nota);
        }

        if(valor >= 1);
        {
            nota= valor/1;
            valor= valor%1;
            printf("%d nota(s) de 1 real.\n\n", nota);
        }
system("pause");
return 0;
}
