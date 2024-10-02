/*Implementar um programa em C que receba um número n e imprima os primeiros n números da sequência de Fibonacci.*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, arr[100];
    arr[0] = 0;
    arr[1] = 1;
    printf("Insira um número: ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}