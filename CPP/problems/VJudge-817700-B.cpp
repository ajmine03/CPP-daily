// Problem: https://vjudge.net/contest/817700#problem/B
// Platform: Virtual Judge
// Created: 6/5/2026, 11:22:51 AM


// Virtual Judge Note:
// Standard I/O. Pay attention to time limits.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    fastio;
    
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            v.push_back(x);

        }
        sort(v.begin(),v.end());
        int mini = (v.back() - v.front()) * 2;
        cout<<mini<<endl;
        
    }
    
    return 0;
}


/* Manual testing required */

