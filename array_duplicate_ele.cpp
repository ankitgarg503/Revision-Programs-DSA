#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}

int findDuplicate(vector<int>v,int n){
        for (int i = 0; i < n; i++)
        {
            if(count(v.begin(),v.end(),v[i])>1){
                return v[i];
            }
        }
        return -1;
}

int main(){
    vector<int> arr={119,88,33,-55,-77,878,11,44};
    printArray(arr,7);
    int dl=findDuplicate(arr,7);
    if(dl==-1){
        cout<<"\nDuplicate Element is not found"<<endl;
    }
   else{
    cout<<"\nDuplicate Element="<<dl<<endl;
   }
    return 0;
}