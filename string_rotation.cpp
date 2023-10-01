#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s1="geeksforgeeks";
    string s2="forgeesgeeks";
    string s3=s1+s1;
    cout<<s3<<endl;
    if(s3.find(s2)!=string::npos){
        cout<<"Rotatable String"<<endl;
    }
    else{
        cout<<"Not Rotatable String"<<endl;
    }
    return 0;
}