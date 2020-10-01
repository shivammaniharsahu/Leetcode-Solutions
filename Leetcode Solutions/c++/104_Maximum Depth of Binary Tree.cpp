class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(!root)
            return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        if(left==0)
            return right+1;
        if(right==0)
            return left+1;
        return max(left,right)+1;
    }
};
