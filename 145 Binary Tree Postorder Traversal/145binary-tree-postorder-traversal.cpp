/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root==NULL) return postorder;
        
        if(root->left!=NULL){   
            vector<int> left = postorderTraversal(root->left);
            postorder.insert(postorder.end(), left.begin(), left.end());
        }
        if(root->right!=NULL){
            vector<int> right = postorderTraversal(root->right);
            postorder.insert(postorder.end(), right.begin(), right.end());
        }
        postorder.push_back(root->val);
    return postorder;}
};