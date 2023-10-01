#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(9);
    s.insert(2);
    s.insert(13);
    s.insert(1);
    s.insert(4);
    cout<<s.size()<<endl;
    for (auto it=s.begin(); it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    auto it=s.find(111);
    if(it!=s.end()){
        cout<<"Element is PResent!"<<endl;
    }
    else{
        cout<<"elment not present!"<<endl;
    }
    
    return 0;
}