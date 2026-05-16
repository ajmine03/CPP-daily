#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N; cin>> N;
	int m = N;
	int k; cin>> k;
	// vector<int>v;
	int a;
	int count = 0;
	while(N--){
		cin>>a;
		if(a>=k  && a<=m){
			count++;
		}
	}
	cout<<count<<endl;

} 	