#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n){
     int j;
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
       
        for ( j = i-1; j >=0 and temp<arr[j]; j--)
        {
             arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
        printArray(arr,n);
    }
    
}

int main(){
    int arr[]={1,2,3,4,5};
    printArray(arr,5);
    insertionSort(arr,5);
    printArray(arr,5);

    return 0;
}