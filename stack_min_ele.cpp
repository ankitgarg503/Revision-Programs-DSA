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
int main(){
    stack<int>s;
    s.push(22);
    s.push(2);
    s.push(29);
    s.push(30);
    s.push(40);
    s.push(167);
    s.push(50);
    cout<<getMin(s)<<endl;
    return 0;
}