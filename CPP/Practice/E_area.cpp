#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double Pi = 3.141592653;
    float A;
    cin >> A;
    cout << fixed << setprecision(9) << A * A * Pi << endl;
}
