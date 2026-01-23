class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int>freq(26,0);
        vector<bool>visited(26,false);
        string result="";

//count frequency 
        for(char c: s)
        
            freq[c-'a']++;

            //tranverse string 

            for(char c:s)
            {
                freq[c-'a']--;

                //agr phale se result me ho to skip kar dena hai 

                if(visited[c-'a'])
                continue;


                //condition check

                while(!result.empty() &&
                result.back() > c &&
                freq[result.back() -'a'] >0 
                )
                {
                    visited[result.back()-'a']=false;
                    result.pop_back();
                }

                // add karan hai current ke result me 

                result.push_back(c);
                visited[c-'a']=true;

            }
            return result;
        
    }
};