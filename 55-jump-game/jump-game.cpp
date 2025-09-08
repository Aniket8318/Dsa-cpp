class Solution {
public:
    bool canJump(vector<int>& nums) {
     int maxjum=0;
     int n=nums.size();
     for(int i=0;i<n;i++)
     {
        if(i>maxjum) return false;
        maxjum=max(maxjum,i+nums[i]);
        if(maxjum>n-1) return true;
        
     } 
   
        return true;  
    }
};