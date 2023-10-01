#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
  cout<<endl;
}

void merge(int arr1[],int s1,int arr2[],int s2,int arr3[]){
       int i=0;
       int j=0;
       int k=0;
       while(i<=s1 and j<=s2){
          if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;i++;
          }
          else{
            arr3[k]=arr2[j];
            k++;j++;
          }
       }
       while(i<=s1){
             arr3[k]=arr1[i];
            k++;i++;
       }
       while(j<=s2){
             arr3[k]=arr2[i];
            k++;j++;
       }
} 

int main(){
    int arr1[]={11,22,33,44,55,66,77,88};
    int arr2[]={1,23,30,48,55,68,70,89};
    int arr3[14];
    printArray(arr1,7);
    printArray(arr2,7);
    merge(arr1,7,arr2,7,arr3);
    // cout<<endl;
    printArray(arr3,14);
    return 0;
}