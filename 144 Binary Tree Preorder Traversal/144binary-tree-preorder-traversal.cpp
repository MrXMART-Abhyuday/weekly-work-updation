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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if (root==NULL) return preorder;
        preorder.push_back(root->val);
        if(root->left!=NULL){   
            vector<int> left = preorderTraversal(root->left);
            preorder.insert(preorder.end(), left.begin(), left.end());
        }
        if(root->right!=NULL){
            vector<int> right = preorderTraversal(root->right);
            preorder.insert(preorder.end(), right.begin(), right.end());
        }
    return preorder;
    }
};