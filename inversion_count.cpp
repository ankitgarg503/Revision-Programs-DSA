#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

 int merge(int arr[],int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    vector<int> A;
    int count=0;
    while(i<=mid and j<=high){
        if(arr[i]<=arr[j]){
            // A[k]=arr[i];
            A.push_back(arr[i]);
            i++;k++;
        }
        else{
            // A[k]=arr[j];
            A.push_back(arr[j]);
            count+=mid-i+1;
            j++;k++;
        }
    }
    while(i<=mid){
            A.push_back(arr[i]);
            i++;k++;
    }
    while(j<=high){
            A.push_back(arr[j]);
            j++;k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=A[i-low];
    }
    return count;

 }

int mergeSort(int arr[],int low,int high){
       int count=0;
    if(low>=high){
        return count;
    }
 
    int mid=(low+high)/2;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}



int main(){
    int arr[]={2,4,1,3,5,6,8,5,4,3,1,7,44,56,88,90,2};
    printArray(arr,17);
   int ans= mergeSort(arr,0,16);
   cout<<"\nCount Inversion="<<ans<<endl;
    printArray(arr,17);

    return 0;
}