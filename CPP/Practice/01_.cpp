#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    t = 2 * t ;
    int ar[t];
    int cnt = 0;
    for(int i = 0;i<t;i++){
        cin>>ar[i];
    }
    for (int i = 0; i < t; i++)
    {
        if(ar[i] == ar[i+2]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}