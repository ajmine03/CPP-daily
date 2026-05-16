#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A = 1;
    for (int i = 0; i < N; i++)
    {

        cout << A << " " << A * A << " " << A * A * A << endl;
        A = A + 1;
    }
    return 0;
}