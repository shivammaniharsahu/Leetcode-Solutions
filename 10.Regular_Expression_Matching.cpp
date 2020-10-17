
/**
 * Solution to Regular Expression Matching at LeetCode in C++
 *
 * author: Ishaan Srivastav
 * ref: https://leetcode.com/problems/regular-expression-matching/
 */

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = p.size(), n = s.size();
        vector<vector<bool>> dp(m+1,vector<bool>(n+1,false));
        dp[0][0] = true;
        if(m>=2 && p[1] == '*')
            dp[2][0] = true;
        
        for(int i = 2;i<=m;i++){
            if(p[i] == '*')
                dp[i+1][0] = dp[i-1][0];
        }
        
        for(int i =1;i<=m;i++){
            for(int j = 1;j<=n;j++){
                if(p[i-1] == s[j-1] || p[i-1] == '.')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[i-1] == '*'){
                    if(p[i-2] == s[j-1] || p[i-2] == '.')
                        dp[i][j] = (dp[i-2][j] || dp[i][j-1]);
                    else if(p[i-2] != s[j-1])
                        dp[i][j] = dp[i-2][j];
                }
            }
        }
        
        return dp[m][n];
    }
};
