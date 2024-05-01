#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int binary2Decimal(string s){
    int pow=1;
    int ans=0;
     reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
         if(s[i]=='1'){
            ans+=pow;
         }
         pow*=2;
    }
    return ans;    
}

string decimal2Binary(int n){
     string ans="";
     while(n>0){
        if(n%2==0){
            ans+='0';
        }
        else{
            ans+='1';
        }
        n/=2;
     }
     reverse(ans.begin(), ans.end());
     return ans;
}
string one_sCompliment(string s){
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1'){
                s[i] = '0';
            }
            else{
                s[i]='1';
            }
        }
        return s;
}

int main(){
    string s="1110";
    int n=18;
    // int ans=binary2Decimal(s);
    // cout<<ans<<endl;
    string ans=decimal2Binary(n);
    cout<<ans<<endl;
    cout<<one_sCompliment(ans);
    return 0;
}