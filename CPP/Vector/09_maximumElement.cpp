#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 3, 4, 5, 2, 3};
    int max = vec[0];

    for (int value : vec)
    {
        if (max < value)
        {
            max = value;
        }
    }
    cout << "max = " << max << endl;
}