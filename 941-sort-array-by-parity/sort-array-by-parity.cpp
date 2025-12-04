class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int s=0,e=n-1;


        while(s<e)
        {
            if(nums[s]%2 > nums[e]%2)
            {
                swap(nums[s],nums[e]);
            }
            if(nums[s]%2==0)
            s++;
            if(nums[e]%2==1)
            e--;
        }
        return nums;
        
    }
};