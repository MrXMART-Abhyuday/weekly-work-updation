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
    // bool isId(TreeNode *p,TreeNode *q){
        
    //     if(p->val==q->val){
    //         isId(p->left,q->left);
    //         isId(p->right,q->right);
    //         return true;
    //     }
    // return false;
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL ^ q==NULL) return false;
        if(p == NULL && q == NULL) return true;
        if(p->val==q->val){
                bool isleftsame = isSameTree(p->left,q->left);
                bool isrightsame = isSameTree(p->right,q->right);
                return isleftsame && isrightsame;
            }
        return false;
    }
};