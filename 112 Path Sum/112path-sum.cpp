class Solution {
public:
    int target;
    bool found=false;
    void dfs(TreeNode* root, int currsum){
        if(root==NULL) return;
        currsum+=root->val;
        if(root->left == NULL && root->right == NULL){
            if(currsum == target)
                found = true;
            return;
        }    
            dfs(root->left,currsum);
            dfs(root->right,currsum); 
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
        dfs(root,0);
        return found;
    }
};