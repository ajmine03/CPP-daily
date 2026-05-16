#include <iostream>
using namespace std;
int main()
{
    int ar[10];
    int ars[10];
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> ar[i];
        if (ar[i] <= 10)
        {
            ar[j] = ar[i];
            j++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << ar[i] << endl;
    }
}