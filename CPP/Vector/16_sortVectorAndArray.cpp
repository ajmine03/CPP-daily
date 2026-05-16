#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> vec = {1,4,5,6,7,3,1,2};
	int array[10] = {1,4,5,6,7,3,1,2};
	int x ;
	
	
	
	sort(array + 3,array+8); // array sort from 3 index to 8
	sort(vec.begin()+3,vec.begin()+8); // vector sort from 3 index to 8
	cout << "====== Array sort ========"<<endl;
	
	for (int i = 0; i < 8; i++)
	{
		cout<<array[i]<<endl;
	}
	cout << "====== Vector sort ========"<<endl;
	for (int x : vec)
	{
		cout<<x<<endl;
	}

	

	return 0;

}