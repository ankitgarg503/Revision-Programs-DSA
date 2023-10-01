#include<iostream>
using namespace std;
int main(){
    int arr[]={-3,4,5,66,-22};
    int i=0;
    int j=1;

   int left = 0, right = 5 - 1;
    while (left < right) {
        while (left < right && arr[left] < 0) {
            left++;
        }
        while (left < right && arr[right] >= 0) {
            right--;
        }
        if (left < right) {
            swap(arr[left], arr[right]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}