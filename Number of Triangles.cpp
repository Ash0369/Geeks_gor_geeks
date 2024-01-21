class Solution
{
    public:
        int numberOfTriangles(vector<vector<int>> &g,int n)
        {
            int ans=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    for(int k=0;k<n;k++)
                    {
                        if(i==j || i==k || j==k)
                        {
                            continue;
                        }
                        if(g[i][j]==1 && g[j][k]==1 && g[k][i]==1)
                        {
                            ans++;
                        }
                    }
                }
            }
            return ans/3;
        }
};
