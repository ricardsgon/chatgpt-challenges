/*Escreva um programa em C++ que funcione como uma calculadora simples. Ele deve permitir ao usu�rio realizar opera��es b�sicas como adi��o, subtra��o, multiplica��o e divis�o.*/

#include <iostream>
using namespace std;

int main()
{
    char operacao;
    double num, num2;
    cout << "Insira dois n�meros: ";
    cin >> num >> num2;
    cout << "Escolha qual opera��o ser� utilizada(+, -, *, /): ";
    cin >> operacao;
    switch (operacao)
    {
    case '+':
        cout << "Seu resultado vai ser: " << num + num2 << '\n';
        break;
    case '-':
        cout << "Seu resultado vai ser: " << num - num2 << '\n';
        break;
    case '*':
        cout << "Seu resultado vai ser: " << num * num2 << '\n';
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Divisor incorreto." << '\n';
            break;
        }
        else
        {
            cout << "Seu resultado vai ser: " << num / num2 << '\n';
            break;
        }
    }
}