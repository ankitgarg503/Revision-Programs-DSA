#include<stack>

#include<iostream>
using namespace std;

void sortSolve(stack<int>& st){
    stack<int> s;
   while(!st.empty())
    {
        int ele=st.top();
        st.pop();
        while (!s.empty() and s.top()>ele)
        {
            st.push(s.top());
            s.pop();
        }
        s.push(ele);   
    }   
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
        while (!s.empty())
        {
            st.push(s.top());
            s.pop();
        }

}


int main(){
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(5);
    st.push(4);
    sortSolve(st);
    // cout<<st.top();
    // st.pop();
    // cout<<st.top();
    // st.pop();
    // cout<<st.top();
    // st.pop();
    // cout<<st.top();
    // st.pop();
    // cout<<st.top();
    // st.pop();

    
    
    return 0;
}