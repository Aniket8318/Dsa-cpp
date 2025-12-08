class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int sum =1;
        int maxp=INT_MIN;

        for(int val:nums)
        {
            sum=sum*val;
            maxp=max(sum,maxp);

            if(sum==0)
            {
                sum=1;
            }

        }

        int summ=1;
        int maxpp=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            summ=summ*nums[i];

            maxpp=max(summ,maxpp);
            if(summ==0)
            {
                summ=1;
            }
        }
        return max(maxp,maxpp);
        
    }
};