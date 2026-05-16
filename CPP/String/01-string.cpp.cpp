#include<bits/stdc++.h>
using namespace std;
int main(){

    // string declaration 

    string name;
    //cin>> name ;                      (space sara input nibe)
    getline(cin,name);                  // space soho input nibe.
    cout<<name<< endl;

    //String Length
    cout<< name.size() <<endl;

    //traverse 1
    
    /*
    for (int i = 0; i < name.size(); ++i)
    {
        cout<< name[i] << endl;
    }
    */
 
    //traverse 2
    for(auto& i : name ){
        cout<<i<<endl;
    }

}