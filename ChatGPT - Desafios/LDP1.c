/*Crie uma calculadora em C*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void soma(int x, int y);

void sub(int x, int y);

void mult(int x, int y);

void divs(float x, float y);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int num1, num2;
    int menu;

    do
    {
        printf("Escolha dois números: ");
        scanf("%d %d", &num1, &num2);
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            soma(num1, num2);
            break;
        case 2:
            sub(num1, num2);
            break;
        case 3:
            mult(num1, num2);
            break;
        case 4:
            divs(num1, num2);
            break;
        }
    } while (menu < 5);
    return 0;
}

//Função Divisão.
void divs(float x, float y)
{
    if (y == 0)
    {
        printf("Divisão por 0 não é permitido.\n");
    }
    else
    {
        float divs = x / y;
        printf("The div is: %.2f\n", divs);
    }
}

//Função Soma.
void soma(int x, int y)
{
    int sum;
    sum = x + y;
    printf("The sum is: %d\n", sum);
}

//Função Subtração.
void sub(int x, int y)
{
    int dif;
    dif = x - y;
    printf("The dif is: %d\n", dif);
}

//Função Multiplicação
void mult(int x, int y)
{
    int mul;
    mul = x * y;
    printf("The mult is: %d\n", mul);
}