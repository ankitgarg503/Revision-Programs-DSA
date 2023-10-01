#include<iostream>
using namespace std;

int calculateWater(int arr[],int n){
    int left[n];
    int right[n];
    int maxi=-999;
    for (int i = 0; i <n; i++)
    {
        maxi=max(maxi,arr[i]);
        left[i]=maxi;
    }
     maxi=-999;
    for (int i = n-1; i>=0; i--)
    {
        maxi=max(maxi,arr[i]);
        right[i]=maxi;
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int mini=min(left[i],right[i])-arr[i];
        sum+=mini;
    }
    return sum;  
    
}


int main(){
    int arr[]={3,0,3,3,3,3};
    int n=6;
    int ans=calculateWater(arr,n);
    cout<<ans;
    return 0;
}