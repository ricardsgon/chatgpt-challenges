/*Crie um programa em C que calcule o fatorial de um n�mero inteiro positivo fornecido pelo usu�rio.*/
#include <stdio.h>
#include <locale.h>
unsigned long long calc(int x);
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Insira seu n�mero: ");
    scanf("%d", &numero);
    printf("Seu fatorial vai ser: %llu\n", calc(numero));
}

unsigned long long calc(int x)
{
    unsigned long long calcu = x;
    for(int i = 1; i < x; i++){
        calcu = calcu * i;
    }
    return calcu;
}