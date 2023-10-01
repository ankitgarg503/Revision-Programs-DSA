#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
  string firstRepeated(string s) {
        // code here
        string dum;
        unordered_map<string ,int >mp;
        for(int i=0;i<s.size();i++){
             if(s[i]==' '){
                 mp[dum]++;
                 dum="";    
             }
             else{
                dum=dum+s[i];
             }
        }
        for (auto it =mp.begin();it!=mp.end();it++)
        {
             cout<<it->first<<"  "<<it->second<<endl;
        }
        for (auto it =mp.begin();it!=mp.end();it++)
        {
             if(mp[it->first]>1){
                return it->first;
             }
        }
        //  for(int i=0;i<s.size();i++){
        //      if(mp["My"]>1){
        //          return i+1;
        //      }
        //  }
        
        return "";
    }
  
   
int main(){
    string s=" My name is My name ";
    cout<<firstRepeated(s);  
    return 0;
}  