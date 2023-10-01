#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printQueue( deque<int>q,int l){

    for (int i = 0; i <l; i++)
    {
        cout<<q.front()<<"  ";
        q.pop_front();
    }cout<<endl;
    
}

 void reverseQueue( deque<int> &q ,int range,int index){
    vector<int>s;
    for(int i=0;i<range;i++){
        s.push_back(q.front());
        q.pop_front();
    }
    for (int i = 0; i < range; i++)
    {
        int ele=s[i];
        q.push_front(ele);
        
    }
    
 }

int main(){
    deque<int>q;
    q.push_back(11);
    q.push_back(22);
    q.push_back(33);
    q.push_back(44);
    q.push_back(55);
    q.push_back(66);
 
   
   printQueue(q,6);
    reverseQueue(q,3,0);
    printQueue(q,6);
    return 0;
}