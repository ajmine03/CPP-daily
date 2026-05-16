#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<char> vector_name(4, 'a');

    for (char i : vector_name)
    {
        cout << i << endl;
    }
    return 0;
}