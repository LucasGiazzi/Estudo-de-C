#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    int x;
    printf("Qual a sua idade: ");
    scanf("%d", &x);

    if(18 <= x && 67 >= x){

        printf("Você pode doar sangue!\n\n");
   }else {
        printf("Você não pode doar sangue!\n\n");
    }
system("pause");
return 0;
}
