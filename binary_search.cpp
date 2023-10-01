#include<iostream>
using namespace std;


bool binarySearch(int arr[],int low,int high,int key){
    if(high==0)return false;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key)return true;
        else if(arr[mid]>key){
          high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}




int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=6;
    int pivot=2;
    bool found=binarySearch(arr,0,size,pivot);
    if(found){
        cout<<"Element  is Present in the array"<<endl;
    }
    else{
        cout<<"Element is not Present in the array"<<endl;
    }
    return 0;
}