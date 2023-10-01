#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void insertAtBottom(stack <int> &s,int ele){
       if (s.empty())
       {
           s.push(ele);
           return;
       }
       int temp=s.top();
       s.pop();
       insertAtBottom(s,ele);
       s.push(temp);       
}



int main(){
    stack<int>s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);
   
    cout<<endl;
    insertAtBottom(s,66);
    for (int i = 0; i <6; i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}