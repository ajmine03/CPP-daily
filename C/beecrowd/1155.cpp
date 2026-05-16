// https: // judge.beecrowd.com/en/problems/view/1155
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S = 0;
    for (int i = 1; i <= 100; i++)
    {
        S = (1 / (i * 1.0)) + S;
    }
    cout << fixed << setprecision(2) << S << endl;
}