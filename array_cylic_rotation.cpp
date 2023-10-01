#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}   

void cyclicRotate(int arr[],int n){
       int temp=arr[n-1];
       for (int i = n-1; i>=0; i--)
       { 
          arr[i]=arr[i-1];
       }
       arr[0]=temp;
       
}


int main(){
    int arr[]={11,22,33,-55,-77,88,-65};
    printArray(arr,7);
    cyclicRotate(arr,7);
    printArray(arr,7);
    return 0;
}