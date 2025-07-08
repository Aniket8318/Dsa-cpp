class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        //int maxEle = *max_element(nums.begin(), nums.end());
        int maxEle=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            maxEle=max(maxEle,nums[i]);
        }
        
        long long total = 0;
        int start = 0, end = 0, count = 0;

        while (end < n) {
            if (nums[end] == maxEle)
                count++;

            while (count == k) {
                // All subarrays starting from `start` and ending at [end ... n-1] are valid
                total += (n - end);
                if (nums[start] == maxEle)
                    count--;
                start++;
            }

            end++;
        }

        return total;
    }
};
