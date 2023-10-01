#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
             if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
             }
        }
        
    }
    
}

int main(){
    int arr[]={7,6,54,3,22,11,77,1,44,55,66,88,66,55,44,33};
    printArray(arr,15);
    selectionSort(arr,15);
    printArray(arr,15);

    return 0;
}