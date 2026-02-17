class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);

        int pv=0;
        int nv=1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pv]=nums[i];
                pv+=2;


            }
            else{
                ans[nv]=nums[i];
                nv+=2;
            }
        }
        return ans;


        
    }
};