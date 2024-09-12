/*Crie um programa em C que gere senhas aleatórias com base nas preferências do usuário.*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SENHA 250

void config(int *x, int *y, int *z, int *g);

void criar(int x, int y, int z, int g);
int main()
{
    int menu;
    int z, x, y, g;
    z = 0;
    x = 0;
    y = 0;
    g = 0;

    do
    {
        printf("Criador de Senha\n1 - Configuração\n2 - Criar senha\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        getchar();
        printf("\n");
        switch (menu)
        {
        case 1:
            config(&x, &y, &z, &g);
            break;
        case 2:
            criar(x, y, z, g);
            break;
        }
    } while (menu != 3);
}

void config(int *x, int *y, int *z, int *g)
{
    printf("Comprimento da Frase: ");
    scanf("%d", g);
    printf("Incluir caracteres de A para Z(1 - Sim, 2 - Não): ");
    scanf("%d", x);
    printf("Incluir números(1 - Sim, 2 - Não): ");
    scanf("%d", y);
    printf("Incluir simbolos(1 - Sim, 2 - Não): ");
    scanf("%d", z);
    printf("\n");
}

void criar(int x, int y, int z, int g)
{
    srand(time(NULL));

    char senha[MAX_SENHA];
    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVZY";
    char num[] = "1234567890";
    char simb[] = "@#$^&*()-_=+[]{}|;:',.<>?/";
    char caracteres[MAX_SENHA] = "";

    if (x == 1)
    {
        strcat(caracteres, alfabeto);
    }
    if (y == 1)
    {
        strcat(caracteres, num);
    }
    if (z == 1)
    {
        strcat(caracteres, simb);
    }
    else
    {
        printf("Configuração não inicializada, favor retornar ao menu.\n");
        return;
    }
    for (int i = 0; i < g; i++)
    {
        senha[i] = caracteres[rand() % strlen(caracteres)];
    }
    senha[g] = '\0';
    printf("Sua senha será: %s\n\n", senha);
}