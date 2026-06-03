#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n];

	while(n--){

		int x;
		vector<int>vct;
		int sum = 0;
		for (int i = 0; i < 7; ++i)
		{
			cin>>x;
			vct.push_back(x);

			sort(vct.begin(),vct.end());
			
		
		}
		sum = -vct[0]-vct[1]-vct[2]-vct[3]-vct[4]-vct[5]+vct[6];
			cout<<sum<<endl;

		// for(auto i:vct){
		// 	cout<<i<<endl;
		// }


	}


}