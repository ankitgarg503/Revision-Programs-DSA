#include<iostream>
// #include<array>
#include<algorithm>
using namespace std;
bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
   
   int low = 0;
    int high = 1; 
    // 2 Poniter Approch
    while (high < size && low < size) {
        if (low != high && arr[high] - arr[low] == n) {
            return true;
        } else if (arr[high] - arr[low] < n) {
            high++;
        } else {
            low++;
        }
    }

    return false;
}
int main(){
    int arr[]={2,5,4,3,11,45};
    int size=6;
    int n=14;
    cout<<findPair(arr,size,n)<<endl;
    return 0;
}