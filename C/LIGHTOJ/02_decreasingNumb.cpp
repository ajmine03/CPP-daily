#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1000;
    while (i >= 4)
    {
        cout << i << " " << i - 1 << " " << i - 2 << " " << i - 3 << " " << i - 4 << "\n";
        i = i - 5;
    }
    return 0;
}
