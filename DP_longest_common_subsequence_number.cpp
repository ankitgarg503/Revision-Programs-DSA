#include<vector>
#include<iostream>
using namespace std;

int solve(int arr[],int n,int curr,int prev,vector<vector<int>>& dp){
    if(curr==n){
        return 0;
    }
    int incl=0;
    if(dp[curr][prev+1]!=-1){
        return dp[curr][prev+1];
    }
    if(prev==-1 or arr[prev]<arr[curr]){
        incl=1+solve(arr,n,curr+1,curr,dp);
    }
    int excl=solve(arr,n,curr+1,prev,dp);
    int ans=max(incl,excl);
    dp[curr][prev+1]=ans;
    return dp[curr][prev+1];
}



int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>> dp(n,vector<int>(n+1,-1));
    return solve(arr,n,0,-1,dp);
}
int main(){
    int arr[]={1,2,1,7,9,5};
    int ans=longestIncreasingSubsequence(arr,6);
    cout<<ans<<endl;
    return 0;
}