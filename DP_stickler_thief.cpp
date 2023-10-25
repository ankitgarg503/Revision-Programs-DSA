#include<iostream>
#include<vector>
using namespace std;
int solve(int arr[],int n,vector<int>& dp){
    if(n==0){
        return arr[0];
    }
    if(n<0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int incl=arr[n]+solve(arr,n-2,dp);
    int excl=solve(arr,n-1,dp);
    int ans=max(incl,excl);
    dp[n]=ans;
    return ans;
}
int main(){
    int arr[]={10,5,12,3,6,5,5,5,5,5,5};
    vector<int> dp(11,-1);
    int ans=solve(arr,10,dp);
    cout<<ans<<endl;
    return 0;
}