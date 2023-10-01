#include<iostream>
#include<queue>
using namespace std;

class Stack{
   public:
   queue<int> q;
   void push(int ele){
         q.push(ele);
         for (int i = 0; i <q.size()-1; i++){
              int element=q.front();
              q.pop();
              q.push(element);
         }
   }
   void pop(){
        if(q.empty()){
            cout<<"Empty queue"<<endl;
        }
        q.pop();
   }

   int top(void){
        if(q.empty()){
            return -1;
        }
        else{
            return q.front();
        }
   }

};


int main(){
    Stack s1;
    s1.push(23);
    s1.push(3);
    s1.push(223);
    s1.push(283);
     cout<<s1.top()<<endl;
     s1.pop();
     cout<<s1.top()<<endl;
     s1.pop();
     cout<<s1.top()<<endl;
     s1.pop();
     cout<<s1.top()<<endl;
     s1.pop();
    return 0;
}