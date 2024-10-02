/*Implementar um programa em C que receba um número n e imprima os primeiros n números da sequência de Fibonacci.*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    long *arr = NULL;
    printf("Insira a quantidade de números da sequência de Fibonnaci que deseja ver: ");
    scanf("%d", &num);
    arr = (long *)malloc(sizeof(long) * num);
    arr[0] = 0;
    arr[1] = 1;
    if (num == 1)
    {
        printf("%ld", arr[0]);
    }
    else if (num == 2)
    {

        printf("%ld %ld", arr[0], arr[1]);
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        for (int i = 0; i < num; i++)
        {
            printf("%ld ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}