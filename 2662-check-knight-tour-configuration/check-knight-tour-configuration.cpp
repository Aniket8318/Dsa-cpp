class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Step 1: Starting position must be (0,0) with step 0
        if(grid[0][0] != 0) return false;
        
        // Step 2: For each step from 0 to n*n-2, find the position of k and k+1
        for(int step = 0; step < n*n - 1; step++) {
            pair<int,int> cur = findPos(grid, step);
            pair<int,int> nxt = findPos(grid, step + 1);
            
            if(!isKnightMove(cur.first, cur.second, nxt.first, nxt.second))
                return false;
        }
        return true;
    }

private:
    // Find coordinates of a step in the grid
    pair<int,int> findPos(vector<vector<int>>& grid, int target) {
        int n = grid.size();
        for(int r = 0; r < n; r++) {
            for(int c = 0; c < n; c++) {
                if(grid[r][c] == target) return {r, c};
            }
        }
        return {-1, -1}; // shouldn't happen
    }
    
    // Check if (r1,c1) → (r2,c2) is a knight move
    bool isKnightMove(int r1, int c1, int r2, int c2) {
        int dr = abs(r1 - r2), dc = abs(c1 - c2);
        return (dr == 1 && dc == 2) || (dr == 2 && dc == 1);
    }
};
