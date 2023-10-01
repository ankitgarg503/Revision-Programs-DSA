#include<iostream>
using namespace std;

void printArray(char s[],int n){
    for(int i=0;i<n;i++){
        cout<<s[i]<<"  ";
    }
    cout<<endl;
}
void printArray2(string s,int n){
    for(int i=0;i<n;i++){
        cout<<s[i]<<"  ";
    }
    cout<<endl;
}

void reverse(char arr[],int s,int e){
    if(s>=e){
        return;
    }
    swap(arr[s],arr[e]);
    reverse(arr,s+1,e-1);
}
void reverse2(string &arr,int s,int e){
    if(s>=e){
        return;
    }
    swap(arr[s],arr[e]);
    reverse2(arr,s+1,e-1);
}
int main(){
    // int arr[]={1,2,3,4,5};
    // printArray(arr,5);
    // reverse(arr,0,4);
    // printArray(arr,5);
    char arr[]="Khushi";
    string s="Khushi";
    // printArray(arr,6);
    // reverse(arr,0,5);
    printArray2(s,6);
    reverse2(s,0,5);
    // printArray(arr,6);
    printArray2(s,6);
    return 0;
}