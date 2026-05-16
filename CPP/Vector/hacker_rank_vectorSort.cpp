#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N; cin>> N;
	vector<int>vec;
	int n;
	while(N--){
		cin>>n;
		vec.push_back(n);
	}
	sort(vec.begin(),vec.end());
	for(auto i : vec){
		cout<<i<<" ";
	}
	cout<<endl;

} 