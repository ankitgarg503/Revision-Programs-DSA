#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<"  ";
    }
  
}

void merge(int arr1[],int s1,int arr2[],int s2){
       int i=s1;
       int j=0;
       int k=0;
       while(i>=0 and j<=s2){
          if(arr1[i]>=arr2[j]){
             swap(arr1[i],arr2[j]);
             i--; 
          }
          else{
              j++;
          }
       }
       sort(arr1,arr1+s1+1);
       sort(arr2,arr2+s2+1);
} 

int main(){
    int arr1[]={11,22,33,44,55,66,77,88};
    int arr2[]={1,23,30,48,55,68,70,89};
    printArray(arr1, 7);
     cout<<endl;
    printArray(arr2, 7);
    merge(arr1,7,arr2,7);
      cout<<endl;
    printArray(arr1, 7);
    printArray(arr2, 7);
   
    return 0;
}