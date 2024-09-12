/*Crie um programa em C que faça operações matemáticas com frações.*/

#include <stdio.h>
#include <locale.h>

typedef struct
{
    int numerador;
    int denominador;
} fracao;

void calc(fracao frac[]);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int choice;
    fracao Frac[2];
    float frac1, frac2;
    do
    {
        printf("Calculadora de Frações\n\n1 - Inserir valores\n2 - Calcular\n3 - Sair\n");
        printf("--> ");
        scanf("%d", &choice);
        getchar();
        printf("\n");
        switch (choice)
        {
        case 1:
            for (int i = 0; i < 2; i++)
            {
                printf("Digite o numerador/denominador da fração %d: ", i + 1);
                scanf("%d %d", &Frac[i].numerador, &Frac[i].denominador);
                while (Frac[i].denominador == 0)
                {
                    printf("Denominador não pode ser 0. Digite novamente: ");
                    scanf("%d", &Frac[i].denominador);
                }
            }
            printf("\n");
            break;
        case 2:
            calc(Frac);
            break;
        }
    } while (choice != 3);
}

void calc(fracao frac[])
{
    int choice;
    int num_result, den_result;
    do
    {
        printf("1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            if (frac[0].denominador == frac[1].denominador)
            {
                num_result = frac[0].numerador + frac[1].numerador;
                printf("Resultado: %d/%d\n\n", num_result, frac[0].denominador);
            }
            else
            {
                num_result = (frac[0].numerador * frac[1].denominador) + (frac[1].numerador * frac[0].denominador);
                den_result = frac[0].denominador * frac[1].denominador;
                printf("Resultado: %d/%d\n\n", num_result, den_result);
            }
            break;

        case 2:
            if (frac[0].denominador == frac[1].denominador)
            {
                num_result = frac[0].numerador - frac[1].numerador;
                printf("Resultado: %d/%d\n\n", num_result, frac[0].denominador);
            }
            else
            {
                num_result = (frac[0].numerador * frac[1].denominador) - (frac[1].numerador * frac[0].denominador);
                den_result = frac[0].denominador * frac[1].denominador;
                printf("Resultado: %d/%d\n\n", num_result, den_result);
            }
            break;
        case 3:
            num_result = (frac[0].numerador * frac[1].numerador);
            den_result = (frac[1].denominador * frac[0].denominador);
            printf("Resultado: %d/%d\n\n", num_result, den_result);
            break;
        case 4:
            num_result = (frac[0].numerador * frac[1].denominador);
            den_result = (frac[0].denominador * frac[1].numerador);
            printf("Resultado: %d/%d\n\n", num_result, den_result);
            break;
        }
    } while (choice != 5);
}