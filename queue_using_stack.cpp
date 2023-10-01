#include<bits/stdc++.h>
 #include<iostream>
using namespace std;

class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; 

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    s1.push(x);
  
 
    
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(s1.size()==0 && s2.size()==0){
        return -1;
    }
    
    if(!s2.empty()){
        int data=s2.top();
        s2.pop();
        return data;
    }
      else{
        while(!s1.empty()){
            int ele=s1.top();
            s1.pop();
            s2.push(ele);
        }
    }
    int data=s2.top();
    s2.pop();
    return data;
    
        // Your Code       
}

int main(){
  StackQueue st;    
  st.push(3);
  st.push(2);
  st.push(1);
  st.push(4);
  cout<<st.pop()<<endl;

    return 0;
}