#include<iostream>
#include<vector>
using namespace std;


// At most 2 times
int solve3(vector<int>& v,int buy,int index, vector<vector<vector<int>>>& dp,int limit){
     if(index>=v.size()){
        return 0;
     }
     if(limit==0){
        return 0;
     }
     if(dp[index][buy][limit]!=-1){
            return dp[index][buy][limit];
     }
     int profit=0;
     if(buy){
         profit=max(-v[index]+solve3(v,0,index+1,dp,limit),solve3(v,1,index+1,dp,limit));
     }
     else{
        profit=max(v[index]+solve3(v,1,index,dp,limit-1),solve3(v,0,index+1,dp,limit));
     }
     dp[index][buy][limit]= profit;
     return dp[index][buy][limit];
}

// multiple times
int solve2(vector<int>& v,int buy,int index,vector<vector<int>>& dp){
     if(index>=v.size()){
        return 0;
     }
     if(dp[index][buy]!=-1){
            return dp[index][buy];
     }
     int profit=0;
     if(buy){
         profit=max(-v[index]+solve2(v,0,index+1,dp),solve2(v,1,index+1,dp));
     }
     else{
        profit=max(v[index]+solve2(v,1,index,dp),solve2(v,0,index+1,dp));
     }
     dp[index][buy]= profit;
     return dp[index][buy];
}



// single times
int solve(vector<int>& v){
    int mindiff=v[0];
    int maxiProfit=0;
    for (int i = 1; i < v.size(); i++)
    {
        int diff=v[i]-mindiff;
        mindiff=min(v[i],mindiff);
        maxiProfit=max(maxiProfit,diff);

    }
    return maxiProfit;   
}


int main(){
    vector<int> v={7,1,5,3,6,4};
    // int ans=solve(v);
    // cout<<ans<<endl;
    int n=v.size();
    // vector<vector<int>>dp(n+1,vector<int>(2,-1));
    //  int ans=solve2(v,1,0,dp);
    //  cout<<ans<<endl;
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
     int ans=solve3(v,1,0,dp,2);
     cout<<ans<<endl;
    return 0;
}