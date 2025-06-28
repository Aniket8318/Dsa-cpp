class Solution {
public:
    void combinations(vector<int>& candidates, int index, int target, vector<int>& current, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        if (index == candidates.size() || target < 0) {
            return;
        }

        // Include current element (allow reuse)
        current.push_back(candidates[index]);
        combinations(candidates, index, target - candidates[index], current, ans);
        current.pop_back();

        // Exclude current element and move to next
        combinations(candidates, index + 1, target, current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        combinations(candidates, 0, target, current, ans);
        return ans;
    }
};
