class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int first=-1;
        int second=-1;


        for(int n:nums)
        {
            if(n>first)
            {
                second=first;
                first=n;

                
            }
            else if(n>second){
                second=n;

            }

        }
        int ans=(first-1)*(second-1);
        return ans;
        
    }
};