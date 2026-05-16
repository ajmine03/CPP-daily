#include <iostream>
using namespace std;
int main()
{

    while (1)
    {
        int N;
        int sum = 0;
        cin >> N;
        if (N == 0)
        {
            break;
        }
        if (N % 2 != 0)
        {
            N = N + 1;
        }

        for (int i = 0; i < 5; i++)
        {
            sum = N + sum;
            N = N + 2;
            // cout << sum << endl;
        }
        cout << sum << endl;
    }
}