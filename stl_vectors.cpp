#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Size of vector "<<v.size()<<endl;
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    v.push_back(15);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // v.clear();
    cout<<"Size of vector "<<v.size()<<endl;
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<" Front Element "<<v.front()<<endl;
    cout<<" Last Element "<<v.back()<<endl;
    cout<<"elemen at indx 2 ="<<v.at(2)<<endl;

    return 0;
}