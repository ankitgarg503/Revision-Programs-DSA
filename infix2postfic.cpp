#include<stack>
#include<iostream>
using namespace std;


int precendence(char ch){
    if(ch=='^'){
        return 4;
    }
    else if(ch=='*' or ch=='/'){
        return 3;
    }
    else if(ch=='+' or ch=='-' ){
        return 2;
    }
    else{
        return -1;
    }
}

string infix2Postfix(string s){
    string res="";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch=s[i];
        if((ch>='0' and ch<='9') or (ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            res+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() and st.top()!='('){
                char ele=st.top();
                st.pop();
                res+=ele;
            }
            st.pop();
        }
        else {
        while(!st.empty() and precendence(ch)<=precendence(st.top())){
             char ele=st.top();
             st.pop();
             res+=ele;

        }
        st.push(ch);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
    
}

int main(){
    string s="a+b-c";
    string res=infix2Postfix(s);
    cout<<s<<endl;
    cout<<res<<endl;
    return 0;
}