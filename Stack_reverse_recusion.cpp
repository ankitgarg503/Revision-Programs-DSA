#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& p,int ele){
    if (p.empty()) {
        p.push(ele);
        return;
    }
    int s=p.top();
    p.pop();
    insertAtBottom(p,ele);
    p.push(s);
    
}


void reverse(stack<int>& p){
    if (p.empty()){
        return;
    }
    int ele=p.top();
    p.pop();
    reverse(p);
    insertAtBottom(p,ele);
    
}


int main(){
    stack<int> p;
    p.push(11);
    p.push(22);
    p.push(33);
    p.push(44);
    p.push(55);
    p.push(66);
    p.push(77);
     reverse(p);
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    p.pop();
    return 0;
}