class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        m[0]=1;

        int prefixsum=0,result=0;


        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            int qes=prefixsum-k;

            int frq=m[qes];

            result+=frq;
            m[prefixsum]++;


        }
        return result;
        
    }
};