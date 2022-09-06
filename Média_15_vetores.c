/*Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a
média geral. Imprima também quantos alunos obtiveram uma nota maior que a média geral*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

    float vet[15], nota=0, soma=0, media;
    int i, cont=0;

    for(i=0; i<15; i++){
        printf("Insira a nota dos alunos: ");
        scanf("%f", &vet[i]);

        soma = soma+vet[i];
}

media= soma/15;

    for(i=0; i<15; i++){
        if(vet[i]>media){
        cont++;
        }
    }
printf("\n");
printf("Média geral = %.2f\n\n", media);

    printf("No total, %d alunos conseguiram tirar uma nota maior que a média geral da turma!\n\n", cont);

system("pause");
return 0;
}
