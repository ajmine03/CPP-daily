#include<iostream>
#include<iomanip>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int N; cin>> N;
	vector<int>vec;
	int a;
	while(N--){
		cin>>a;
		vec.push_back(a);
	}

	for(int i = vec.size() - 1; i>=0; i -- ){
		cout<<vec[i];
		if(i != 0){
			cout<<" ";
		}
		else{
			cout<<endl;
		}

	}


} 