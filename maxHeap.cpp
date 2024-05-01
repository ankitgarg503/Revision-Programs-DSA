#include<iostream>
using namespace std;

void  printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

 void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(arr[left]> arr[largest] and left<=n){
            largest=left;
        }
        if(arr[right]> arr[largest] and right<=n){
            largest=right;
        }
        if(i!=largest){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
 }

int main(){
    int arr[6]={0,11,22,33,4,55};
    int n=6;
    printArray(arr,n);
    for (int i = n/2; i >0; i--)
    {
        heapify(arr,n,i);
    }
    printArray(arr,n);
    
    return 0;
}