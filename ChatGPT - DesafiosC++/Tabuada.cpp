/*Escreva um programa que leia um número inteiro positivo e exiba a tabuada desse número, de 1 a 10.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite um número: ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d: ", n, i);
        cout << n * i << '\n';
    }
}