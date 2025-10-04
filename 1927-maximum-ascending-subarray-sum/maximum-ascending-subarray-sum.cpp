class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int currSum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                
                currSum += nums[i];
            } else {
                
                currSum = nums[i];
            }
            maxi = max(maxi, currSum);
        }

        return maxi;
    }
};
