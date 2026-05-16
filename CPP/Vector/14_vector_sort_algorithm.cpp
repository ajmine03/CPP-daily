#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n ;
	cin>>n;
	vector<int> vec;
	int x ;
	for(int i = 0 ; i<n;i++){
		cin>> x;
		vec.push_back(x);
	}
	cout << "====== OUTPUT ========"<<endl;
	for(int x : vec){
		cout<< x << endl;
	}
	cout << "====== Accending order ========"<<endl;
	sort(vec.begin(),vec.end());
	for(int x : vec){
		cout<< x << endl;
	}
	cout << "====== Dccending order ========"<<endl;
	sort(vec.begin(),vec.end(),greater<int>());
	for(int x : vec){
		cout<< x << endl;
	}


	return 0;

}