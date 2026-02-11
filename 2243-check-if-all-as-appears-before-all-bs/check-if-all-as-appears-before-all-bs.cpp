class Solution {
public:
    bool checkString(string s) {
        bool seenb=false;

        
        for(char ch:s)
        {
            if(ch=='b')
            seenb=true;


            if(ch=='a' && seenb)
            return false;




        }
        return true;

        
    }
};