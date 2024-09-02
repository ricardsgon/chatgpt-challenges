/*Crie um programa em C que simule um jogo de adivinha��o.*/

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
        printf("Escolha um n�mero!\n");
        printf("--> ");
        scanf("%d", &x);
        if (x == numero_aleatorio)
        {
            printf("Parab�ns, acertou o n�mero aleat�rio!");
            y = 0;
        }
        if (x > numero_aleatorio)
        {
            printf("N�mero escolhido � maior que o n�mero aleat�rio, tente novamente!\n");
            printf("\n");
        }
        if(x < numero_aleatorio){
            printf("N�mero escolhido � menor que o n�mero aleat�rio, tente novamente!\n");
            printf("\n");
        }
    } while (y == 1);
}
