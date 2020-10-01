class Solution {
public:
    unordered_map<string,bool>mp;
    
    bool fun(string s , set<string>&word ){
        if(mp.find(s)!=mp.end()){
            return mp[s];
        }
        if(s.length()==0)
            return 1;
        
        bool flag=0;
        for(int i=1;i<=s.size();i++){
            if(word.find(s.substr(0,i))!=word.end())
                if(fun(s.substr(i),word))
                    flag=1;
        }
        
        return mp[s]=flag; 
        
        
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        set<string>word(wordDict.begin(),wordDict.end());
        
       
        return fun(s,word);
    }
};
