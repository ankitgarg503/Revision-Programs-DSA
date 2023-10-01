#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

 int partition(int arr[],int low,int mid,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do
    {
        while (arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if(j>i){
            swap(arr[i],arr[j]);
        }
        
    } while (i<j);
    
    swap(arr[low],arr[j]);
    return j;
        

 }

void quickSort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
   int pIndex= partition(arr,low,mid,high);
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
}



int main(){
    int arr[]={7,6,54,3,22,11,77,1,44,55,66,88,66,55,44,33};
    printArray(arr,15);
    quickSort(arr,0,15);
    printArray(arr,15);

    return 0;
}