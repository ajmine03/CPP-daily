#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> Vec_name = {1, 2, 3, 4, 5};
    vector<int> Vec_name_2(5,2); //size,value
    cout << Vec_name[0] << endl;
    cout << Vec_name[1] << endl;

    cout << Vec_name_2[2] << endl;
    
}