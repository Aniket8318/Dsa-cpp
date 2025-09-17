class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        
        int totalSum = 0;
        int currMax = 0, maxSum = INT_MIN;
        int currMin = 0, minSum = INT_MAX;

        for (int num : nums) {
            // Kadane for max subarray
            currMax = max(num, currMax + num);
            maxSum = max(maxSum, currMax);

            // Kadane for min subarray
            currMin = min(num, currMin + num);
            minSum = min(minSum, currMin);

            totalSum += num;
        }

        // If all numbers are negative, maxSum is the answer
        if (maxSum < 0) return maxSum;

        // Otherwise, max of normal and circular
        return max(maxSum, totalSum - minSum);
    }
};
