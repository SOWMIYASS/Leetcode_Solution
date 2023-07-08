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
    int checkBalance(TreeNode *root){
        if(root==NULL) return 0;
        int lp,rp;
       // if(root->left==NULL||root->right==NULL) return 0;
        //if(abs(lp-rp)>1) return 0;
        lp=checkBalance(root->left);
        rp=checkBalance(root->right);
        return max(lp,rp)+1;
        
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        int ls=checkBalance(root->left);
        int rs=checkBalance(root->right);
        //if(ls==rs) return 0;
        if(abs(ls-rs)>1) return 0;
        else return isBalanced(root->left) && isBalanced(root->right);

    }
};