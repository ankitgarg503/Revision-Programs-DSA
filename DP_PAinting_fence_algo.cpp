#include<iostream>
#include<vector>
using namespace std;

long long add(long long a,long long b){
    return a + b;
}
long long mul(long long a,long long b){
    return a*b;
}

long long solve(long long n,long long k,vector<long long>& dp){
    if(n==1){
        return k;
    }
    if(n==2){
        return mul(k,k);
    }
    if(dp[n]!=-1) return dp[n];
    long long ans=add(mul(solve(n-2,k,dp),k-1),mul(solve(n-1,k,dp),k-1));
    dp[n]=ans;
    return dp[n];
}

 int main(){
     long long n=16;
     long long k=18;
     vector<long long> dp(n+1,-1);
     long long ans=solve(n,k,dp);   
     cout<<ans<<endl;
    return 0;
}