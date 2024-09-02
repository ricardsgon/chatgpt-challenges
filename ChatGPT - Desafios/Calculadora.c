/*Crie uma calculadora em C*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int soma(int x, int y);

int sub(int x, int y);

int mult(int x, int y);

float divs(float x, float y);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int num1, num2;
    int menu;

    do
    {
        printf("Escolha dois números: ");
        scanf("%d %d", &num1, &num2);
        printf("\n");
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            int somas = soma(num1, num2);
            printf("Seu resultado vai ser: %d\n", somas);
            break;
        case 2:
            int subs = sub(num1, num2);
            printf("Seu resultado vai ser: %d\n", subs);
            break;
        case 3:
            int mults = mult(num1, num2);
            printf("Seu resultado vai ser: %d\n", mults);
            break;
        case 4:
            if(num2 == 0){
                printf("Dividendo inválido.\n");
                break;
            }
            float div = divs(num1, num2);
            printf("Seu resultado vai ser: %.2f\n", div);
            break;
        }
    } while (menu < 5);
    return 0;
}

//Função Divisão.
float divs(float x, float y)
{
     return x / y;
}

//Função Soma.
int soma(int x, int y)
{
    return x + y;
}

//Função Subtração.
int sub(int x, int y)
{
    return x - y;
}

//Função Multiplicação
int mult(int x, int y){
    return x * y;
}