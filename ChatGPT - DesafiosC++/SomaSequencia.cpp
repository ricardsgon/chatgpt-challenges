/*Escreva um programa que leia um n�mero inteiro postivo n e calcule a soma de todos os n�meros de 1 at� n.*/

#include <iostream>
using namespace std;

int main()
{
    int n, soma = 0;
    cout << "Digite um n�mero: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        soma += i;
    }
    cout << "A soma de " << n << " �: "<< soma;
}