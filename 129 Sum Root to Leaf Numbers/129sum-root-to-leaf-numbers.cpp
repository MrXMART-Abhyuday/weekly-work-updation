class Solution {
public:
    int dfs(TreeNode* root, int currsum){
        if(root==NULL)return 0;
        currsum = currsum * 10 + root->val;
        if(root->left==NULL && root->right==NULL)
            return currsum;

        return dfs(root->left,currsum)+dfs(root->right,currsum);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};