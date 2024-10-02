/*Escreva um programa que leia um número inteiro postivo n e calcule a soma de todos os números de 1 até n.*/

#include <iostream>
using namespace std;

int main()
{
    int n, soma = 0;
    cout << "Digite um número: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    cout << "A soma de " << n << " é: "<< soma;
}