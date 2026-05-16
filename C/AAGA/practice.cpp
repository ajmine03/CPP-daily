#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        i++;
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}