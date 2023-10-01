#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int main(){
    string p="Sonal";
    stack<char>s;
    for (int i = 0; i <p.size(); i++)
    {
        s.push(p[i]);
    }
    string p2;
    for (int i = 0; i < p.size(); i++)
    {
        p2=p2+s.top();
        s.pop();
    }
    cout<<p2<<endl;
    
    return 0;
}