#include<iostream>
#include<vector>
using namespace std;

int solve(int N,int x,int y,int z,vector<int>& dp){
    if(N==0) return 0;
    if(N<0) return -999;
    if(dp[N]!=-1)
        return dp[N];

    int a=solve(N-x,x,y,z,dp) +1;
    int b=solve(N-y,x,y,z,dp) +1;
    int c=solve(N-z,x,y,z,dp) +1;
    int ans=max(a,max(b,c));
    dp[N]= ans;
    return ans;
}


int main(){
    int N=534;
    vector<int> v(N+1,-1);
    int x=5,y=3,z=2;
    int ans=solve(N,x,y,z,v);
    cout<<ans<<endl;
    return 0;
}