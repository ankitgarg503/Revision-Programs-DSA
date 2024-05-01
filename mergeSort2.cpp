#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

// Time Complexity is O(nLogn)
// Merge Sort is not inPlace sorting algorithm that is why it required O(n) extra space


void merge(int arr[],int low,int mid,int high){
    int B[20];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid and j<=high){
            if(arr[i]>arr[j]){
                B[k]=arr[j];
                j++;
                k++;
            }
            else{
                B[k]=arr[i];
                i++;
                k++;
            }
    }
    while(i<=mid){
                B[k]=arr[i];
                i++;
                k++;
    }
    while(j<=high){
                B[k]=arr[j];
                j++;
                k++;
    }
    for (int i = low; i <=high; i++)
    {
        arr[i]=B[i];
    }
    

}



void mergeSort(int arr[],int low,int high){
    if(low>=high){
        return ;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    int arr[]={11,3,22,4,5,6};
    printArray(arr,6);
    int n=6;
    int low=0;
    int high=n-1;
    mergeSort(arr,low,high);
    printArray(arr,6);
    return 0;
}