#include<iostream>
#include<vector>
using namespace std;

// int fib(int n,vector<int>& dp){
//     dp[0] = 0;
//     dp[1] = 1;
//     for (int i = 2; i <=n; i++) {
//          dp[i] =dp[i-1]+dp[i-2];
//     }
//     return dp[n];
    
// }
int fib(int n,vector<int>& dp){
   int prev2=0;
   int prev1=1;
   for (int i = 2; i <=n; i++){
        int curr=prev1+prev2;
        prev2=prev1;
        prev1=curr;
   }
   return prev1;
   
    
}

int main(){
    int n=6;
    vector<int> dp(n+1);
    
    
    int ans=fib(n,dp);
    cout<<ans;
    return 0;
}