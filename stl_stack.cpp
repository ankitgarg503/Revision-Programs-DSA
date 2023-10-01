#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s1;
    string str="Nitya Saini is a beautiful girl";
    int p=str.size();
    for (int i = 0; i <str.size(); i++)
    {
         char temp=str[i];
         s1.push(temp);
    }
     cout<<str<<endl;
    for (int i = 0; i <p; i++)
    {
         str[i] = s1.top();
         s1.pop();
    }
     cout<<str<<endl;
    
    

    return 0;
}