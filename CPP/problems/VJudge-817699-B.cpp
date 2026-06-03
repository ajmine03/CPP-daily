
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


int main() {
   
   // int c = 1;
   // int n;cin>>n;
   // while(n--){
    string name;
    cin>>name;
    string a , b ;
    a = name;
    reverse(a.begin(), a.end());

    // cout<<name<<' '<<a<<endl;


    if(a == name){
        cout<<"No"<<endl;

    }
    else{
        cout<<"Yes"<<endl;
    }
     
    // c++;
    // cout<<c<<endl;


   // }
    return 0;
}

