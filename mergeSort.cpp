#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

 void merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int A[20];
    while(i<=mid and j<=high){
        if(arr[i]<arr[j]){
            A[k]=arr[i];
            i++;k++;
        }
        else{
            A[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=mid){
            A[k]=arr[i];
            i++;k++;
    }
    while(j<=high){
            A[k]=arr[j];
            j++;k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=A[i];
    }
    

 }

void mergeSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



int main(){
    int arr[]={7,6,54,3,22,11,77,1,44,55,66,88,66,55,44,33};
    printArray(arr,15);
    mergeSort(arr,0,15);
    printArray(arr,15);

    return 0;
}