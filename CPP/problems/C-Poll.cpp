#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	map<string,int>mp;
	for (int i = 0; i < n; ++i)
	{
		string name; cin>>name;
		mp[name]++;
	}

	vector<int>vct;

	for(auto i : mp){
		vct.push_back(i.second);
	}

	sort(vct.begin(),vct.end());
	reverse(vct.begin(),vct.end());

	for(auto i : vct){
		cout<<i<<endl;
	}


}