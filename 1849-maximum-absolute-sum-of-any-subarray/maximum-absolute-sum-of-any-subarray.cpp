class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {

        int n=nums.size();

        int cur_sum=0;
        int max_sum=INT_MIN;
        int cur_min=0;
        int min_sum=INT_MAX;

        for(int val:nums)
        {
        
            cur_sum=max(val,cur_sum+val);
            max_sum=max(max_sum,cur_sum);

            cur_min=min(val,cur_min+val);
            min_sum=min(cur_min,min_sum);
        }
        return max(abs(max_sum),abs(min_sum));


        
    }
};