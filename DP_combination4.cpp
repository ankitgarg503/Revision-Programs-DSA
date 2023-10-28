#include<iostream>
#include<vector>
using namespace std;

int solve( vector<int>& arr,int target,int n,vector<int>& dp){
     if(target==0) return 1;
     if(target<0) return 0;
        if(dp[target]!=-1) return dp[target];
        int ans=0;
     for(int i=0;i<arr.size();i++){
        ans+=solve(arr,target-arr[i],n,dp);
     }
     dp[target]= ans;
     return dp[target];
}
int main(){
    vector<int> arr={1,2,3};
    int n=3;
    int target=50;
    vector<int> dp(target+1,-1);
    int ans=solve(arr, target,n,dp);
    cout<<ans<<endl;
    return 0;
}