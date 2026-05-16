#include<bits/stdc++.h>
using namespace std;
int main(){

    string name;
    getline(cin,name);  
    for(char &c : name){
    
    c = tolower(c);
    if(c == 'a'|| c == 'e'||c == 'i'||c == 'o'||c == 'u'){

        continue;
        
     }
     cout<<'.'<<c;
}
cout<<endl;
}