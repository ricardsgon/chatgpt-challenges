/*Ache o maior n�mero entre dois valores.*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Digite dois n�meros: ";
    cin >> n1;
    cin >> n2;
    if (n1 > n2)
    {
        cout << "N�mero 1 � maior.";
    }
    else
    {
        cout << "N�mero 2 � maior.";
    }
}