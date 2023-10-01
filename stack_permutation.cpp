#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int isStackPermutation(int N,vector<int> &A,vector<int> &B){
        int k=0;
        stack<int> st;
        for(int i=0;i<A.size();i++){
            int ele=A[i];
             st.push(ele);
            while(!st.empty() and st.top()==B[k]){
                st.pop();k++;
            }
           
        }
        if(st.empty()){
            return 1;
        }
        else{
            return 0;
        }
    }

int main(){
    vector<int> v1{1,2,3};   
    vector<int> v2{2,1,3};
    cout<<isStackPermutation(3,v1,v2);

    return 0;
}