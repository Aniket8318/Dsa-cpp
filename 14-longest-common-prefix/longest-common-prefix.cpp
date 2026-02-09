class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";

        sort(strs.begin(),strs.end());

        string ans="";
        int n=strs.size();

        string  s=strs[0],e=strs[n-1];
        int len =min(s.length(),e.length());

        for(int i=0;i<len;i++)
        
        {
            if(s[i]==e[i])
                ans+=s[i];
                else break;
            
        }
        return ans;
    }
};