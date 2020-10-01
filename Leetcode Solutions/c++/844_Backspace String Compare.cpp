//https://leetcode.com/problems/backspace-string-compare/
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char>s;
        stack<char>t;
        for(int i=0;i<S.size();i++){
            if(S[i]=='#'){
                if(!s.empty())s.pop();
            }
            else s.push(S[i]);
        }
        S="";
        while(!s.empty()){S+=s.top();s.pop();}
        for(int i=0;i<T.size();i++){
            if(T[i]=='#'){
                if(!t.empty())t.pop();
            }
            else t.push(T[i]);
        }
        T="";
        while(!t.empty()){T+=t.top();t.pop();}
        if(S==T)return true;
        return false;
    }
};