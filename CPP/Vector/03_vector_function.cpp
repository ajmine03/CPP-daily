


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>name = {1,2,3,4,5,6};
    cout<<"size = "<<name.size()<<endl; //size func
    
    name.push_back(9); // push element at the end;(function)
    cout << "after push back size is = " << name.size() << endl;
    cout << "after push back capacity is = " << name.capacity() << endl;

    name.pop_back(); //delete last element(function)
    cout << "after pop back size is = " << name.size() << endl;

    cout << "front element is " << name.front() << endl; // front(function)
    cout << "back element is " << name.back() << endl;   // back (function)
    cout << " element is " << name.at(3) << endl;   //at=>index (function)
}