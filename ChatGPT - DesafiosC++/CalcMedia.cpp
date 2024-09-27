/*Escrever um programa que calcule a m�dia de notas de um aluno. O programa deve permitir que o usu�rio insira notas at� que ele decida parar, e deve informar se o aluno foi aprovado ou reprovado com base na m�dia.*/

#include <iostream>
using namespace std;

int main()
{
    float a, contadorNota = 0, sum = 0;
    char c;
    do
    {
        cout << "Adicionar mais uma nota?(s/n): ";
        cin >> c;
        if (c == 'n')
        {
            break;
        }
        contadorNota++;
        cout << "Nota: ";
        cin >> a;
        sum += a;
    } while (c != 'n');
    double media = sum / contadorNota;
    printf("A m�dia das notas �: %.2lf\n", media);
    if (media >= 7)
    {
        cout << "Situa��o: Aprovado" << '\n';
    }
    else
    {
        cout << "Situa��o: Reprovado" << '\n';
    }
    return 0;
}