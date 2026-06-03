#include<bits/stdc++.h>
using namespace std;
int main(){
    
    //map declaretion
	map<int,int>map_name; //<key,value> key must be unique
    map<int,int>map_nam2 ={{1,2},{2,2}};
    map_name[1002] =  01;
    map_name[1003] = 15;
    map_name[1004] = 10;
    map_name[1010] =  02;

    //map access and size;
    cout<<map_name[1003]<<endl;
    cout<<map_name.size()<<endl;

    //map traverse 1
    for(auto item : map_name){
        //item ta pair hisabe kaj korbe
        cout<<item.first <<' '<< item.second<<endl;
    }
    
    //map traverse 2
    for(auto [keyy,valuee] : map_name){
        cout<<keyy<<' '<<valuee<<endl;

    }
    

    //key exist or not checker
    int IskeyExist = map_name.count(1002);
    cout<<IskeyExist<<endl; //count use korle map er size barbena


    //map.erase(key)
    //map.clear() => full clear;
    








}