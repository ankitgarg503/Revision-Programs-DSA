#include<iostream>
#include<vector>
using namespace std;
int solve(int N,vector<int>& dp){
    if(N==1){
        return 0;
    }
    if(N==2){
        return 1;
    }
    if(dp[N]!=-1) return dp[N];
    int ans=(N-1)*(solve(N-1,dp) + solve(N-2,dp));
    dp[N]= ans;
    return dp[N];
}
int main(){
    int N=12345;
    vector<int> v(6,-1);
    int ans=solve(5,v);
    cout<<ans<<endl;
    return 0;
}