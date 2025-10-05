class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n=nums.size();
        int cout1=0;
        int count2=0;
        int ans;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                cout1++;
            }
            else if(nums[i]>0)
            {
                count2++;
            }
            ans=max(cout1,count2);
            
        }
        return ans;
        
    }
};