// Problem: https://vjudge.net/contest/817699#problem/C
// Platform: Virtual Judge
// Created: 6/3/2026, 9:22:15 PM


// Virtual Judge Note:
// Standard I/O. Pay attention to time limits.
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;cin>>n;
    int mp,lp;
    int close = 3 , open = 3 , ud = 4 , enter = 5, ext = 5,takes = 1;
    
    

    while(n--){
        cin>>mp>>lp;

        if(mp>lp){
            int t = (mp - lp)*ud + open + enter + close + mp*ud + open +ext;
            cout<<"Case "<<takes<<": "<<t<<endl;
        }
        else if(mp<lp){
            int t =  (lp - mp)*ud + open + enter + close + mp*ud + open +ext;
            cout<<"Case "<<takes<<": "<<t<<endl;
        }
        else if(mp = lp){
            int t = open + enter + close + mp*ud + open +ext;
            cout<<"Case "<<takes<<": "<<t<<endl;
        }
        takes ++;

    }
}


/*takes solving time 21 min*/

