/*Crie um programa em C que verifique se um número é primo ou não.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

void calc(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Insira um número: ");
    scanf("%d", &x);
    calc(x);

    return 0;
}

void calc(int x)
{
    int flag;
    if(x <= 1 || x == 0){
        flag = 1;
    }
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("O número não é primo.\n");
    }
    else
    {
        printf("O número é primo.");
    }
}