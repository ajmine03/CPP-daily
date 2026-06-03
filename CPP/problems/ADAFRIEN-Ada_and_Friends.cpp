#include<bits/stdc++.h>
using namespace std;
int main(){
	int q,k; cin>>q>>k;
	map<string,long long>fnd;
	for (int i = 0; i < q; ++i)
	{
		string name ; long long cost;
		cin>>name;cin>>cost;

		fnd[name] += cost;
	}

	vector<long long>vct;
	for(auto i : fnd){
		vct.push_back(i.second);
	}
	sort(vct.begin(),vct.end());
	reverse(vct.begin(),vct.end());

	long long ans = 0;

	for(int i = 0;i<min((int)vct.size(),k);i++){
		ans += vct[i];
	}

	cout<<ans<<endl;


}