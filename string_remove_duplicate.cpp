#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s="taynya";
    unordered_set<char> st;
    string p1;
    p1[0]=s[0];
    for(int i=0; i<s.size(); i++){
        if(p1.find(s[i])!=string::npos){
            continue;
        }
        else{
            p1=p1+s[i];
        }
    }
    cout<<p1<<endl;
}/*
int main(){
    string s="nitin";
    string p1;
    int p=s.size();
    p1[0]=s[0];
    sort(s.begin(), s.end());
    for (int i = 0; i <p; i++)
    {
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            p1=p1+s[i];
        }
    }
    
    cout<<p1<<endl;
    return 0;
}*/