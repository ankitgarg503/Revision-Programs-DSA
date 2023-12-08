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
    int s=0;
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
             if(arr[minIndex]>arr[j]){
                minIndex=j;
               
             }
        }
        swap(arr[i],arr[minIndex]);
         s++;
        
    }
    cout<<"No. of Swaps="<<s<<endl;
}

int main(){
    int arr[]={7,6,54,3,22,11,77,1,44,55,66,88,66,55,44,33};
    printArray(arr,15);
    selectionSort(arr,15);
    printArray(arr,15);

    return 0;
}