// Problem: https://vjudge.net/contest/817699#problem/D
// Platform: Virtual Judge
// Created: 6/3/2026, 9:55:16 PM


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

        int b , p , f , h , c;
        int profit = 0;
        cin>>b>>p>>f>>h>>c;
        // while(b>=2 &&(f>=1||p>=1)){
        //     if(h>c && p>=1){
        //         profit += h;
        //         p = p - 1;
        //     }
        //     else if(c>h && f>=1){
        //         profit += c;
        //         f = f - 1;

        //     }

        //      b = b - 2;

        // }
        // cout<<profit<<endl;
       
        if(b>1){
            if(b%2!=0){
                b = (b-1);
            }
                b = b/2;
        }
        else
        {
            b = 0;
        }

        if(c>h){
            if(b>=f){
                b = b - f;
                profit = c * f;

            }
            else{
                profit = b * c;
                b = 0;
            }
            if(b>=p){
                profit =profit + h * p;
                b = b - p;
            }


            else{
                profit =profit + h * b;
                b = 0;
            }
        }
        else if(h>=c){
            if(b>=p){
                profit = h * p;
                b = b - p;
            }
            else{
                profit = h * b;
                b = 0;
            }
            if(b>=f){
                b = b - f;
                profit = profit + c * f;

            }
            else{
                
                profit = profit +  b * c;
                b = 0;
            }

        }


        cout<<profit<<endl;
    }

    return 0;
}


/* takes solving time 1 hour 15 min */

