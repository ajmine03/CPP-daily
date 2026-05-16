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
        // int sum = 0;
        int flag = 0;

        for (int i = 1; i <= A; i++)
        {
            if (A % i == 0)
            {
                flag++;
            }
        }
        if (flag <= 2)
        {
            cout << A << " eh primo" << endl;
        }
        else
        {
            cout << A << " nao eh primo" << endl;
        }
    }
}