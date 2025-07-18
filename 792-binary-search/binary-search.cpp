class Solution {
public:
    int search(vector<int>& nums, int key) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        //int mid=s+(e-s)/2;
        while(s<=e)
        {
        int mid=s+(e-s)/2;

            if(nums[mid]==key)
                return mid;
            
            else if(nums[mid]<key)
                s=mid+1;
            
            else
            e=mid-1;
        }
        return -1;
        
    }
};