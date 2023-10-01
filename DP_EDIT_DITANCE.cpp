#include<iostream>
#include<vector>
using namespace std;

int solve(string a ,string b,int i,int j,vector<vector<int>>& dp){
    if(i>=a.size()) return b.size()-j;
    if(j>=b.size()) return a.size()-i;
     if(dp[i][j]!=-1) return dp[i][j];
    int ans=0;
    if(a[i]==b[j]){
        return solve(a,b,i+1,j+1,dp);
    }
    else{
        int insert=1+solve(a,b,i,j+1,dp);
        int delet=1+solve(a,b,i+1,j,dp);
        int replace=1+solve(a,b,i+1,j+1,dp);
        ans=min(insert,min(replace,delet));
        dp[i][j]=ans;
    }
    return dp[i][j]=ans;
}


int main(){
    string a="samar";
    string b="smiley";
    vector<vector<int>>dp(a.size()+1,vector<int>(b.size()+1,-1));
    int ans=solve(a,b,0,0,dp);
    cout<<ans<<endl;
    return 0;
}