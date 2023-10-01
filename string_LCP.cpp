#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 string longestCommonPrefix(vector<string>& strs) {
        string prefix,current;
        prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            current=strs[i];
            int j=0;
            while(j<prefix.size() && j<current.size() && prefix[j]==current[j]){
                j++;
            }
            prefix=prefix.substr(0,j);
        }
        if(prefix.size()==0){
            return "";
        }
        return prefix;
        
    }

int main(){
    vector<string>v;
    v.push_back("code");
    v.push_back("codings");
    v.push_back("coding");
    string ans=longestCommonPrefix(v);
    cout<<ans;
    return 0;
}