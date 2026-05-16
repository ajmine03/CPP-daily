#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    int i = 0;
    while (1)
    {
        cin >> N;
        if (N < 0)
        {
            break;
        }
        sum = N + sum;
        i++;
    }

    float avg = sum / (i * 1.0);
    cout << fixed << setprecision(2) << avg << endl;
    // cout << fixed << setprecision(2) << avg << endl;
}