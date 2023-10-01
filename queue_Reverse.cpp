#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printQueue(queue<int> q,int l){

    for (int i = 0; i <l; i++)
    {
        cout<<q.front()<<"  ";
        q.pop();
    }cout<<endl;
    
}

void reverseQueue(queue<int> &q){
    if(q.empty()){
        return;
    }
    int ele=q.front();
    q.pop();
    reverseQueue(q);
    q.push(ele);
}

int main(){
    queue<int>q;
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);
    q.push(55);
    q.push(66);
  
   printQueue(q,6);
   reverseQueue(q);
   printQueue(q,6);
    return 0;
}