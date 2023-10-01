#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
     vector<int>ans(n,-1);
     stack<int>s;
     for(int i=n-1;i>=0;i--){
         int ele=arr[i];
         while(!s.empty() and ele>=s.top()){
                 s.pop();
         }
         
         if(!s.empty()){
             int ele=s.top();
             ans[i]=ele;
         }
           s.push(ele);
     }
     for(int i=n-1;i>=0;i--){
         int ele=arr[i];
         while(!s.empty() and ele>=s.top()){
                 s.pop();
         }
         
         if(!s.empty()){
             int ele=s.top();
             ans[i]=ele;
         }
           s.push(ele);
     }
     return ans;
}

int main(){
    vector<int>v;
    vector<int>ans;
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    ans=nextGreaterElement(v,5);
    
    for (int i = 0; i < ans.size(); i++)
    {
         cout<<ans[i]<<"  ";
    }cout<<endl;
    
         
}