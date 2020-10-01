/*
Leetcode problem no .- 32
problem name -Longest Valid Parentheses
Difficulty - hard

*/
class Solution {
public:
    int longestValidParentheses(string s) {
        int res=0;
        stack<int>stk;
        stk.push(-1);
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                stk.push(i);
            else{
                stk.pop();
                if(!stk.empty())
                    res = max(res,i-stk.top());
                else
                    stk.push(i);
            }
        
        }
        return res;
        
    }
};
