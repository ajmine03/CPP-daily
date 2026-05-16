#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int A;
        cin >> A;
        int sum = 0;

        for (int i = 1; i < A; i++)
        {
            if (A % i == 0)
            {
                sum = i + sum;
            }
        }
        if (sum == A)
        {
            cout << A << " eh perfeito" << endl;
        }
        else
        {
            cout << A << " nao eh perfeito" << endl;
        }
    }
}