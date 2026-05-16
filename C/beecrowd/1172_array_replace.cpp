#include <iostream>
using namespace std;
int main()
{
    int ar[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> ar[i];
        if (ar[i] < 1)
        {
            ar[i] = 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << ar[i] << endl;
    }
}