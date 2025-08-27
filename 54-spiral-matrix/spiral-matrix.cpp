class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int top = 0, bottom = row - 1;
        int left = 0, right = col - 1;

        while (top <= bottom && left <= right) {
            // 1. Traverse top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;  // move boundary down

            // 2. Traverse right column
            for (int j = top; j <= bottom; j++) {
                ans.push_back(matrix[j][right]);
            }
            right--;  // move boundary left

            // 3. Traverse bottom row 
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;  // move boundary up
            }

            // 4. Traverse left column 
            if (left <= right) {
                for (int j = bottom; j >= top; j--) {
                    ans.push_back(matrix[j][left]);
                }
                left++;  // move boundary right
            }
        }

        return ans;
    }
};
