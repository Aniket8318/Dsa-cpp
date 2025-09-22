class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
        {
            return false;
        }

        long long  n=x;
        long long revn=0;

        while(n>0)
        {
            int digit=n%10;

            revn=revn*10+digit;

            n=n/10;
        }

        if(revn==x)
        {
            return true;
        }
        else{
            return false;
        }

        
    }
};