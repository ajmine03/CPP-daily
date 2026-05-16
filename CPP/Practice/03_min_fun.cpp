#include <iostream>
using namespace std;

int minNumb(int a, int b)
{

    if (a > b)
    {
        return b;
    }
    if (b > a)
    {
        return a;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << minNumb(a, b) << endl;
}