#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
void moveNegativeElement(int arr[],int n){
    vector<int>neg;
    vector<int>pos;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }
    int ns=neg.size();
    int ps=pos.size();
    for(int i=0;i<ns;i++){
        arr[i]=neg[i];
    }
    for (int i = ns; i < ns+ps; i++)
    {
        arr[i]=pos[i-ns];
    }
    
}

int main(){
    int arr[]={11,22,33,-55,-77,88,-65,44};
    printArray(arr,7);
    moveNegativeElement(arr,7);
    cout<<endl;
    printArray(arr,7);
    return 0;
}