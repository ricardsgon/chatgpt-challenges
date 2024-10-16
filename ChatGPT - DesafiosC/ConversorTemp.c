/*Crie um programa em C que funcione como um conversor de unidades. O programa deve permitir que o usuário converta entre diferentes tipos de unidades de medida.*/

#include <stdio.h>
#include <locale.h>

void convertorTemp(int x);
void convertorDist(int x);
void convertorPeso(int x);

int main()
{
    int menu, choice;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("CONVERTOR\n\n1 - Conversor de Temperatura\n2 - Conversor de Distância\n3 - Conversor de Peso\n4 - Sair\n");
        printf("--> ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("\n");
            do
            {
                printf("1 - Conversor de C° para F°\n2 - Conversor de F° para C°\n3 - Sair\n");
                printf("--> ");
                scanf("%d", &choice);
                if (choice != 3)
                {
                    convertorTemp(choice);
                }
            } while (choice != 3);
            break;
        case 2:
            printf("\n");
            do
            {
                printf("1 - Conversor de Metros para Quilômetros\n2 - Conversor de Quilômetros para Metros\n3 - Sair\n");
                printf("--> ");
                scanf("%d", &choice);
                if (choice != 3)
                {
                    convertorDist(choice);
                }
            } while (choice != 3);
            break;
        case 3:
            printf("\n");
            do
            {
                printf("1 - Conversor de Quilograma para Gramas\n2 - Conversor de Gramas para Quilogramas\n3 - Sair\n");
                printf("--> ");
                scanf("%d", &choice);
                if (choice != 3)
                {
                    convertorPeso(choice);
                }
            } while (choice != 3);
            break;
        }

    } while (menu != 4);
    return 0;
}

void convertorTemp(int x)
{
    float valor, resultado;

    switch (x)
    {
    case 1:
        printf("Insira o valor da temperatura em Celsius: ");
        scanf("%f", &valor);
        resultado = (valor * 1.8) + 32;
        printf("O valor em Fahrenheit vai ser: %.2f\n\n", resultado);
        break;
    case 2:
        printf("Insira o valor da temperatura em Fahrenheit: ");
        scanf("%f", &valor);
        resultado = (valor - 32) / 1.8;
        printf("O valor em Celsius vai ser: %.2f\n\n", resultado);
        break;
    }
}

void convertorDist(int x)
{
    float valor, resultado;
    switch (x)
    {
    case 1:
        printf("Insira o valor da distância em Metros: ");
        scanf("%f", &valor);
        resultado = valor / 1000;
        printf("O valor em Quilomêtros vai ser: %.2f\n\n", resultado);
        break;
    case 2:
        printf("Insira o valor da distância em Quilômetros: ");
        scanf("%f", &valor);
        resultado = valor * 1000;
        printf("O valor em Metros vai ser: %.2f\n\n", resultado);
        break;
    }
}

void convertorPeso(int x)
{
    float valor, resultado;
    switch (x)
    {
    case 1:
        printf("Insira o peso em Quilogramas: ");
        scanf("%d", &valor);
        resultado = valor * 1000;
        printf("Seu valor em Gramas vai ser: %.2f\n\n", resultado);
        break;
    case 2:
        printf("Insira o peso em Gramas: ");
        scanf("%d", &valor);
        resultado = valor / 1000;
        printf("Seu valor em Quilogramas vai ser: %.2f\n\n", resultado);
        break;
    }
}