#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  printArray(long long arr[],long long n){
    for(long long i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

 long long merge(long long arr[],long long low,long long mid,long long high){
    long long i=low;
    long long j=mid+1;
    long long k=low;
    vector<long long> A;
    long long count=0;
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
    for (long long i = low; i <= high; i++)
    {
        arr[i]=A[i-low];
    }
    return count;

 }

long long mergeSort(long long arr[],long long low,long long high){
       long long count=0;
    if(low>=high){
        return count;
    }
 
    long long mid=(low+high)/2;
    count+=mergeSort(arr,low,mid);
    count+=mergeSort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}



int main(){
    long long arr[]={2,4,1,3,5,6,8,5,4,3,1,7,44,56,88,90,2};
    printArray(arr,17);
   long long ans= mergeSort(arr,0,16);
   cout<<"\nCount Inversion="<<ans<<endl;
    printArray(arr,17);

    return 0;
}