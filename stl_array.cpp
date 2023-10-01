#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printArray(array <int,8> arr){
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    cout<<endl;
}

int main(){
    array<int,8>arr;
    array<int,8>arr2;
    arr.fill(5);
    arr2.fill(6);
    cout<<"Array 1 Elements";
    printArray(arr);
    cout<<"Array 2 Elements";
    printArray(arr2);
 
    arr.swap(arr2);
    cout<<"Array 1 Elements";
    printArray(arr);
    cout<<"Array 2 Elements";
    printArray(arr2);
    cout<<"Size of Arary="<<arr.size();
    cout<<"\n"<<arr.back();
    cout<<"\n"<<arr.front();
    cout<<"\n"<<arr.empty();
    cout<<"\n"<<arr.max_size();
    return 0;
}