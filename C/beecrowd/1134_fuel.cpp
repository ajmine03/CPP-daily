#include <iostream>
using namespace std;

int main()
{
    int Alcohol = 0;
    int Gasoline = 0;
    int Disel = 0;

    while (1)
    {
        int N;
        cin >> N;
        if (N == 4)
        {
            break;
        }
        if (N == 1)
        {
            Alcohol = Alcohol + 1;
        }
        if (N == 2)
        {
            Gasoline = Gasoline + 1;
        }
        if (N == 3)
        {
            Disel = Disel + 1;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcohol << endl;
    cout << "Gasolina: " << Gasoline << endl;
    cout << "Diesel: " << Disel << endl;

    return 0;
}