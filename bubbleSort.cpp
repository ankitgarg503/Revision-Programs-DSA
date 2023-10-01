#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printArray(arr,5);

        for (int j = 0; j <n-i-1; j++)
        {
             if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
             }
        }
        
    }
    
}

int main(){
    int arr[]={7,6,54,3,22};
    printArray(arr,5);
    bubbleSort(arr,5);
    printArray(arr,5);

    return 0;
}