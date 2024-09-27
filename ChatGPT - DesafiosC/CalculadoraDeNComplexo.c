/*Crie um programa em C que implemente uma calculadora para realizar operações básicas com números complexos.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int real;
    int imaginario;
} numimagreal;

numimagreal soma(numimagreal p1, numimagreal p2);
numimagreal subtracao(numimagreal p1, numimagreal p2);
numimagreal multiplicacao(numimagreal p1, numimagreal p2);
numimagreal divisao(numimagreal p1, numimagreal p2);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opc;
    numimagreal num[2];
    do
    {
        printf("CALCULADORA DE NÚMEROS COMPLEXOS\n\n0 - Mudar valores\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
        printf("--> ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 0:
            for (int i = 0; i <= 1; i++)
            {
                printf("Insira o valor real para Z%d(a): ", i + 1);
                scanf("%d", &num[i].real);
                printf("Insira o valor imaginário para Z%d(bi): ", i + 1);
                scanf("%d", &num[i].imaginario);
            }
            printf("\n");
            break;
        case 1:
            numimagreal somas = soma(num[0], num[1]);
            printf("O resultado vai ser: %d + %di\n", somas.real, somas.imaginario);
            printf("\n");
            break;
        case 2:
            numimagreal subs = subtracao(num[0], num[1]);
            printf("O resultado vai ser: %d + %di\n", subs.real, subs.imaginario);
            printf("\n");
            break;
        case 3:
            numimagreal mults = multiplicacao(num[0], num[1]);
            printf("O resultado vai ser: %d + %di\n", mults.real, mults.imaginario);
            printf("\n");
            break;
        case 4:
            numimagreal divs = divisao(num[0], num[1]);
            printf("O resultado vai ser: %d + %di\n", divs.real, divs.imaginario);
            printf("\n");
            break;
        }
    } while (opc != 5);
}
numimagreal soma(numimagreal p1, numimagreal p2)
{
    numimagreal resultado;
    resultado.real = (p1.real) + (p2.real);
    resultado.imaginario = (p1.imaginario) + (p2.imaginario);
    return resultado;
}

numimagreal subtracao(numimagreal p1, numimagreal p2)
{
    numimagreal resultado;
    resultado.real = p1.real - p2.real;
    resultado.imaginario = p1.imaginario - p2.imaginario;
    return resultado;
}
numimagreal multiplicacao(numimagreal p1, numimagreal p2)
{
    numimagreal resultado;
    resultado.real = (p1.real * p2.real) - (p1.imaginario * p2.imaginario);
    resultado.imaginario = (p1.imaginario * p2.real) + (p1.real * p2.imaginario);
    return resultado;
}
numimagreal divisao(numimagreal p1, numimagreal p2)
{
    numimagreal resultado;
    int potencia = 2;
    int divisor = pow(p2.real, potencia) + pow(p2.imaginario, potencia);
    resultado.real = (p1.real * p2.real) + (p1.imaginario * p2.imaginario);
    resultado.real /= divisor;
    resultado.imaginario = (p1.imaginario * p2.real) - (p1.real * p2.imaginario);
    resultado.imaginario /= divisor;
    return resultado;
}