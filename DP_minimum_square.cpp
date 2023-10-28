#include<iostream>
#include<vector>
using namespace std;

int solve(int n,vector<int>& dp){
    if(n==0 or n<0) return 0;
    if(n==1) return 1;
    int ans=9999;
    if(dp[n]!=-1) return dp[n];
    for (int i = 1; i*i<=n; i++){
        ans=min(ans,1+solve(n-i*i,dp));
    }
    dp[n]= ans;
    return dp[n];
    
}

int main(){
    int n=45;
    vector<int> dp(n+1,-1);
    int ans=solve(n,dp);
    cout<<ans<<endl;
    return 0;
}