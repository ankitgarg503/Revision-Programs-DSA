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


int main(){
    string s="a*b+(c-d)*(f+g^n-p)";
    string ans=infix2postfix(s);
    cout<<ans<<endl;
    return 0;
}