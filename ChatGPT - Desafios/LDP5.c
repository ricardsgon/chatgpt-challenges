/*Crie um programa em C que calcule o fatorial de um n�mero inteiro positivo fornecido pelo usu�rio.*/
#include <stdio.h>
#include <locale.h>
int calc(int x);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Insira seu n�mero: ");
    scanf("%d", &numero);
    int calculo = calc(numero);
    printf("Seu fatorial vai ser: %d", calculo);
}

int calc(int x)
{
    int i, calcu = x;
    for(i = 1; i < x; i++){
        calcu = calcu * i;
    }
    return calcu;
}