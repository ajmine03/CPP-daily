// Problem: https://vjudge.net/contest/817699#problem/B
// Platform: Virtual Judge
// Created: 6/3/2026, 9:57:23 AM


// Virtual Judge Note:
// Standard I/O. Pay attention to time limits.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    fastio;
    

    string name;
    getline(cin,name);                  
    cout<<name<< endl;
    // int x = name.size();

    for (int i = 0; i < name.size(); ++i)
    {
        cout<< name[i] << endl;
    }
    
    
    return 0;
}




