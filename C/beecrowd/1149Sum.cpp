#include <iostream>
using namespace std;

int main()
{
    int N, M; // n big m small
    int sum = 0;
    cin >> N; // big taken
    while (1)
    {
        cin >> M; // cheaking m valid or not
        if (M <= 0)
        {
            continue;   
        }
        else
        {

            // tested ok

            for (int i = M; i <= N; i++) // M small N big
            {
                sum = sum + i;
            }
            break;
        }
    }
    cout << sum + M << endl;
}