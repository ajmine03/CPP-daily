#include <iostream>
using namespace std;
int main()
{

    int N;
    cin >> N;
    while (N--)
    {
        int A, B, sum;
        cin >> A >> B;
        if (A % 2 == 0)
        {
            A = A + 1;
            sum = A;
            // cout << "A =" << A;
            // cout << "sum =" << sum;
        }
        else
        {
            sum = A;
            // cout << "A =" << A;
            // cout << "sum =" << sum;
        }
        int SUM = 0;
        for (int i = 0; i < B; i++)
        {
            SUM = sum + SUM;
            sum = 2 + sum;
            // cout << "SUM " << SUM << endl;
        }

        cout << "" << SUM << endl;
    }
}