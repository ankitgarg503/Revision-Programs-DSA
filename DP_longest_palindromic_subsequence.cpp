#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(string a ,string b,int i,int j,vector<vector<int>>& dp){
    if(i>=a.size()) return 0;
    if(j>=b.size()) return 0;
     if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(a[i]==b[j]){
        ans= 1+solve(a,b,i+1,j+1,dp);
    }
    else{
        ans= max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
    }
    return dp[i][j]=ans;
}


int main(){
    string a="nitya";
    string c="nityankitgargsaini";
    string b=a;
    reverse(b.begin(), b.end());
    vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,-1));
    int ans=solve(a,b,0,0,dp);
    cout<<ans<<endl;
    return 0;
}