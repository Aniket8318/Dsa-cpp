class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int top = 0, bottom = n - 1;
        int left = 0, right = n - 1;
        int num = 1;

        while (top <= bottom && left <= right) {
            // 1. Fill top row
            for (int i = left; i <= right; i++) {
                ans[top][i] = num++;
            }
            top++;

            // 2. Fill right column
            for (int j = top; j <= bottom; j++) {
                ans[j][right] = num++;
            }
            right--;

            // 3. Fill bottom row
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans[bottom][i] = num++;
                }
                bottom--;
            }

            // 4. Fill left column
            if (left <= right) {
                for (int j = bottom; j >= top; j--) {
                    ans[j][left] = num++;
                }
                left++;
            }
        }

        return ans;
    }
};
