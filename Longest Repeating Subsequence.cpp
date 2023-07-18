class Solution 
{
	public:
		int LongestRepeatingSubsequence(string str)
		{
		    int n=str.length();
		    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
		    
		    for(int i=1;i<=n;i++)//max len if we hvae 1st sequence from 0 to i  
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==str[j-1] && i!=j)
		            {
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else
		            {
		                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		            }
		        }
		    }
		    return dp[n][n];
		}

};
