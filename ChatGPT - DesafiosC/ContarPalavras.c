/*Crie um programa em C que conte o número de palavras em uma frase inserida pelo usuário.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    int comprimento = strlen(frase);
    int contador;
    int check;

    for (int i = 0; i < comprimento; i++)
    {
        if (isspace(frase[i]))
        {
            check = 0;
        }
        else
        {
            contador++;
        }
    }

    printf("Tamanho da frase: %d\n", contador);
    return 0;
}