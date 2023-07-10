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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>>answer;
        queue<TreeNode*>temp;
        temp.push(root);
        while(!temp.empty()){
            vector<int>res;
            int count=temp.size();
            while(count--){
                TreeNode *curr=temp.front();
                temp.pop();
                res.push_back(curr->val);
                if(curr->left!=NULL) temp.push(curr->left);
                if(curr->right!=NULL) temp.push(curr->right);
            }
            answer.push_back(res);
        }
        return answer;
    }
};