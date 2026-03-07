class Solution {
public:
bool isvowel(char c)
{
    return c=='a' || c=='e' || c=='i' || c=='o' ||c=='u';
}
    int maxVowels(string s, int k) {

        int count=0;
        int sum=0;


        for(int i=0;i<k;i++)
        {
            sum+=isvowel(s[i]);
            
        }
        int maxsum=sum;

        for(int i=k;i<s.size();i++)
        {
          sum=sum+isvowel(s[i]);
          sum-=isvowel(s[i-k]);

          maxsum=max(maxsum,sum);
        }
        return maxsum;

        
    }
};