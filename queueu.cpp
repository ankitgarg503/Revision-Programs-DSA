#include<iostream>
using namespace std;

class Queue{
    int rear=-1;
    int front=-1;
    int n=20;
    int arr[20];
    public:

    bool isFull(void){
         if(rear==n or rear>n){
            return true;
         }
         else{
            return false;
         }
    }
    bool isEmpty(void){
         if( rear==front){
            return true;
         }
         else{
            return false;
         }
    }

    void enQueue(int ele){
         if(isFull()){
            cout<<" Queue is Full \n"<<endl;
         }
         else{
             rear++;
             arr[rear]=ele;
         }
    }
    int deQueue(){
            if(isEmpty()){
                cout<<" Queue is Empty \n"<<endl;
            }
            else{
                front++;
                int ele=arr[front];
                return ele;
            }
    }

};



int main(){
    Queue q1;
    if(q1.isEmpty()){
                 cout<<" Queue is Empty \n"<<endl;
    }
    if(q1.isFull()){
           cout<<" Queue is Full \n"<<endl;
    }
    q1.enQueue(20);
    if(q1.isEmpty()){
                 cout<<" Queue is Empty \n"<<endl;
    }
    return 0;
}