#include<iostream>
#include<vector>
using namespace std;

int solve(int arr[], vector<int>& ans, int index, int n,int sum,int k) {
    if (index == n) {
        if(sum==k){
            return 1;
        }
        else{
            return 0;
        }
    
    }
    
    // ans.push_back(arr[index]);
    sum+=arr[index];
    int left=solve(arr, ans, index + 1, n,sum,k);
    sum-=arr[index];
    // ans.pop_back();
     int right=  solve(arr, ans, index + 1, n,sum,k);
     return left+right;
}





int main(){
    int arr[]={3,1,2};
    int k=48;
    int sum=0;
    vector<int> ans;
    cout<<solve(arr,ans,0,3,sum,k);
    return 0;
}