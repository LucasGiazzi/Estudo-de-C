/* Inverter um n�mero INTEIRO e POSITIVO
ex: 123 -> 321
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    int num, n1, n2, n3;

    printf("Escolha um n�mero INTEIRO e POSITIVO de tr�s digitos: ");
    scanf("%d", &num);

if(num>10){

n1= num%10;
num= num/10;
n2= num%10;
num= num/10;
n3= num%10;
num= num/10;

    printf("O valor invertido dos d�gitos s�o: %d%d%d! \n\n",n1,n2,n3);

}
system("pause");
return 0;
}
