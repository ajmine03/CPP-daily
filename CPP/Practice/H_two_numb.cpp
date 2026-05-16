#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    // double Res = (double)A/B;
    cout << "floor " << A << " / " << B << " = " << floor(A / (B * 1.0)) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(A / (B * 1.0)) << endl;
    cout << "round " << A << " / " << B << " = " << round(A / (B * 1.0)) << endl;
}