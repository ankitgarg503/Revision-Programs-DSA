#include<iostream>
using namespace std;
int leftist(int arr[], int n, int x)
{
    int start = 0;
    int end = n;
    int ans = -1;
    
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}

int rightist(int arr[], int n, int x)
{
    int start = 0;
    int end = n;
    int ans = -1;
    
    while(start <= end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid] == x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return ans;
}
int main(){
    int arr[]={2,3,4,4,4,5,6,6,7,7};
    int n=10;
    int x=4;
    int left = leftist(arr, n, x);
    int right = rightist(arr, n, x);
    
    cout<<left<<" "<<right<<endl;
    return 0;
}