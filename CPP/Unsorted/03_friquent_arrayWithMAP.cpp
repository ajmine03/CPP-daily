/*

1100
1200
2100
2
1230
1100
1200
2300
12
2
1
10
15

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
   
    map<int,int>mp;
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;

        mp[num]++;
    }

    for(auto [keyy,valuee] : mp){
        cout<<keyy<<' '<<valuee<<endl;

    }


}