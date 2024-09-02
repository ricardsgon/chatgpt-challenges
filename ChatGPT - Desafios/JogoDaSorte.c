/*Crie um programa em C que simule um jogo de adivinhação.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero_aleatorio = rand() % 100 + 1;
    int x;
    int y = 1;
    do
    {
        printf("Escolha um número!\n");
        printf("--> ");
        scanf("%d", &x);
        if (x == numero_aleatorio)
        {
            printf("Parabéns, acertou o número aleatório!");
            y = 0;
        }
        if (x > numero_aleatorio)
        {
            printf("Número escolhido é maior que o número aleatório, tente novamente!\n");
            printf("\n");
        }
        if(x < numero_aleatorio){
            printf("Número escolhido é menor que o número aleatório, tente novamente!\n");
            printf("\n");
        }
    } while (y == 1);
}
