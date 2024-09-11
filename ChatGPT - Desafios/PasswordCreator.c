/*Crie um programa em C que gere senhas aleatórias com base nas preferências do usuário.*/

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
        printf("Criador de Senha\n1 - Configuração\n2 - Criar senha\n3 - Sair\n");
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
    printf("Incluir caracteres de A para Z(1 - Sim, 2 - Não): ");
    scanf("%d", x);
    printf("Incluir números(1 - Sim, 2 - Não): ");
    scanf("%d", y);
    printf("Incluir simbolos(1 - Sim, 2 - Não): ");
    scanf("%d", z);
}