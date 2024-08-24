class Solution {
  public:
    int knap(int i,int W,vector<int>&wt,vector<int>&val,int n,vector<vector<int>>&dp)
    {
        if(i==n)
        return 0;

        if(dp[i][W]!=-1)
        return dp[i][W];

        int pick=INT_MIN;
        if(W>=wt[i])
        pick=val[i]+knap(i+1,W-wt[i],wt,val,n,dp);
        int notpick=knap(i+1,W,wt,val,n,dp);
        return dp[i][W]=max(pick,notpick);
    }
    // Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        // Your code here
        int n=wt.size();
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        return knap(0,W,wt,val,n,dp);
    }
};
