class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size(),i;
        for(i=0;i<n;i++)
        {
            if(nums[i]<=0)
            nums[i]=1+n;
        }
        for(i=0;i<n;i++)
        {
            if(abs(nums[i])<=n&&nums[abs(nums[i])-1]>0)
                nums[abs(nums[i])-1]*=-1;
        }
        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
            {   
                return i+1;
            }
        }
        return n+1;
        
    }
};


/*
        vector<int> temp=nums;
        for(int i=0;i<nums.size();i++)
        {
           if(temp[i]<=0||temp[i]>n) continue;
           else nums[temp[i]-1]=INT_MIN;
        }
        for(int i=0;i<n;i++)
        {
            //cout<<nums[i]<<" ";
           if(nums[i]!=INT_MIN) return i+1;
        }
        return n==0?1:n+1;
        */
