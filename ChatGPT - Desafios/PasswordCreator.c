/*Crie um programa em C que gere senhas aleat�rias com base nas prefer�ncias do usu�rio.*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

void config(int *x, int *y, int *z);

void
int main()
{
    int menu;
    int z, x, y;
    z = x = y = 0;

    do
    {
        printf("Criador de Senha\n1 - Configura��o\n2 - Criar senha\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            config(&x, &y, &z);
            break;
        case 2:

        }
    } while (menu != 3);
}
void config(int *x, int *y, int *z)
{
    printf("Incluir caracteres de A para Z(1 - Sim, 2 - N�o): ");
    scanf("%d", x);
    printf("Incluir n�meros(1 - Sim, 2 - N�o): ");
    scanf("%d", y);
    printf("Incluir simbolos(1 - Sim, 2 - N�o): ");
    scanf("%d", z);
}