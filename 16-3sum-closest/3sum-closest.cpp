class Solution {
public:
    int threeSumClosest(vector<int>& nums, int x) {
        
        sort(nums.begin(),nums.end());

        int n=nums.size();

        int closest=nums[0]+nums[1]+nums[2];

        for(int i=0;i<n-2;i++)
        {
            int start=i+1;
            int end=n-1;

            while(start<end)
            {
                int sum=nums[i]+nums[start]+nums[end];

                if(abs(x-sum)<abs(x-closest))
                closest=sum;
            

            if(sum<x){
                start++;
            }
            else if(sum>x){
                end--;
            }
            else{
                return sum;
            }
        }
        }
        return closest;
    }
};