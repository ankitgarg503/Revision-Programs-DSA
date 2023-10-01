#include<iostream>
using namespace std;

class Queue{
    int front;
    int rear;
    int *arr;
    int size;
    public:
    Queue(){
        front=rear=-1;
        size=10;
        arr=new int[size];
    } 
     int isEmpty(){
        if(front==rear){
           return 1;
        }
        else{
            return 0;
        }
    }
    int isFull(){
        if(rear==size-1){
            return 1;
        }
        else{
            return 0;
        }       
    }
    void enQueue(int ele){
         if(isFull()){
            cout<<"Queue Overflow";
         }
         else{
            rear++;
            arr[rear]=ele;
         }
    }
    
    int deQueue(void){
         if(isEmpty()){
            cout<<"Queue Underflow";
            return -1;
         }
         else{
            front++;
            int ele=arr[front];
            return ele;
         }
    }
};



int main(){
    Queue q;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    q.enQueue(3);

    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    cout<<"DeQueue Element="<<q.deQueue()<<endl;
    return 0;
}