/*Input Format

5

1 2 4 3 4

Constraints

no elements are greater than 1000

Output Format

1 1

2 1

4 2

3 1

*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int n;cin>>n;

//     pair<int,int> p[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin>>p[i].first;

//     }
    
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   
    unordered_map<int,int>mp;
    int n;
    cin>>n;

    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        cout<<num<<endl;

        mp[num]++;
    }

    for(auto [keyy,valuee] : mp){
        cout<<keyy<<' '<<valuee<<endl;

    }


}