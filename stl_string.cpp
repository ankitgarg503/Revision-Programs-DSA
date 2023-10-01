#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     string s1="Nitya is a good girl";
     string s2="nkit";
     cout<<s1.find("good")<<endl;
     cout<<s1+s2;   
     if(s1==s2){
        cout<<"\nstring are equal"<<endl;
     }
     else{
        cout<<"\nstring are not equal"<<endl;
     }
    return 0;
}