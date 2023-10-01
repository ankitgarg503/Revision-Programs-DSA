#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findMiddle(stack<int>& s,int count){
     if(count>s.size()/2){
           int ele=s.top();           
           return ele;
       }
       int temp=s.top();
       s.pop();
       int res=findMiddle(s,count+1);
       s.push(temp);
       return res;

}
void deleteMiddle(stack<int>& s,int count){
       if(count>s.size()/2){
           s.pop();
           return;
       }
       int temp=s.top();
       s.pop();
       deleteMiddle(s,count+1);
       s.push(temp);

}



int main(){
    stack<int>s;
    s.push(22);
    s.push(62);
    s.push(52);
    s.push(42);
    s.push(32);
    s.push(24);
    s.push(14);
    //  deleteMiddle(s,0);
     int ans=findMiddle(s,0);
     cout<<ans<<endl;
    // for (int i = 0; i< ((s.size()/2)+1); i++)
    // {
    //     s.pop();
    // }
    // cout<<"Middle element of stack="<<s.top()<<endl;
    int p=s.size();
    for (int i = 0; i <p; i++)
    {
         cout<<s.top()<<" ";
         s.pop();
    }
    
    
    return 0;
}