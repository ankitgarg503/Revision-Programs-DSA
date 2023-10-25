#include<iostream>
#include<vector>
using namespace std;

int solve(int arr[],int n,int target,vector<int>& dp){
     if(target==0) return 0;
     if(target<0) return 9999;
     int mini=99999;
       if(dp[target]!=-1){
        return dp[target];
       }
     for(int i=0;i<n;i++){
        int ans=solve(arr,n,target-arr[i],dp);
        if(ans!=9999){
            mini=min(mini,1+ans);
        }
     }
     dp[target]= mini;
     return mini;
}
int main(){
    int arr[]={1,2,5};
    vector<int> dp(1667,-1);
    int ans=solve(arr,3,1666,dp);
    cout<<ans<<endl;
    return 0;
}