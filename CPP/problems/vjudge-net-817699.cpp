// Problem: https://vjudge.net/contest/817699#problem
// Platform: VJUDGE-NET
// Created: 6/3/2026, 8:25:43 PM

#include <bits/stdc++.h>
using namespace std;

int rombos(int n) {
    // base case
    if (n == 1) return 1;
    // if (n == 2) return (1 * 4 + 1);

    // recursive step
    return 4*(n-1) + rombos(n-1);
}

int main(){
    int n;cin>>n ;
    int x = rombos(n);
    cout<<x<<endl;
}


//takes 2 hour 21 mins ;