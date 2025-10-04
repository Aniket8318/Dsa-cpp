class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int,int>freq;
        

        for(int x:arr)
        {
            freq[x]++;
        }

        int ans=-1;

        for(auto &p:freq)
        {
            int num=p.first;
            int count=p.second;

            if(num==count)
            {
                ans=max(ans,num);
            }
        }
        return ans;

        
    }
};