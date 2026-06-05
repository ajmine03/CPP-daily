// Problem: https://vjudge.net/contest/817700#problem/A
// Platform: Virtual Judge
// Created: 6/4/2026, 8:59:46 PM

// Virtual Judge Note:
// Standard I/O. Pay attention to time limits.
#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl '\n'

int main()
{
    fastio;

    int T;
    cin >> T;
    int t = 1;
    while (T--)
    {
        int N;
        vector<int> v;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
        int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        
        cout<<"Case "<<t<<":"<<" "<< v.back()<<endl;
        t++;
    }

    return 0;
}

/* Manual testing required */
