  #include<iostream>
  #include<vector>
  using namespace std;
  
  
    int solve(int capacity,int wt[],int val[],int index,vector<vector<int>>& dp){
        if(index==0){
            if(capacity>=wt[0])
                return val[0];
            else
                return 0;
        }
        if(dp[index][capacity]!=-1){
            return dp[index][capacity];
        }
        int incl=0;
         if(capacity>=wt[index]){
             incl=solve(capacity-wt[index],wt,val,index-1,dp)+val[index];
         }
         int excl=solve(capacity,wt,val,index-1,dp);
         dp[index][capacity]= max(incl,excl);
         return dp[index][capacity];
    }
    
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int> (W+1,-1));
       int ans=0;
       ans=solve(W,wt,val,n-1,dp);
       return ans;
    }

  int main(){
    int val[]={1,2,3};
    int wt[]={4,5,1};
    int n=3;
    int w=4;
   int ans= knapSack(w,wt,val,n);
   cout<<ans<<endl;
    return 0;
  }