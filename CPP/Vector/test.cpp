#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	long long r;
	cin>>r;
	
	long double x1 = 2 * M_PI * r;
	long double x2 = M_PI * r * r;
	cout<<fixed<<setprecision(6)<<x2<<" ";
	cout<<fixed<<setprecision(6)<<x1<<endl;
} 