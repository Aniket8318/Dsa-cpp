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
 private:
    void inOrder(TreeNode* parent, vector<int>& ans) 
    {
        if (parent== nullptr)
        return;
    inOrder(parent->left,ans);
    ans.push_back(parent->val);
    inOrder(parent->right,ans);
     }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inOrder(root,ans);
        return ans;
        


    
        
    }
};  