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
    bool b=true;
    int  checkBalance(TreeNode* root){
        if(root==NULL) return 0;
        int lp=checkBalance(root->left);
        int rp=checkBalance(root->right);
        if(abs(lp-rp)>1) b=false;
        return max(lp,rp)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        checkBalance(root);
        return b;

    }
};