#include<iostream>
#include<stdlib.h>

 using namespace std;

class Stack{
    int size;
    int top1,top2;
    int *arr;
    public:
    Stack(int size){
        this->size = size;
        this->top1 =-1;
        this->top2 =size;
        arr=new int[size];
    }
    int isEmpty1(void){
        if(top1==-1){
                return 1;
            }
        else{
            return 0;
        }   
    }
        
    int isEmpty2(void){
        if(top2==size){
                return 1;
        }
        else{
                return 0;
        }   
    }

    int isFull1(void){
        if(top1>=top2-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    
    int isFull2(void){
        if(top2<=top1+1){
            return 1;
        }
        else{
            return 0;
        }
    }

    

 void push1(int data){
        if(isFull1()){
            cout<<"Stack1 Overflow"<<endl;
        }
        else{
            top1++;
            arr[top1]=data;
        }
 }
 


 void push2(int data){
    if(isFull2()){
        cout<<"Stack2 Overflow"<<endl;
    }
    else{
        top2--;
        arr[top2]=data;
    }
 }

 int pop1(void){
    if(isEmpty1()){
        cout<<"Stack1 Underflow"<<endl;
        return -1;
    }
    else{
        int data=arr[top1];
        top1--;
        return data;
    }
 } 

 int pop2(void){
    if(isEmpty2()){
        cout<<"Stack2 Underflow"<<endl;
        return -1;
    }
    else{
        int data=arr[top2];
        top2++;
        return data;
    }
 } 


};






int main(){
   Stack st(6);
   st.push2(23);
   st.push2(25);
   st.push2(26);
   st.push1(27);
   st.push1(28);
   st.push2(29);
   st.push2(30);
   cout<<st.pop2()<<endl;
   cout<<st.pop2()<<endl;
   cout<<st.pop2()<<endl;
   cout<<st.pop2()<<endl;
   cout<<st.pop2()<<endl;
   cout<<st.pop2()<<endl;
   cout<<st.pop1()<<endl;
   cout<<st.pop1()<<endl;
   cout<<st.pop1()<<endl;

   
   
   
//    st.push2(25);
//    cout<<st.pop1();
//    cout<<st.pop2();
//    cout<<st.isEmpty1();
//    cout<<st.isEmpty2();

}