class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();  // Number of nodes at the current level

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                // If it's the last node in this level, add it to result
                if (i == levelSize - 1) {
                    ans.push_back(node->val);
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }

        return ans;
    }
};
