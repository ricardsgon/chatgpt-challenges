/*Escreva um programa em C++ que funcione como uma calculadora simples. Ele deve permitir ao usuário realizar operações básicas como adição, subtração, multiplicação e divisão.*/

#include <iostream>
using namespace std;

int main()
{
    char operacao;
    double num, num2;
    cout << "Insira dois números: ";
    cin >> num >> num2;
    cout << "Escolha qual operação será utilizada(+, -, *, /): ";
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