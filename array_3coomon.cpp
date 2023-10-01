#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> commonElement(int arr[],int m,int arr1[],int n,int arr2[],int o){
    vector<int>v;
    int i,j,k;
    i=j=k=0;
    while(i<m and j<n and k<o){
        if((arr[i]==arr1[j]) and (arr1[j]==arr2[k])){
             v.push_back(arr1[j]);
             i++; j++; k++;
        }
        else if(arr[i]<arr1[j]  and arr[i]<arr2[k]){
            i++;
        }
        else if(arr1[j]<arr[i]  and arr1[j]<arr2[k]){
            j++;
        }
        else if(arr2[k]<arr[i]  and arr2[k]<arr1[j]){
            k++;
        }
         else if(arr[i]<arr2[k] and arr1[j]<arr2[k]){
             i++;j++;
         }
         else if(arr1[j]<arr[i] and arr2[k]<arr[i]){
             k++;j++;
         }
         else if(arr[i]<arr1[j] and arr2[k]<arr1[j]){
             i++;k++;
         }
    }
   return v;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,18,222};
    int arr1[]={4,5,6,7,8,9,10,22,25};
    int arr2[]={6,7,8,9,10,11,22,65};
    vector<int> ans=commonElement(arr,9,arr1,9,arr2,8);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}