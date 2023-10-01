#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int maxSubArray(int arr[],int n){
    //Kadan's Algorithms
    int sum=0;
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
         sum=sum+arr[i];
         maxi=max(sum,maxi);
         if(sum<0){
            sum=0;
         }
    }
    return maxi;
}
int main(){
    int arr[]={1,12,-3,-4,-5};
    printArray(arr,5);
    int ans=maxSubArray(arr,5);
    cout<<"Maximum SubArray="<<ans;
}