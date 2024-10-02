/*Ache o maior número entre dois valores.*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Digite dois números: ";
    cin >> n1;
    cin >> n2;
    if (n1 > n2)
    {
        cout << "Número 1 é maior.";
    }
    else
    {
        cout << "Número 2 é maior.";
    }
}