#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(void){
 stack<char> s1;
    string p=")(";
    for (int i = 0; i < p.size(); i++)
    {
        if(p[i]=='(' or p[i]=='[' or p[i]=='{' ){
            s1.push(p[i]);
        }
        else if(p[i]==')'){
            if(!s1.empty() and s1.top()=='('){
                s1.pop();
            }
            else{
                return false;
            }
        }
        else if(p[i]=='}'){
            if(!s1.empty() and s1.top()=='{'){
                s1.pop();
            }
            else{
                return false;
            }
        }
        else if(p[i]==']'){
            if(!s1.empty() and s1.top()=='['){
                s1.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s1.empty()){
        return true;
    }
    else{
        return false;
    }
}



int main(){
   
    if(isValid()){
        cout<<"Balanced PArenthesis"<<endl;
    } 
    else{
        cout<<"Un balanced PArenthesis"<<endl;
    }
    return 0;
}