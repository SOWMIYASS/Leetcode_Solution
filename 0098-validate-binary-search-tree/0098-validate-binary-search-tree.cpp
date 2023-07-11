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
    vector<int>answer;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        answer.push_back(root->val);
        inorder(root->right);
    }
    
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL&&root->right==NULL) return true;
        inorder(root);
        for(int i=0;i<answer.size()-1;i++)
            if(answer[i+1]<=answer[i]) return false;
        return true;
        
    }
};