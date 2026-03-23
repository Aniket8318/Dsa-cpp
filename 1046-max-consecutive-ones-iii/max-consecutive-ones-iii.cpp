class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int j=0;
        int zerocount=0;
        int ans=0;
         
         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]==0)
            {
                zerocount++;
            }

            while(zerocount>k)
            {
                if(nums[j]==0)
                zerocount--;
                j++;


            }
            ans=max(i-j+1,ans);
         }

return ans;

        
    }
};