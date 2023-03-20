#include <bits/stdc++.h>
using namespace std;

int lengthCommonSubStr(string x, string y)
{
    int n = x.size();
    int m = y.size();
    int soln = -1; 
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (x[i - 1] == y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = 0;

            soln = max(soln, dp[i][j]);
        }
    }
    return soln;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         
        string x, y;
        cin >> x >> y;
        int lcs=lengthCommonSubStr(x, y);
        cout<<x.size()+y.size()-2*lcs<<endl;
    }
}