class Solution {
public:
    int longestPalindrome(string s) {

        vector<int>lower(26,0),upper(26,0);

        for(int i=0;i<s.size();i++){

            if(s[i]>='a')
            lower[s[i]-'a']++;

            else
            upper[s[i]-'A']++;
        }

        int count=0;
        bool odd=0;
        for (int i = 0; i < 26; i++) {
            // Lowercase
            if (lower[i] % 2 == 0)
                count += lower[i];
            else {
                count += lower[i] - 1;
                odd = true;
            }

            // Uppercase
            if (upper[i] % 2 == 0)
                count += upper[i];
            else {
                count += upper[i] - 1;
                odd = true;
            }
        }
        count+=odd;  
        return count;
        
    }
};