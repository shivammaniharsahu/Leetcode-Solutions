//Problem Link : - https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int>v;
        stack<int>s;
        for(auto i:nums2){
            while((!s.empty()) && s.top()<i){
                mp[s.top()]=i; 
                s.pop();
            }
            s.push(i);
        }
        for(auto i:nums1){
            v.push_back(mp.count(i)?mp[i]:-1);
        }
        return v;
    }
};
