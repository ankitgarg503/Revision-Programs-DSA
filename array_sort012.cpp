#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void sort(int arr[],int n){
    int low = 0;
    int mid=0;
    int high=n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    
    
}
int main(){
    int arr[]={0,1,1,1,1,0,0,2,2,2,1,0,0,2};
    printArray(arr,14);
    sort(arr,14);
    printArray(arr,14);
    return 0;
}