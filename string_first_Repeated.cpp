#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
  int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int ,int >mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for (auto it =mp.begin();it!=mp.end();it++)
        {
             cout<<it->first<<"  "<<it->second<<endl;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>1){
                return arr[i];
            }
        }
        
        return -1;
    }
  
   
int main(){
    int arr[]={11,24,33,33,55,24,44,56,77};
    cout<<firstRepeated(arr,8);  
    return 0;
}  