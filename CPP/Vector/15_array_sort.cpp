#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> vec = {1,4,5,6,7,3,1,2};
	int array[10] = {1,4,5,6,7,3,1,2};
	int x ;
	
	
	cout << "====== Accending order ========"<<endl;
	sort(array + 3,array+8); // sort from 3 index to 8
	
	for (int i = 0; i < 8; ++i)
	{
		cout<<array[i]<<endl;
	}
	

	return 0;

}