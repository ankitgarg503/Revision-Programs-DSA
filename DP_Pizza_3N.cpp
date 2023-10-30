#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& slices,int index,int n,int end,vector<vector<int>>& dp){
    if(index>end or n==0){
        return 0;
    }
    if(dp[index][n]!=-1) return dp[index][n];
    int incl=slices[index]+solve(slices,index+2,n-1,end,dp);
    int excl=solve(slices,index+1,n,end,dp);
    dp[index][n]= max(incl,excl);
    return dp[index][n];
}


int main(){
    vector<int> slices={1,2,3,4,5,6};
    int n=slices.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    vector<vector<int>> dp2(n,vector<int>(n,-1));
    int incl=solve(slices,0,n/3,n-2,dp);
    int excl=solve(slices,1,n/3,n-1,dp2);
    cout<<max(incl,excl)<<endl;

    return 0;
}