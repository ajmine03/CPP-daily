#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {1, 3, 4, 5, 2, 3};
    int sum = 0;
    for(int value : vec ){
        sum = sum + value;
    }

    cout << "sum = " << sum << endl;
}