class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        //base case or edge case 
        if(k<=0)
        return 0 ;

        int total=0;
        int product=1;
        int left=0;
        for (int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            
            // Shrink window from the left until product < k
            while (product >= k && left <= right) {
                product /= nums[left];
                left++;
            }
            
            // All subarrays ending at right and starting from left to right are valid
            total += right - left + 1;
        }
        
        return total;
    }
        
    
};