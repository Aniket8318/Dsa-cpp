class Solution {
public:
    void find(int row, int n, vector<vector<string>>& ans, vector<string>& Board,
              vector<bool>& column, vector<int>& rightdig, vector<int>& leftdig) {
        if (row == n) {
            ans.push_back(Board);
            return;
        }

        for (int j = 0; j < n; j++) {
            // Check if it's safe to place a queen
            if (column[j]==0 && leftdig[n - 1 + j - row]==0 && rightdig[row + j]==0) {
                Board[row][j] = 'Q';
                column[j] = 1;
                leftdig[n - 1 + j - row] = 1;
                rightdig[row + j] = 1;

                find(row + 1, n, ans, Board, column, rightdig, leftdig);

                // Backtrack
                Board[row][j] = '.';
                column[j] = 0;
                leftdig[n - 1 + j - row] = 0;
                rightdig[row + j] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> Board(n, string(n, '.')); // Create board filled with '.'
        vector<int> leftdig(2 * n - 1, 0);       // For left diagonals
        vector<int> rightdig(2 * n - 1, 0);      // For right diagonals
        vector<bool> column(n, 0);               // For columns

        find(0, n, ans, Board, column, rightdig, leftdig);
        return ans;
    }
};
