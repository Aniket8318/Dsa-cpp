class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int>fq;

        for(int i:s)
        {
            fq[i]++;
        }


        priority_queue<pair<int,char>>pq;

        for(auto it:fq)
        {
            pq.push({it.second,it.first});
        }

        //ab ansewr buit kange 

        string ans="";

        while(!pq.empty())
        {
            auto top=pq.top();
            pq.pop();

            ans.append(top.first,top.second);

        }
        return ans;
        
    }
};