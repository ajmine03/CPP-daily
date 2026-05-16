#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 3, 4, 5, 2, 3};
    int sum = 0;
    int even_count = 0;
    int odd_count = 0;
    for (int value : vec)
    {
        if (value % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "even = " << even_count << "\n"
         << "Odd = " << odd_count << endl;
}