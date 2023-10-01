#include<iostream>
#include<stack>
#include<string>
// #include<bits/stdc++.h>
using namespace std;


int precedence(char ch){
    if(ch == '^')
        return 3;
    else if(ch == '*' or ch=='/')
        return 2;
    else if(ch == '+' or ch=='-')
        return 1;
    else 
        return 0;

}

string infix2postfix(string s){
       if (s.size()==0 or s.size()==1){
            return s;
       }
       stack<char> st;
       string ans="";
       for (int i = 0; i < s.size(); i++)
       {
           char ch=s[i];
           if ((s[i] >= 'a' && s[i] <= 'z' )  or (s[i] >= 'A' && s[i] <= 'Z' ) or (s[i] >= '0' && s[i] <= '9' ) )
           {
                ans+=ch;
           }
           else if(ch=='('){
                st.push(ch);
           }
           else if(ch==')'){
             while (!st.empty() and st.top()!='(')
             {
                 ans+=st.top();
                 st.pop();
                  
             }
             st.pop();
             
           }
           else{
             while(!st.empty() and precedence(ch)<=precedence(st.top())){
                   ans+=st.top();
                   st.pop();
           }
           st.push(ch);
        }           
       }
       while (!st.empty())
       {
         ans+=st.top();
         st.pop();
       }
           return ans;      
}

int evaluate(string ans){
    stack<int> st;
    int res=0;
    for (int i = 0; i < ans.size(); i++)
    {
        if(!st.empty() and (ans[i] =='+' or ans[i] =='-' or  ans[i] =='*' or ans[i] =='/' )){
            int tp1=st.top();
            st.pop();
            int tp2=st.top();
            st.pop();
            if(ans[i]=='+'){
                res=tp1+tp2;    
            }
            else if(ans[i]=='-'){
                res=tp2-tp1; 
            }
            else if(ans[i]=='*'){
                res=tp1*tp2;
            }
            else{
                res=tp2/tp1;
            }
            st.push(res);
        }
        else{
            st.push(ans[i]-48);
        }
    }
    return res;
}

int main(){
    string s="1+2-3";
    string ans=infix2postfix(s);
     int res=evaluate(ans);
    cout<<ans<<endl;
     cout<<res<<endl;
    return 0;
}