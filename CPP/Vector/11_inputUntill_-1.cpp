#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        else
        {
            vector.push_back(x);
        }
    }
    int n = vector.size();
    cout << "size is : " << n << endl;

    cout << "Reverse : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << vector[i] << " ";
    }
}