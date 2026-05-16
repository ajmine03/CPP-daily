#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n = m+1;
    string name[n];
    while(n--){
        getline(cin,name[n]); 
    }
     
    for(int i = 0;i<m;i++){
        cout<<name[i]<<endl;
    }

}