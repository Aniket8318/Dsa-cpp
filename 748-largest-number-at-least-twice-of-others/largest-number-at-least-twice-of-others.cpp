class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int n=nums.size();

        int largest=INT_MIN,index=-1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>largest)
            {
                largest=nums[i];
                index=i;
            }
        }

        int secondlargest=INT_MIN;

        for(int i=0;i<n;i++)

        {
            if (i!= index && nums[i] > secondlargest) {
                secondlargest = nums[i];
            }
        }
        if(largest>=2*secondlargest)
        {
            return index;
        }
        return -1;
        
    }
};