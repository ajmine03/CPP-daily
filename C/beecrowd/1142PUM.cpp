#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = 1;
    int m = 4;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (n == m)
            {
                m = m + 4;
                n = n + 1;
            }
            cout << n << " ";

            n++;
        }
        cout << "PUM\n";
    }

    return 0;
}