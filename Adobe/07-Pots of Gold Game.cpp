int find(vector<int> &A,int st,int en,vector<vector<int>> &dp)
    {
        if(st>en)
        return 0;
        if(dp[st][en]!=-1)
        return dp[st][en];
        return dp[st][en]= max(A[st]+min(find(A,st+2,en,dp),find(A,st+1,en-1,dp)),A[en]+min(find(A,st+1,en-1,dp),find(A,st,en-2,dp)));
    }

    int maxCoins(vector<int>&A,int n)
    {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return find(A,0,n-1,dp);
    }
