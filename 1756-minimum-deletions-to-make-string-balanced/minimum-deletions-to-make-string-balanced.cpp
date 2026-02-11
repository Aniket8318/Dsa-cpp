class Solution {
public:
    int minimumDeletions(string s) {
        int bCount = 0;
        int ans = 0;

        for(char ch : s) {
            if(ch == 'b') {
                bCount++;
            } else { 
                ans = min(ans + 1, bCount);
            }
        }

        return ans;
    }
};
