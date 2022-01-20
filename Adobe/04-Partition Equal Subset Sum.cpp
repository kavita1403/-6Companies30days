int equalPartition(int n, int ar[])
    {
        int sum=0;
        for(int i=0;i<n;i++)
        sum+=ar[i];
        if(sum%2)
            return 0;
        sum=sum/2;
        int dp[n+1][sum+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=n;i++)
        dp[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(ar[i-1]<=j)
                dp[i][j]=dp[i][j] || dp[i-1][j-ar[i-1]];
            }
        }
        return dp[n][sum];
    }
