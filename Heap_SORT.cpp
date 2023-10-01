#include<iostream>
using namespace std;

void  printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


void heapify(int arr[],int n,int index){
    int largest=index;
    int left=2*index;
    int right=2*index+1;
    if(left<=n and arr[largest]<arr[left]){
            largest=left;
    }
    if(right<=n and arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=index){
        swap(arr[index],arr[largest]);
        heapify(arr,n,largest);
    }

}

void heapSort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
         printArray(arr,n+1);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    int arr[]={-1,22,33,44,55,4,66};
    int n=7;
    printArray(arr,n);
    for (int i = n/2; i>0; i--)
    {
        heapify(arr,n,i);
        /* code */
    }
    printArray(arr,n);
    heapSort(arr,n-1);
    cout<<"***** HEAP SORT ******** ******* "<<endl;
    printArray(arr,n);
    
    return 0;
}