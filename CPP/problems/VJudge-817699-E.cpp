// Problem: https://vjudge.net/contest/817699#problem/E
// Platform: Virtual Judge
// Created: 6/4/2026, 2:20:17 PM


// Virtual Judge Note:
// Standard I/O. Pay attention to time limits.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    fastio;
    
    int n;cin>>n;
    while(n--){
        int n , x , y , d ; cin>>n>>x>>y>>d;
        int positive = d;
        int negetive = -1 * d;
        int forward_step = 0;
        int forward_x = x;
        int backward_step = 0;
        int backward_x = x;

        // cout<<"forward_step"<<endl;
        
        while(1){

            if(forward_x == y){
                break;
            }
            if(forward_x>=n){
                forward_x = n;
                d = negetive;
            }
            if(forward_x<1){
                forward_x = 1;  
                d = positive;
            }
            
            forward_x = forward_x + d;
            if(forward_step>=n){
                forward_step = -1;
                break;
            }
            forward_step++;
            // cout<<"x = "<<forward_x<<endl;
            
            
        }
        // cout<<"backward_step"<<endl;
        
        d = negetive;
        while(1){
            if(backward_x == y){
                break;
            }


            backward_x = backward_x + d;

            if(backward_x<=1){
                backward_x = 1;  
                d = positive;
            }
            if(backward_x>=n){
                backward_x = n;
                d = negetive;
            }
            if(backward_step>=n){
                backward_step = -1;
                break;
            }
            backward_step++;
            // cout<<"x = "<<backward_x<<endl;
            
            
        }
        if(forward_step>backward_step){
            cout<<backward_step<<endl;
        }
        else if(forward_step<=backward_step){
            cout<<forward_step<<endl;
        }
        else if(forward_step == -1 && backward_step == -1 ){
            cout<<-1<<endl;
        }

    }
    
    return 0;
}


/* solving takes 1 hour 45 min*/ 









// TLE KHAISEEEEEEEEEEEEE

