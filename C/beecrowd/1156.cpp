// https: // judge.beecrowd.com/en/problems/view/1156
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S = 0;
    int i = 1;
    int j = 1;
    while (1)
    {
        S = i / (j * 1.0) + S;
        i = i + 2;
        j = j * 2;

        if (i == 39)
        {
            break;
        }
    }
    cout << fixed << setprecision(2) << S << endl;
}