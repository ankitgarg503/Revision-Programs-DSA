#include<vector>
#include<iostream>
using namespace std;

int solve(vector<int>& cost,vector<int>& days,int  index,vector<int>& dp){
        if(index>=days.size()){
            return 0;
        }
        if(dp[index]!=-1) return dp[index];
        int opt1=cost[0]+solve(cost,days,index+1,dp);
        int i;
        for ( i = index; i<days.size() and days[i]<days[index]+7; i++);
        int opt2=cost[1]+solve(cost,days,i,dp);

        for ( i = index; i<days.size() and days[i]<days[index]+30; i++);
        int opt3=cost[2]+solve(cost,days,i,dp);

        dp[index]= min(opt1,min(opt2,opt3));
        return dp[index];
        
}


int main(){
    vector<int> cost={2,7,15};
    vector<int> days={1,4,6,7,8,20,21,23,25,26,28,29};
    int n=days.size();
    vector<int> dp(n+1,-1);
    int ans=solve(cost, days,0,dp);
    cout<<ans<<endl;
    return 0;
}