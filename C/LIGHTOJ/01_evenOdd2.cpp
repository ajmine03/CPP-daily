#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long x;
    while (t--)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            cout << "even\n";
        }
        else
        {
            cout << "odd\n";
        }
    }
    return 0;
}
