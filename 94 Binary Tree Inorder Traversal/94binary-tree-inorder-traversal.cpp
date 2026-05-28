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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        if (root==NULL) return inorder;
        if(root->left!=NULL){   
            vector<int> left = inorderTraversal(root->left);
            inorder.insert(inorder.end(), left.begin(), left.end());
        }
        inorder.push_back(root->val);
        if(root->right!=NULL){
            vector<int> right = inorderTraversal(root->right);
            inorder.insert(inorder.end(), right.begin(), right.end());
        }
    return inorder;
    }
};