/*Escrever um programa que calcule a média de notas de um aluno. O programa deve permitir que o usuário insira notas até que ele decida parar, e deve informar se o aluno foi aprovado ou reprovado com base na média.*/

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
    printf("A média das notas é: %.2lf\n", media);
    if (media >= 7)
    {
        cout << "Situação: Aprovado" << '\n';
    }
    else
    {
        cout << "Situação: Reprovado" << '\n';
    }
    return 0;
}