#include<iostream>
#include<vector>
using namespace std;
int maximum(int arr[],int size){
    int maxi=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
void printArray2(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void printArray(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={11,2,3,12,8,9,1};
    int maxi=maximum(arr,7);
      vector<int> cnt(maxi+1,0);
      for(int i=0;i<7;i++){
        cnt[arr[i]]=cnt[arr[i]]+1;
      }
      printArray(cnt,13);
      int i=0,j=0;
      while(i<=maxi){
        if(cnt[i]>0){
            arr[j]=i;
            cnt[i]=cnt[i]-1;
            j++;
        }
        else{
            i++;
        }
      }
    printArray2(arr,8);
    return 0;
}