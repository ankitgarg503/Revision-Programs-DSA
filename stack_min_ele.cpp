#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMin(stack<int>s){
    if(s.empty()){
        return INT_MAX;
    }
    int tp=s.top();
    s.pop();
    int ans=getMin(s);
    return min(tp, ans);
}
void insertAtBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int elem=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(elem);
}
void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
     insertAtBottom(st,ele);
}
int main(){
    stack<int>s;
    s.push(22);
   
    s.push(167);
    s.push(50);
    // cout<<getMin(s)<<endl;
    cout<<s.top()<<endl;
    reverse(s);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    insertAtBottom(s,100);
    cout<<s.size()<<endl;
    return 0;
}